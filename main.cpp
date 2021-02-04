#include<iostream> //library
using namespace std;

int main() { //starting pt of program

	int room = 1; //declared and initialized variable
	char input = 'a'; //declared variable
	int health = 100;

	cout << "Welcome to the HAUNTED MANSION" << endl;

	while (input != 'q') { //game loop

		switch (room) { //holds different rooms

		case 1://cases represent rooms in this program
			cout << "you're in the living room" << endl;
			cout << "you can go (n)orth, (s)outh, (w)est" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			else if (input == 's')
				room = 3;
			else if (input == 'w')
				room = 4;
			else
				cout << "sorry, I don't understand that" << endl;
			break;

		case 2:
			cout << "you're in the dining room" << endl;
			cout << "you can go (n)orth, (s)outh, (e)ast" << endl;
			cin >> input;
			if (input == 'n')
				room = 6;
			else if (input == 's')
				room = 1;
			else if (input == 'e')
				room = 5;
			else
				cout << "sorry, I don't understand that" << endl;
			break;
		case 3:
			cout << "you're in the bedroom" << endl;
			break;


		}//end of switch

		//shows up between EVERY turn
		cout << "you have " << health << " health left" << endl;

	}//end game loop

	//only shows up AFTER the game is done
	cout << "thanks for playing!" << endl;

}//end of main
