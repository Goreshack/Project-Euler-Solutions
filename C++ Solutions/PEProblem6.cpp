#include <iostream>
#include <cstdlib>

int main() {
	int SoSq = 0;
	int SqoS = 0;

	for (int i = 1; i <= 100; ++i) {
		SoSq += i * i;
	}

	for (int i = 1; i <= 100; ++i) {
		SqoS += i;
	}
	SqoS *= SqoS;

	std::cout << SqoS - SoSq << std::endl;
}