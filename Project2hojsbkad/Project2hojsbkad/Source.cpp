#include<iostream>//made by Trevin and TJ
using namespace std;
int main() {
	int count = 0;
	char input;
	cout << "Press b." << endl;
	cin >> input;
	while (input == 'b') {
		count++;
		cin >> input;
	}
	cout << "Wow,you really don't know how to play video games." << endl;
	cout << "After all, you pressed b like " << count << " times." << endl;
}
