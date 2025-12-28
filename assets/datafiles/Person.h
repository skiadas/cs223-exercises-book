/************* DO NOT CHANGE THIS FILE! *************/
//
// Person.h
// Class provided: Person
//
// Author: Barbara Wahl
// Date:   1-21-2018
//
// CONSTRUCTORS for the Person class:
//   Person(std::string fname = "J", std::string lname = "Doe", int A = 0);
//      Precondition: May be called with 0 arguments, 1 argument (fname),
//                    2 arguments (fname, lname), or all 3 arguments.
//      Precondition: fname has size 1 or more
//      Precondition: lname has size 1 or more
//      Precondition: A >= 0
//      Postcondition: An instance of class Person has been initialized with
//                     the provided (or default) values: fname, lname, A
//
// ACCESSOR MEMBER FUNCTIONS
//   std::string getFirstName() const;
//      Precondition: None
//      Postcondition: person's first name is returned
//
//   std::string getLastName() const;
//      Precondition: None
//      Postcondition: person's last name is returned
//
//   int getAge() const;
//      Precondition: None
//      Postcondition: person's age is returned
//
//   std::string getFullName() const;
//      Precondition: None
//      Postcondition: person's full name (first and last) is returned
//
// MODIFICATION MEMBER FUNCTIONS for the Person class:
//   void setFirstName(std::string newName);
//      Precondition: newName has size 1 or more
//      Postcondition: person's first name is now newName
//
//   void setLastName(std::string newName);
//      Precondition: newName has size 1 or more
//      Postcondition: person's last name is now newName
//
//   void setAge(int newAge);
//      Precondition: newAge >= 0
//      Postcondition: person's age is now newAge
//
//   void agePerson();
//      Precondition: None
//      Postcondition: person's age is now one year older
//
// VALUE SEMANTICS
//    The automatic assignment operator and copy constructor may be used with
//    Person objects.
//
//    For example, if p1 and p2 are existing Person objects:
//
//          p2 = p1         is an assignment which changes the data for p2 to
//                          match the data for p1, and
//
//          Person p3(p1)   uses the copy constructor to initialize a new Person
//                          object, p3, with all the same data as p1.
//
//    Note that `Person p3(p1)` is equivalent to:  `Person p3 = p1`.
//
//
// FRIEND FUNCTIONS (may access private data directly, not members of the class)
//   friend std::ostream& operator <<(std::ostream& out, const Person& person);
//   friend std::istream& operator >>(std::istream& in, Person& person);
//
// ----------------------------------------------------------------------------
//
// The operators below are being defined to work WITH the Person class, but
// are not themselves part of the class and are not FRIENDS of the class.
//
// OPERATOR OVERLOADING:
//
//   bool operator==(const Person& personA, const Person& personB);
//       equality operator (==); personA and personB are "equal" iff they have:
//          - the same first name,
//          - the same last name, and
//          - the same age
//
//   bool operator!=(const Person& personA, const Person& personB);
//        inequality operator (!=); logical negation of the equality operator
//
//   bool operator<(const Person& personA, const Person& personB);
//        strictly-less-than operator (<); personA and personB are compared as
//        follows:
//          1. By last name: "Karie Abc, age 5" < "Joe Xyz, age 2" since
//             "Abc" < "Xyz".
//          2. If last names are the same, then by first name:
//             "Jane Abc, age 5" < "Karie Abc, age 2" since "Abc" == "Abc" and
//             "Jane" < "Karie".
//          3. If full names are the same, then by age:
//             "Jane Xyz, age 2" < "Jane Xyz, age 5".
//
//   Person operator+(const Person& personA, const Person& personB);
//        addition operator (+); as in real life, when you add two people
//        together you get a newborn person:
//          - new Person first name is "Baby"
//          - new Person last name is the hyphenation of the parents' last names:
//            "Ella Mercier" + "Juan Sanchez" -> "Baby Mercier-Sanchez, age 0"
//
//   std::ostream& operator<<(std::ostream& out, const Person& person);
//        stream output operator (<<); for example, a Person named "John Doe"
//        with age 8 would produce the following output:
//            Person: John Doe, age 8
//
//        note: The above sample output begins with 'P' and ends with '8'.
//        `<<` DOES NOT put whitespace or newline after the age.
//
//        note: `<<` returns the `out` parameter to allow chaining of stream output
//
//   std::istream& operator>>(std::istream& in, Person& person);
//        stream input operator; for example: if the input stream `in` holds
//        the message, "Person: Jean Mercier, age 8", then `in >> p1` will
//        change p1's data to become:
//             - first name: "Jean"
//             - last name: "Mercier"
//             - age: 8
//
//        note: `>>` returns the `in` parameter to allow chaining of stream input

#ifndef PERSON_H_
#define PERSON_H_

class Person
{
   public:
   // CONSTRUCTORS
   Person(std::string fname = "J", std::string lname = "Doe", int A = 0);

   // ACCESSOR MEMBER FUNCTIONS
   std::string getFirstName() const;
   std::string getLastName() const;
   int getAge() const;
   std::string getFullName() const;

   // MODIFICATION MEMBER FUNCTIONS
   void setFirstName(std::string newName); // newName has size 1 or more
   void setLastName(std::string newName);  // newName has size 1 or more
   void setAge(int newAge);           // newAge >= 0
   void agePerson(); // makes the Person one year older

   // FRIEND FUNCTIONS
   friend std::ostream& operator <<(std::ostream& out, const Person& person);
   friend std::istream& operator >>(std::istream& in, Person& person);

   private:
   // Instance Variables
   std::string first; // the person's first name
   std::string last;  // the person's last name
   int age;           // the person's age

}; // END OF PERSON CLASS

// OPERATOR OVERLOADING
bool operator==(const Person& personA, const Person& personB);
bool operator!=(const Person& personA, const Person& personB);
bool operator<(const Person& personA, const Person& personB);
Person operator+(const Person& personA, const Person& personB);
std::ostream& operator<<(std::ostream& out, const Person& person);
std::istream& operator>>(std::istream& in, Person& person);

#endif /* PERSON_H_ */
