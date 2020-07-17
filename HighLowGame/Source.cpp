/* High-Low Game
A console game that where you guess a number between 1 to 100 inclusive.
The program will tell you whether your guess is too high or too low if it's wrong.
You will have multiple chances to input the correct answer.
*/

#include <iostream>
#include <random>
#include <ctime>

int main() {
	srand((unsigned) time(0));			// Allows the program to generate a new number every time it starts.
	int randInt{(rand() % 100) + 1};	// Generates a random number between 1 to 100 inclusive.

	constexpr int MAX_GUESSES = 7;

	// INTRODUCTION + INSTRUCTIONS
	std::cout << "Let's play a guessing game! I got a number in my head that's between 1 to 100 inclusive.\n";
	std::cout << "Don't worry if you don't get it on the first try! I'll let you know if it's too high or too low.\n";
	std::cout << "I'll give you " << MAX_GUESSES << " guesses.\n";
	
	int guess; // Stores the guess that the user inputs.

	// GAME LOOP
	for (int i{ 0 }; i < MAX_GUESSES; i++) {

		// Shows how many guesses you have left.
		if (i < MAX_GUESSES - 1) {
			std::cout << "You have " << MAX_GUESSES - i << " guesses left.\n";
		}
		else {
			std::cout << "LAST GUESS.\n";
		}

		// Input Prompt
		std::cout << "Now, what number am I thinking of?\n";
		std::cin >> guess;

		// Returns whether <guess> is too low, too high, or the correct number.
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
	
	// GAME OVER
	std::cout << "The number I was thinking of was: " << randInt;

	return 0;
}
