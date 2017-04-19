#include <iostream>
using namespace std;
int main() {
	char input;
	//before the fun stuff
	cin >> input;
	cout << "(by the way,type the letters e.w.n.s to go to certain directions)." << endl;
	char input;
	int room = 1;
	while (input != 'q') {
		switch (room)
		{
		case 1:
			cout << "you're in the living quarters. you can go n, e, w, s and x to examine the area" << endl;
			cin >> input;
			if (input == 'w')
				room = 20;
			else if (input == 'e')
				room = 7;
			else if (input == 's')
				room = 14;
			else if (input == 'n')
				room = 2;
			else if (input == 'x')
				cout <<""<< endl;
				break;
			

			//                            /|\                              |
			//here's the good ol' room one | and room two is down here    \|/


			
		case 2:
			cout << "you're in a hallway. you can go n, e, w, s" << endl;
			cin >> input;
			if (input == 'w')
				room = 15;
			else if (input == 'e')
				room = 5;
			else if (input == 's')
				room = 1;
			else if (input == 'n')
				room = 3;
			cout << "you enter the turbo laser batteries room,looks likes the cannons are unmanned at the moment. " << endl;
			break;
		case 3:
			cout << "you're in the room with the rightside turbo lasers. you can go n, e,  s" << endl;
			cin >> input;

			if (input == 'e')
				room = 6;
			else if (input == 's')
				room = 2;
			else if (input == 'n')
						room = 4;
			break;
			cout << "you are in the ion cannon batteries room. you can only go s" << endl;
			 if (input == 's')
				room = 3;
		case 4:
			cout << "you're in a hallway. you can go n, e, w, s" << endl;
			cin >> input;
			if (input == 'w')
				room = 20;
			else if (input == 'e')
				room =7 ;
			else if (input == 'n')
				room = 6;
			
		}//end switch
	}//end of game loop
}//end main