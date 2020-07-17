#include <iostream>
#include <random>
#include <ctime>

int main() {
	srand((unsigned) time(0));
	int randInt{(rand() % 100) + 1};

	constexpr int MAX_GUESSES = 7;

	std::cout << "Let's play a guessing game! I got a number in my head that's between 1 to 100 inclusive.\n";
	std::cout << "Don't worry if you don't get it on the first try! I'll let you know if it's too high or too low.\n";
	std::cout << "I'll give you " << MAX_GUESSES << " guesses.\n";
	
	int guess;

	for (int i = 0; i < MAX_GUESSES; i++) {
		if (i < MAX_GUESSES - 1) {
			std::cout << "You have " << MAX_GUESSES - i << " guesses left.\n";
		}
		else {
			std::cout << "LAST GUESS.\n";
		}

		std::cout << "Now, what number am I thinking of?\n";
		std::cin >> guess;

		if (guess > randInt) {
			std::cout << "Too high!\n";
		}
		else if (guess < randInt) {
			std::cout << "Too low!\n";
		}
		else if (guess == randInt) {
			std::cout << "Correct! ";
			i = MAX_GUESSES;
		}
	}
	
	std::cout << "The number I was thinking of was: " << randInt;

	return 0;
}
