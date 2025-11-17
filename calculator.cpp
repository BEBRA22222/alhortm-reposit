#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {

	setlocale(0, "");

	while (true) {

		vector<string> history(9);
		cout << "введите число: ";
		float a;
		cin >> a, history.push_back(to_string((int)a) + " ");
		cout << "введите действие (+, -, * , /): ";
		char op;
		cin >> op, history.push_back(string(1, op) + " ");
		cout << "введите второе число: ";
		float b;
		cin >> b, history.push_back(to_string((int)b) + " ");
		float result;
		switch (op)
		{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		case '%':
			result = fmod(a, b);
			break;
		default:
			cout << "Вы ввели не коректную операцию" << endl;
			return 1;
		}
		history.push_back("= " + to_string((int)result) + "\n");
		cout << "Результат: " << result << endl;
		cout << "хотите посмотреть историю? (y/n)" << endl;
		char answer;
		cin >> answer;

		if (answer == 'y')
		{
			if (history.empty())
			{
				cout << "История пуста." << endl;
			}
			else
			{
				cout << "История операций:" << endl;
				for (int i = 0; i < history.size(); i++)
				{
					cout << history[i];
				}
			}
		}
		else
		{
			cout << "До свидания!" << endl;
		}
	}
	return 0;
}
