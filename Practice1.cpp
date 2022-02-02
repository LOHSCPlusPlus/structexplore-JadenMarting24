#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string lastName;
};

int main() {
	// Create two instances of person here, and assign the names.
  // First person
  Person a;
  a.firstName = "Dorian";
  a.lastName = "Gray";
  // Second person
  Person b;
  b.firstName = "Charlie";
  b.lastName = "Brown";




	// Add the prints here
  
  cout << "person 1: " << a.firstName << " " << a.lastName << endl;
  cout << "person 2: " << b.firstName << " " << b.lastName << endl;
	return 0;
}
