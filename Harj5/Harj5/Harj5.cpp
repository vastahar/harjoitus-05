// HARJOITUS 5
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

int luku1;
int luku2;

void main()
{
	int luku1;
	cout << "Anna luku 1: ";
	cin >> luku1;

	int luku2;
	cout << "Anna luku 2: ";
	cin >> luku2;

	if (luku1 == luku2)
		cout << "BINGO" << endl;

	else
		cout << "BONGO" << endl;

}