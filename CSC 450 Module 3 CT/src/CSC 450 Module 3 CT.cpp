//============================================================================
// Name        : CSC 450 3 CT.cpp
// Author      : Zach Winterton
// Date        : 1/04/2024
// Description : Program asks user to enter three integer values. The program then stores values into three separate variables.
// For each variable, there is an integer pointer. The program will display the contents of the variables and pointers.
//============================================================================

#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;
	int* ptr1, * ptr2, * ptr3;

	// Getting input from user, per each value
	cout << "Enter the first integer value: ";
	cin >> num1;

	cout << "Enter the second integer value: ";
	cin >> num2;

	cout << "Enter the third integer value: ";
	cin >> num3;

	// Allocating memory dynamically for pointers
	ptr1 = new int;
	ptr2 = new int;
	ptr3 = new int;

	// Assigning the values to pointers
	*ptr1 = num1;
	*ptr2 = num2;
	*ptr3 = num3;

	// Displaying contents of variables and the pointers
	cout << "\nValues of variables:" << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;

	cout << "\nValues of pointers:" << endl;
	cout << "*ptr1: " << ptr1 << endl;
	cout << "*ptr2: " << ptr2 << endl;
	cout << "*ptr3: " << ptr3 << endl;

	// Deallocate memory
	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}
