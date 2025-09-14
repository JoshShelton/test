#include "evenChecker.h"
#include <iostream>

bool isEven(int number) {

    if (number % 2 == 0) {
        std::cout << "The number is true!" << std::endl;
        return true;
    }
    std::cout << "The number is false!" << std::endl;
    return false;
}