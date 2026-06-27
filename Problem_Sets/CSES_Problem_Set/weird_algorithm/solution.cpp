#include <iostream>

int main(int argc, char *argv[]) {
  long long number;
  std::cin >> number;
  while (true) {
    std::cout << number << " ";
    if (number == 1) {
      break;
    }
    if (number % 2 == 0) {
      number = number / 2;
    } else {
      number = (number * 3) + 1;
    }
  }
  std::cout << std::endl;
  return 0;
}
