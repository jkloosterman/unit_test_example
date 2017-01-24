/* An implementation of Project Euler problem 4, to
   help demonstrate unit testing.

   Author: John Kloosterman <jklooste@umich.edu>
   Date: January 24, 2017
*/

#pragma once
#include <vector>

// EFFECTS: decomposes val into a vector of its decimal digits
//          in reverse order
std::vector<int> extract_digits(unsigned val);

// REQUIRES: v is not empty
// EFFECTS: returns true when the decimal representation
//          of val is a palindrome
bool is_palindrome(const std::vector<int> &v);

// REQUIRES: digits is greater than 0
// EFFECTS: finds the largest palindrome made from the product
//          numbers of a given number of digits
unsigned find_largest_palindrome_product(int digits);
