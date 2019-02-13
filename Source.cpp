/**
* @file Source.cpp
*
* @brief This code implements Specialization(Restriction)
* in C++ using private inheritance.
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include<string>
using namespace std;

// LOCAL INCLUDES
#include "Adult.h"



// function main begins program execution
void main() {

	Adult a1, a2("Saif", 32, 'm'), a3("John", 14, 'M');

	cout << "ADULT 1" << endl;
	cout << "Name: " << a1.GetName() << endl;
	cout << "Age: " << a1.GetAge() << endl;
	cout << "Gender: " << a1.GetGender() << endl;
	a1.Eat();
	a1.Walk();

	cout << "ADULT 2" << endl;
	cout << "Name: " << a2.GetName() << endl;
	cout << "Age: " << a2.GetAge() << endl;
	cout << "Gender: " << a2.GetGender() << endl;
	a2.Eat();
	a2.Walk();

	cout << "ADULT 3" << endl;
	cout << "Name: " << a3.GetName() << endl;
	cout << "Age: " << a3.GetAge() << endl;
	cout << "Gender: " << a3.GetGender() << endl;
	a3.Eat();
	a3.Walk();


	system("pause");
}
// end main