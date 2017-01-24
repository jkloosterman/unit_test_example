#include "euler_4.h"
#include <iostream>
#include <cassert>

std::vector<int> extract_digits(unsigned val) {
    std::vector<int> digits;

    int pow_10 = 10;
    int prev_pow_10 = 1;
    do {
        int place_val = (val % pow_10) / prev_pow_10;
        digits.push_back(place_val);
        val -= place_val * prev_pow_10;

        prev_pow_10 = pow_10;
        pow_10 *= 10;
    } while (val);

    return digits;
}

bool is_palindrome(const std::vector<int> &v) {
    assert(!v.empty());

    unsigned i = 0;
    while (i < (v.size() / 2)) {
        if (v.at(i) != v.at(v.size() - i - 1)) {
            return false;
        }
        i++;
    }

    return true;
}

unsigned find_largest_palindrome_product(int digits) {
    assert(digits > 0);

    // find the largest number we need to try
    unsigned upper_bound = 1;
    for (int i = 0; i < digits; i++) {
        upper_bound *= 10;
    }

    unsigned largest_palindrome = 0;
    for (unsigned i = 0; i < upper_bound; i++) {
        // since multiplication is commutative,
        // we only need to try half of the combinations
        for (unsigned j = 0; j < i; j++) {
            unsigned product = i * j;
            if (product > largest_palindrome && is_palindrome(extract_digits(product))) {
                largest_palindrome = product;
            }
        }
    }

    return largest_palindrome;
}
