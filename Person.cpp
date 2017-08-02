//
// Created by tombr on 02/08/2017.
//

#include <iostream>
#include "Person.h"


Person::Person(std::string fName, std::string lName, int age)
{
    firstName = fName;
    lName = lName;
    age = age;

}
Person::~Person()
{
    std::cout << "Person destructor called" << '\n';
}
void Person::SetFirstName(std::string fName)
{
    this->firstName = fName;

}
std::string Person::GetFirstName()
{
    return this->firstName;
}
void Person::SetLastName(std::string lName)
{
    this->lastName = lName;
}
