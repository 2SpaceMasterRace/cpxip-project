#include <print>

int main(int argc, char **argv) {
  std::println("argc = {}", argc);
  std::println("Hello, {}", argv[1]);
  return 0;
}
