/*dt22025 DInh Phuoc Nguyen Tran
GG – linked list with elements of unit-testing and exception handling.

The same assignment, as in G, it’s solution (a) should be complemented by two additional elements:

x) at least one of the data checkings should be implemented using exception handling,

y) at least one of the function (preferably, the central one) should be unit-tested, at least three test cases should be provided; for that purpose (1) this function should be put in a separate file (to function main), (2) you should create another project just for unit-testing (so, the regular project, and testing project).
Tips: the last lab work of the previous semester (about classes) with hard-coded main function is very close to the concept of such a unit-testing project.*/
#include <iostream>
#include <cassert>
#include <list>

bool compareLists(const std::list<int>& list1, const std::list<int>& list2) {
    // Compare the sizes of the lists
    if (list1.size() != list2.size()) {
        return false;
    }

    // Compare the elements of the lists
    auto it1 = list1.begin();
    auto it2 = list2.begin();
    while (it1 != list1.end() && it2 != list2.end()) {
        if (*it1 != *it2) {
            return false;
        }
        ++it1;
        ++it2;
    }

    return true;
}

void runUnitTests() {
    // Test case 1: Equal lists
    std::list<int> list1 = { 1, 2, 3 };
    std::list<int> list2 = { 1, 2, 3 };
    assert(compareLists(list1, list2) == true);

    // Test case 2: Unequal lists
    std::list<int> list3 = { 1, 2, 3 };
    std::list<int> list4 = { 1, 2, 4 };
    assert(compareLists(list3, list4) == false);

    // Test case 3: Lists of different sizes
    std::list<int> list5 = { 1, 2, 3 };
    std::list<int> list6 = { 1, 2, 3, 4 };
    assert(compareLists(list5, list6) == false);

    // Add more test cases as needed

    std::cout << "All tests passed successfully.\n";
}

int main() {
    runUnitTests();
    return 0;
}
