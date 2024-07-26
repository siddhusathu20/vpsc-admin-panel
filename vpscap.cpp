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
    std::cout << "\nVPSC Administrator Panel - New Notice\nThanks for checking this out, though I've made much better projects since then and you should probably look at those!";
  }
} 
