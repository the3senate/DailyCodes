#include<iostream>
#include<string.h>
using namespace std;
int main() {
	string inventory[5];
	string input;
	cout << "behold young jedi,your inventory" << endl;
	for (int i = 0; i < 5; i++)
		inventory[i] = "it appears you don't have your lightsaber now you will die.";


	cout << "Hey champ do you want the magic sword?" << endl;
	cin >> input;
	if (input.compare("yes") == 0) {
		inventory[1] = "Magic Sword";
	}

	for (int i = 0;i < 5;i++)
		cout << inventory[i] << endl;

	if (inventory[1] == "Magic Sword") {
		cout << "You have won" << endl;
	}




}

	

}