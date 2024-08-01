#include "fnct.hpp"

void bleep(std::string &text, std::string word) {
  
  for (int i = 0; i < text.size(); i++) {

    int check = 0;

    for (int j = 0; j < word.size(); j++) {
      if (text[i+j] == word[j]) { check++; }
    }

    if (check == word.size()) {
      for (int k = 0; k < word.size(); k++) { 
        text[i+k] = '*'; 
      }
    }
  }
} 