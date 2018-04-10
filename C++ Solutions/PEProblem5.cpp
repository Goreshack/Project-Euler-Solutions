#include <iostream>
#include <cstdlib>

bool divisible(long multNum);

int main() {
	long long multNum = 2520;

	while (true) {
		if (divisible(multNum)) {
			break;
		}

		multNum++;
	}

	std::cout << multNum << std::endl;
}

bool divisible(long multNum) {
	for (int i = 11; i < 20; ++i) {
		if (multNum % i != 0) {
			return false;
		}
	}
	return true;
}