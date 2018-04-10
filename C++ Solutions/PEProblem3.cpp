#include <iostream>
#include <cstdlib>
#include <vector>

/*
	The prime factors of 13195 are 5, 7, 13 and 29.

	What is the largest prime factor of the number 600851475143 ?
*/


int main() {
	long long numm = (600851475143);
	int num = 2;

	while ((num * num) <= numm) {
		if (numm % num == 0) {
			numm /= num;
		}
		else {
			num++;
		}
	}
	std::cout << numm << std::endl;
}