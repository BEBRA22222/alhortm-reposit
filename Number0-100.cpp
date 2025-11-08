#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	short number;
	cout << "Введите число от 0 - 100: ";
	cin >> number;
	if (number <= 10 and number >= 0 and number >=100) {
		cout << "вы попали в диапозон 0 - 10" << endl;
	}
	else if (number <= 20 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 11 - 20" << endl;
	}
	else if (number <= 30 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 21 - 30" << endl;
	}
	else if (number <= 40 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 31 - 40" << endl;
	}
	else if (number <= 50 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 41 - 50" << endl;
	}
	else if (number <= 60 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 51 - 60" << endl;
	}
	else if (number <= 70 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 61 - 70" << endl;
	}
	else if (number <= 80 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 71 - 80" << endl;
	}
	else if (number <= 90 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 81 - 90" << endl;
	}
	else if (number <= 100 and number >= 0 and number >= 100) {
		cout << "вы попали в диапозон 91 - 100" << endl;
	}
	else {
		cout << "вы ввели число не из  диапозона" << endl;
	}
	

	return 0;
}
