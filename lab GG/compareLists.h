#include <list>

bool compareLists(const std::list<int>& list1, const std::list<int>& list2) {
    if (list1.size() != list2.size()) {
        return false;
    }

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
#pragma once
