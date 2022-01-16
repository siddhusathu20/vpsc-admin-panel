#include <iostream>
#include <string>

int main() {
  std::string usrn;
  std::string pwd;
  std::cout << "Enter username: ";
  std::cin >> usrn;
  std::cout << "\nEnter password: ";
  std::cin >> pwd;
  if (usrn=="smadev" && pwd=="transrcd") {
    std::cout << "\nVPSC Administrator Panel - New Notice\nThe Fires of Entia Episode One out now: https://github.com/siddhusathu20/thefiresofentia/blob/main/The%20Fires%20of%20Entia%20-%20Episode%20One.pdf";
  }
} 