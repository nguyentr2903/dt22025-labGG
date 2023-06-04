/*dt22025 DInh Phuoc Nguyen Tran
GG – linked list with elements of unit-testing and exception handling.

The same assignment, as in G, it’s solution (a) should be complemented by two additional elements:

x) at least one of the data checkings should be implemented using exception handling,

y) at least one of the function (preferably, the central one) should be unit-tested, at least three test cases should be provided; for that purpose (1) this function should be put in a separate file (to function main), (2) you should create another project just for unit-testing (so, the regular project, and testing project). 
Tips: the last lab work of the previous semester (about classes) with hard-coded main function is very close to the concept of such a unit-testing project.*/
#include <iostream>
#include <list>
#include "compareLists.h"

int main() {
    std::list<int> list1, list2;
    int num;

    // Read input for list1
    std::cout << "Enter values for list1 (enter -1 to stop):\n";
    while (std::cin >> num && num != -1) {
        list1.push_back(num);
    }

    // Read input for list2
    std::cout << "Enter values for list2 (enter -1 to stop):\n";
    while (std::cin >> num && num != -1) {
        list2.push_back(num);
    }

    // Compare the lists
    if (compareLists(list1, list2)) {
        std::cout << "The lists are equal.\n";
    }
    else {
        std::cout << "The lists are not equal.\n";
    }

    return 0;
}






