// TODO: Insert your header.

#include <cmath>
#include <iostream>
#include <string>

// TODO: Declare a const int named kSecretNumber and initialize it to 42.
const kSecretNumber{42};
int main(int argc, char const *argv[]) {
  int guess = 0;
  int last_guess = 0;
  std::string answer;
  
  bool game_over{false};
  std::cout << "Hi - I'm a computer and I've thought of a number between "
               "1 and 100.\n";
  std::cout << "Let's play a guessing game...\n";

  while(!game_over){
    std::cout << "What's your guess?> ";
    std::cin >> guess;
    
    if(guess == kSecretNumber) {
      std::cout << "\tHooray! You guessed the secret number!!" << std::endl;
      std::cout << "Do you want to play again? (y or n)> ";
      std::cin >> answer;
      if(answer == "y") {
        std::cout << "Great!! I'd love to play again..." << std::endl;
      } else if(answer == "n") {
        game_over = true;
      }
    } 

    else {
      if(guess < 1 || guess > 100) {
      std::cout << "Please guess a number between 1 and 100" << std::endl;
    } else {
      // Error
      int current_guess = guess;
      if (std::abs(kSecretNumber - current_guess) < std::abs(kSecretNumber - last_guess)) {
        std::cout << "Nope - that's not it." << std::endl;
        std::cout << "You're getting warmer!" << std::endl;
      } else {
        std::cout << "Nope - that's not it." << std::endl;
        std::cout << "You're getting colder." << std::endl;
      }
       last_guess = current_guess;
    }
    }
    }
  return 0;
}

// TODO: Insert your header.










// #include <cmath>
// #include <iostream>
// #include <string>
// const int kSecretNumber{42};
// int main(int argc, char const *argv[]) {
//   int guess = 0;
//   int last_guess = 0;
//   std::string answer;
  
//   bool game_over{false};
//   std::cout << "Hi - I'm a computer and I've thought of a number between "
//                "1 and 100.\n";
//   std::cout << "Let's play a guessing game...\n";

//   while(!game_over){
//     std::cout << "What's your guess?> ";
//     std::cin >> guess;
    
//     if(guess == kSecretNumber) {
//       std::cout << "\tHooray! You guessed the secret number!!" << std::endl;
//       std::cout << "Do you want to play again? (y or n)> ";
//       std::cin >> answer;
//       if(answer == "y") {
//         std::cout << "Great!! I'd love to play again..." << std::endl;
//       } else if(answer == "n") {
//         game_over = true;
//       }
//     } 

//     else {
//       if(guess < 1 || guess > 100) {
//       std::cout << "Please guess a number between 1 and 100" << std::endl;
//     } else {
//       // Error
//       int current_guess = guess;
//       if (std::abs(kSecretNumber - current_guess) < std::abs(kSecretNumber - last_guess)) {
//         std::cout << "Nope - that's not it." << std::endl;
//         std::cout << "You're getting warmer!" << std::endl;
//       } else {
//         std::cout << "Nope - that's not it." << std::endl;
//         std::cout << "You're getting colder." << std::endl;
//       }
//        last_guess = current_guess;
//     }
//     }
//     }
//   return 0;
// }
