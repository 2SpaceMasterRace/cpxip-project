#include <print>

int main(int argc, char **argv) {
  if (argc >= 2) {
    std::println("Hello, {}!", argv[1]);
  } else {
    std::println("Hello there!");
  }

  return 0;
}
