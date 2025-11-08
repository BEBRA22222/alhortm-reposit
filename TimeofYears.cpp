#include <iostream>
using namespace std;

int main() {
	int monthUser;
	cout << "Input: ";
	cin >> monthUser;

	switch (monthUser) {
		case 1:
			cout << "Jan";
			break;
		case 2:
			cout << "Feb";
			break;
		case 3:
			cout << "Mart";
			break;
		case 4:
			cout << "April";
			break;
		case 5:
			cout << "May";
			break;
		case 6:
			cout << "June";
			break;
		case 7:
			cout << "July";
			break;
		case 8:
			cout << "Aug";
			break;
		case 9:
			cout << "Sep";
			break;
		case 10:
			cout << "Oct";
			break;
		case 11:
			cout << "Nov";
			break;
		case 12:
			cout << "Dec";
			break;
		default:
			cout << "Ishak";
			break;
	}
	return 0;
}
