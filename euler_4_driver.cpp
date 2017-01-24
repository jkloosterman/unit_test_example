#include "euler_4.h"
#include <iostream>

int main() {
    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: "
              << find_largest_palindrome_product(3) << std::endl;
    return 0;
}
