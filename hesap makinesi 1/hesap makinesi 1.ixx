#include <iostream>
using namespace std;
int main()
{
	//MUSTAFA ELDIKAN.. STUDENT NO:1306210108.. 25.10.2021.. ASSIGNMENT #2 (P1)
	double choice;
	cout << "1.FOR (+)" << endl;
	cout << "2.FOT (-)" << endl;
	cout << "3.FOR (*)" << endl;
	cout << "4.FOR (/)" << endl;
	cout << "Please choose one of the calculation..." << endl;

	cin >> choice;

	if(choice >=1 && choice <=4)
	{
		double a, b;
		cout << "Please write the first number..." << endl;
		cin >> a;
		cout << "Please write the second number..." << endl;
		cin >> b;

		if(choice == 1)
			cout << a << " + " << b << " = " << a + b << endl;
		if(choice == 2)
			cout << a << " - " << b << " = " << a - b << endl;
		if(choice == 3)
			cout << a << " * " << b << " = " << a * b << endl;
		if(choice == 4)
			cout << a << " / " << b << " = " << a / b << endl;
	}
		else {
			cout << "You entered the wrong number...Please try again :((" << endl;
		}

	return 0;
}