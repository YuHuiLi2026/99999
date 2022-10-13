// YuHui Li
// CPSC 120-03
// 2022-10-14
// YuHuiLi.@csu.fullerton.edu
// @YuHuiLi2026
//
// Lab 06-02
// Partners:@Emily_T
//
// Guessing game
//
#include <cmath>
#include <iostream>
#include <string>
const int kSecretNumber{42};
int main(int argc, char const *argv[]) {
  int guess = 0;
  int last_guess = 0;
  std::string answer;
  bool game_over{true};
  std::cout << "Hi - I'm a computer and I've thought of a number between "
               "1 and 100.\n";
  std::cout << "Let's play a guessing game...\n";
  while (!game_over) {
    std::cout << "What's your guess?> ";
    std::cin >> guess;
    if (guess == kSecretNumber) {
      std::cout << "\tHooray! You guessed the secret number!!";
      std::cout << "Do you want to play again? (y or n)>";
      std::cin >> answer;
      if (answer != "y") {
        game_over = true;
      } else {
        std::cout << "Great!! I'd love to play again...";
      }
    }
    if (guess < 1 || guess > 100) {
      std::cout << "Please guess a number between 1 and 100.";
    } else {
      int current_guess = guess;
      if (std::abs(kSecretNumber - current_guess) <
          std::abs(kSecretNumber - last_guess)) {
        std::cout << "\tNope - that's not it.\n";
        std::cout << "\tYou're getting warmer!\n";
      } else {
        std::cout << "\tNope - that's not it.\n";
        std::cout << "\tYou're getting colder.\n";
      }
      last_guess = current_guess;
    }
  }
  return 0;
}
