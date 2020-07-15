#include <iostream>
#include <random>

int main() {
	int randInt{rand()};

	std::cout << "RNG spat out : " << randInt;

	return 0;
}
