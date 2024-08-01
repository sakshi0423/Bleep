#include "fnct.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "I'm smoking on that broccoli. That Evil Pack broccoli kush. That Real Hitter broccoli.";

  bleep(text, word);
  
  std::cout << text << "\n";
  std::cin.get();
  
  return 0; 
}