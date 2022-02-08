#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
  Person();
  Person(string xVal, string yVal);
};
Person::Person(){
  firstName = "unknown";
  lastName = "unknown";
}

Person::Person(string xVal, string yVal) {
	firstName = xVal;
	lastName = yVal;
}
int main() {
	// Create two instances of person here, and assign the names.
  // First person
  Person a("Linus", "VanPelt");
  cout << a.firstName << " " << a.lastName << endl;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  cout << a.firstName << " " << a.lastName << endl;
  // Second person
  Person b;
  cout << b.firstName << " " << b.lastName << endl;
  b.firstName = "Charlie";
  b.lastName = "Brown";
  cout << b.firstName << " " << b.lastName << endl;

	// Add the prints here
  
  cout << "person 1: " << a.firstName << " " << a.lastName << endl;
  cout << "person 2: " << b.firstName << " " << b.lastName << endl;
	return 0;
}
