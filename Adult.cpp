#include "Adult.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Adult Default+Overloaded Constructor
Adult::Adult(const string& aName, int aAge, char aGender) : Person(aName, aAge, aGender) {
	this->SetAge(aAge); // only age needs to be checked for adult
}
// end Adult constructor 


//============================= OPERATIONS ===================================
// function that depicts eating of Adult.
void Adult::Eat() {
	cout << "Adult ";
	Person::Eat();
}
// end function Eat

// function that depicts walking of Adult.
void Adult::Walk() {
	cout << "Adult ";
	Person::Walk();
}
// end function Walk


//============================= ACESS      ===================================

// function that sets Name of Adult
void Adult::SetName(const string& aName) {
	Person::SetName();
}
// end function SetName

// function that sets age of Adult
void Adult::SetAge(int aAge) {
	if (aAge < 18 || aAge>125) {
		cout << "Error: Age out of range. Setting to default." << endl;
		Person::SetAge(18);
	}
	else
		Person::SetAge(aAge);
}
// end function SetAge

// function that sets gender of Adult
void Adult::SetGender(char aGender) {
	Person::SetGender(aGender);
}
// end function SetGender

// function that sets Adult
void Adult::SetAdult(const string& aName, int aAge, char aGender) {
	this->SetName(aName);
	this->SetAge(aAge);
	this->SetGender(aGender);
}
// end function SetAdult

// function that sets the Adult
void Adult::SetAdult(const Adult& obj) {
	this->SetAdult(obj.GetName(), obj.GetAge(), obj.GetGender());
}
// end function SetAdult

// function that gets Fist Name of Adult
const string& Adult::GetName() const {
	return Person::GetName();
}
// end function GetName

// function that gets age of Adult
int Adult::GetAge() const {
	return Person::GetAge();
}
// end function GetAge

// function that gets gender of Adult
char Adult::GetGender() const {
	return Person::GetGender();
}
// end function GetGender

// function that gets the Adult
const Adult& Adult::GetAdult()const {
	return *this;
}
// end function GetAdult