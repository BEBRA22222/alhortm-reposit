#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	short timeofyear;
	cout << "Введите число от 1 - 4: ";
	cin >> timeofyear;
	if (timeofyear == 1) {
		cout << "Сейчас лето, съездийте на море" << endl;
	}
	else if (timeofyear == 2) {
		cout << " Сейчас осень, следует одеться тепло и взять с собой зонт." << endl;
	}
	else if (timeofyear == 3) {
		cout << "Сейчас зима, следует одеться теплее и пить больше чая" << endl;
	}
	else if (timeofyear == 4) {
		cout << "Сейчас весна, носите дождевик" << endl;
	}
	else {
		cout << "Такого времени года нет" << endl;
	}

	return 0;
}
