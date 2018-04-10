#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

/*
	A palindromic number reads the same both ways. The largest palindrome 
	made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool isPalindrome(std::string integer);

int main() {

	int paliTest = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			std::string newString = std::to_string(i * j);
			if (isPalindrome(newString)) {
				if ((i*j) > paliTest) {
					paliTest = i * j;
				}
			}
			
		}
	}
	std::cout << paliTest << std::endl;
}

bool isPalindrome(std::string integer) {
	if (integer == std::string(integer.rbegin(), integer.rend())) {
		return true;
	}
	return false;
}