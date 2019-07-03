#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

/*
Fun program created to use functions that output a fun effect 
using asterisks and periods.
*/

int main()
{
	int num;
	string character;

	cout << "Enter number of rows: ";
	cin >> num;
	character = asterisk(num, character);
	cout << character << endl;
	character = updateAsterisk(num, character);

	return 0;
}
string asterisk(int num, string character) {
	for (int i = 0; i < num; i++)
		character += "*";

	return character + "\n";
}

string updateAsterisk(int num, string character) {
	for (int i = 0; i < num - 1; i++)
	{
		character.at(i) = '.';
		cout << character << endl;
	}
	return character;
}