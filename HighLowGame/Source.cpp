#include <iostream>
#include <random>
#include <ctime>

int main() {
	srand((unsigned) time(0));
	int randInt{rand() % 100};

	std::cout << "RNG spat out : " << randInt;

	return 0;
}
