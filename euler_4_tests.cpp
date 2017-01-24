#include "euler_4.h"
#include <iostream>
#include <cassert>

void test_extract_digits_normal();
void test_extract_digits_zero();
void test_extract_digits_zero_place_value();

void test_is_palindrome_normal();
void test_is_palindrome_odd();
void test_is_palindrome_single();

void test_is_palindrome_number_normal();
void test_is_palindrome_number_single();

void test_find_largest_palindrome_product();


int main() {
    test_extract_digits_normal();
    test_extract_digits_zero();
    test_extract_digits_zero_place_value();

    test_is_palindrome_normal();
    test_is_palindrome_odd();
    test_is_palindrome_single();

    test_is_palindrome_number_normal();
    test_is_palindrome_number_single();

    test_find_largest_palindrome_product();

    std::cout << "All tests pass!" << std::endl;

    return 0;
}

void test_extract_digits_normal() {
    // normal case
    unsigned val = 433853;
    auto digits = extract_digits(val);
    std::vector<int> digits_correct = {3, 5, 8, 3, 3, 4};

    assert(digits == digits_correct);
}

void test_extract_digits_zero() {
    // edge case: 0 alone
    unsigned val = 0;
    auto digits = extract_digits(val);
    std::vector<int> digits_correct = {0};

    assert(digits == digits_correct);
}

void test_extract_digits_zero_place_value() {
    // edge case: 0s in the middle of the number
    unsigned val = 90400;
    auto digits = extract_digits(val);
    std::vector<int> digits_correct = {0, 0, 4, 0, 9};

    assert(digits == digits_correct);
}

void test_is_palindrome_normal() {
    // normal case, even vector size
    assert(is_palindrome({ 1, 2, 2, 1 }));
    assert(!is_palindrome({ 1, 1, 1, 2 }));
}

void test_is_palindrome_odd() {
    // edge case: vectors with odd size
    assert(is_palindrome({ 1, 2, 3, 2, 1 }));
    assert(!is_palindrome({ 1, 2, 3, 3, 1 }));
}

void test_is_palindrome_single() {
    // edge case: single element
    assert(is_palindrome({1}));
}

void test_is_palindrome_number_normal() {
    // normal case
    assert(is_palindrome(extract_digits(12321)));
}

void test_is_palindrome_number_single() {
    // edge case: single digit
    assert(is_palindrome(extract_digits(1)));
}

void test_find_largest_palindrome_product() {
    assert(find_largest_palindrome_product(1) == 9);
    assert(find_largest_palindrome_product(2) == 9009);
}
