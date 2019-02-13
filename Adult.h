/**  Adult class (privately) inherited from Person class.
*
* #include "Student.h" <BR>
* -llib
*
*/
#ifndef ADULT_H
#define ADULT_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person.h"

// Adult class definition
class Adult : private Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Adult(const string& = "", int = 0, char = '/0');

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Adult(const Adult&);
	// Adult& operator=(const Adult&);
	// ~Adult();

// OPERATIONS
	/** function that depicts eating of Adult.
	*
	* @param void
	*
	* @return void
	*/
	void Eat();

	/** function that depicts walking of Adult.
	*
	* @param void
	*
	* @return void
	*/
	void Walk();

// ACCESS
	// setters
	void SetName(const string& = "");
	void SetAge(int = 0);
	void SetGender(char = '/0');
	void SetAdult(const string& = "", int = 0, char = '/0');
	/**
	# @overload void SetAdult(const Adult& aAdult);
	*/
	void SetAdult(const Adult& aAdult);

	// getters
	const string& GetName() const;
	int GetAge() const;
	char GetGender() const;
	const Adult& GetAdult()const;
};
// end class Adult
#endif  
// _ADULT_H_