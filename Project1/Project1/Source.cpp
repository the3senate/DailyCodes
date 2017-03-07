#include <iostream>
2 using namespace std;
3 int main() {
	4 	int input;
	5 	int input2;
	6 	int sum = 0;
	7 	cout << "What would you like your first number to be good sir?" << endl << endl;
	8 	cin >> input;
	9 	cout << "What would you like your second number to be good sir?" << endl << endl;
	10 	cin >> input2;
	11 	for (int i = 0; i < input; i++)
		12 		sum = sum + input2;
	13

		14 	cout << sum;
	15
}
