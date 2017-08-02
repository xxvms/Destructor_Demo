//
// Created by tombr on 02/08/2017.
//

#ifndef DESTRUCTOR_DEMO_PERSON_H
#define DESTRUCTOR_DEMO_PERSON_H


#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person(std::string fName, std::string lName, int age);
    ~Person();
    void SetFirstName(std::string fName);
    std::string GetFirstName();
    void SetLastName(std::string lName);


};


#endif //DESTRUCTOR_DEMO_PERSON_H
