//Babajide Sanusi
//Mar 17, 2021
//Program: to reverse a given integer

#include <iostream>

using namespace std;

void instruction();
int getNum();
void reverseNum(int);

int main() {
	instruction();
	reverseNum(getNum());
	return 0;
}

void instruction()
{
	cout << "Hi, user." << endl
		<< "This program reverses an integer." << endl
		<< "Example: The user enters 1234, we return 4321." << endl;
}

int getNum()
{
	int intt;
	cout << endl;
	cout << "Please enter a number: ";
	cin >> intt;
	return intt;
}

void reverseNum(int intt)
{
	//to clear the negation of a negative integer
	if (intt < 0) { intt *= -1; cout << '-'; }

	while (intt != 0)
	{
		//Print out the last number
		cout << intt % 10;

		intt /= 10;
	}
	cout << endl;
}
