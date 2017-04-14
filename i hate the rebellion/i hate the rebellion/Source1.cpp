#include <iostream>
using namespace std;
int main() {
	char input;
	//before the fun stuff
	cout << "you wake up in the empty living quarters" << endl;
	cin >> input;
	cout << "(by the way,type the letters e.w.n.s to go to certain directions)." << endl;
	char input;
	int room = 1;
	while (input != 'q') {
		switch (room)
		{
		case 1: room;

			cin >> input;
			if (input == 'w')
				cout << "you go west,thus arriving at a bed but you aren't tired. what are you even doing?" << endl;
			else if (input == 'e')
				cout << "going east,you appear to have walked to a locked door with a terminal saying accsess denied"<< endl;
			else if (input == 's')
				cout << "you proceed to go south now,thus arriving at a bed but you aren't tired. what are you even doing?" << endl;
			else if (input == 'n')
				cout << "you go north,passing through the  large metal door as it flungs open once you had gotten close. well atleast it didn't kill you"<<endl;
			room = 2;

			//                            /|\                            |
			//here's the good ol' room one | and room two is down here	\|/


			break;
		case 2:
			if (input == 'w')
				cout << "you go west again but you appear to hit your head against the wall of the hall way. good going." << endl;
			else if (input == 'e')
				cout << "you go east,re-entering the empty living quarters." << endl;
			else if (input == 'n')
				cout << "you proceed to go north,entering a long hall wayy that appears to lead into the north again,the east eventually ending too a elevator and more to the west leading to a even longer hall." << endl;
			else if(input=='s')

	}
}