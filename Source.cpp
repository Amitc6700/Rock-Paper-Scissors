#include <iostream>
#include <time.h>
using namespace std;

int main() {

	srand(time(0));

	string playerChoice;
	string computerChoice; 
	string computerChoices[3] = { "Rock", "Paper", "Scissors" };
	string restart;

	bool isPlaying = true;
	int playerWins = 0;
	int playerLosses = 0;
	int playerTies = 0;

	cout << "Welcome to Rock, Paper, Scissors" << endl;
	
	
	while (isPlaying) {
		computerChoice = computerChoices[rand() % 3];

		while (true) {
			cout << "Please make an input now; either Rock, Paper, or Scissors." << endl;
			cin >> playerChoice;
			if (playerChoice == "Rock") {
				cout << "You have chosen: Rock" << endl << endl;
				break;
			}
			else if (playerChoice == "Scissors") {
				cout << "You have chosen: Scissors" << endl << endl;
				break;
			}
			else if (playerChoice == "Paper") {
				cout << "You have chosen: Paper" << endl << endl;
				break;
			}
			else {
				cout << "Please enter a valid choice." << endl << endl;
			}
		}

		cout << "The computer has chosen: " << computerChoice << endl;

		//tie section
		if (playerChoice == computerChoice) {
			cout << "Both players have chosen " << playerChoice << "." << endl;
			playerTies++;
		}

		//Rock Section
		else if (playerChoice == "Rock") {
			if (computerChoice == "Scissors") {
				cout << "You have won! Yay!" << endl;
				playerWins++;
			}
			else if (computerChoice == "Paper") {
				cout << "You have lost." << endl;
				playerLosses++;
			}
		}

		//Paper Section
		else if (playerChoice == "Paper"){
			if (computerChoice == "Rock") {
				cout << "You have won! Yay!" << endl;
				playerWins++;
			}
			else if (computerChoice == "Scissors") {
				cout << "You have lost." << endl;
				playerLosses++;
			}
		}

		//Scissor Section
		else if (playerChoice == "Scissors") {
			if (computerChoice == "Rock"){
				cout << "You have lost." << endl;
				playerLosses++;
			}
			else if (computerChoice == "Paper") {
				cout << "You have won! Yay!" << endl;
				playerWins++;
			}
		}

		cout << "Your wins: " << playerWins << endl;
		cout << "Your losses: " << playerLosses << endl;
		cout << "Your ties: " << playerTies << endl;

		while (true) {
			cout << "Would you like to go again? Please enter either 'Yes' or 'No'" << endl;
			cin >> restart;

			if (restart == "Yes") {
				break;
			}
			else if (restart == "No") {
				isPlaying = false;
				break;
			}
			else {
				cout << "Please enter a valid choice." << endl;
			}
		}
	}
	return 0;
	}