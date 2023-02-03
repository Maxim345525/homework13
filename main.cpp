#include<iostream>
using namespace std;
int main()
{
	char symbol;
	int i;
	int a;
	do
	{
		cout << "Hello =).Input number of symbol--> ";
		cin >> i;
		cout << "Input symbol-->";
		cin >> symbol;
		cout << "Input line:1 - vertical 2 - horizontal";
		cin >> a;
		switch (a) {
		case 1:
			while (i != 0) {
				cout << symbol;
				i--;
			}
			break;
		case 2:
			while (i != 0) {
				cout << symbol;
				i--;
			}
			break;
		default:
			cout << "Error 404";
		}
		cout << "If you continue input 1";
		cin >> i;
	} while (i == 1);
}