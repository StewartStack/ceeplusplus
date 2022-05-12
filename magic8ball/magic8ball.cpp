#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL: \n\n";

  //Generate random number
  srand(time(NULL));
  
  int answer = std::rand() % 10;

  std::cout << answer << ": ";

  //Conditionals & Logic
  if (answer == 0) {
    std::cout << "It is certain.\n";
  } else if (answer == 1){
    std::cout << "It is decidedly so.\n";
  } else if (answer == 2) {
    std::cout << "Without a Doubt.\n";
  } else if (answer == 3) {
    std::cout << "Signs point to Yes.\n";
  } else if (answer == 4) {
    std::cout << "Reply hazy, try again.\n";
  } else if (answer == 5) {
    std::cout << "Outlook good.\n";
  } else if (answer == 6) {
    std::cout << "Ask again later.\n";
  } else if (answer == 7) {
    std::cout << "Most likely.\n";
  } else if (answer == 8) {
    std::cout << "Yes.\n";
  } else if (answer == 9) {
    std::cout << "Your joking right? \n";
  } else {
    std::cout << "Very Doubtful.\n";
  }
    
  //John Stewart
  //12-05-2022
  //switch method to come later
}