#include <iostream>
#include "evenChecker.h"

int if_statements() {

    int currVal = 0, val = 0;

    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                cnt++;
            }
            else {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}

// unsure how this is meant to work.
int unknown_quantity_for() {
    int sum = 0, value = 0;
        while (std::cin >> value) {
            sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

void for_loops() {
    int sum = 0;
    for (int i = -100; i <= 100; i++) {
        sum += i;
    }
    std::cout << sum;
}

void test() {
    std::cout << "Enter two numbers you want to add: " << std::endl;

    int n1;
    int n2;

    std::cin >> n1 >> n2;

    std::cout << "The sum of " << n1 << " and " << n2 << " is: " << n1 + n2 << std::endl;

    std::cout << "Hello, World" << std::endl;
}

int minus_loops() {

    int num = 10;

    while (num >= 0) {

        std::cout << num << std::endl;
        num--;
    }
    return 0;
}

int add_loops() {

    int sum = 0, val = 50;

    while (val <= 100) {
        sum += val;
        val++;
    }

    std::cout << "Sum of numbers from 50-100 is: " << sum << std::endl;
    return 0;
}

int main() {


    isEven(3);
    //if_statements();
    // unknown_quantity_for();
    // for_loops();
    // add_loops();
    // minus_loops();
    // test();

    return 0;
}
