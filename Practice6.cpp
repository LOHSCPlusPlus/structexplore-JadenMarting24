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
void printPerson(Person p) {
    cout << "first name: " << p.firstName << ", lastName: " << p.lastName << endl;
}
void ChangeLastName(Person &p, string newName){
  p.lastName = newName;
}
int main() {
  
  // First person
  Person a("Linus", "VanPelt");
  a.firstName = "Dorian";
  a.lastName = "Gray";
  printPerson(a);
  // Second person
  Person b;
  b.firstName = "Charlie";
  b.lastName = "Brown";
  ChangeLastName(b, "Torvalds");
  printPerson(b);
	
  
  
}

