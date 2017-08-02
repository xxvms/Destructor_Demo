#include <iostream>
#include "Person.h"
#include <iostream>

int main() {
    Person *pOne = new Person("Tom", "Thumb", 25);

    std::cout << "First name of pOne = " << pOne->GetFirstName() << '\n';

    std::cout << "Memory address of POne = " << &pOne << '\n';

    delete pOne;

    return 0;
}