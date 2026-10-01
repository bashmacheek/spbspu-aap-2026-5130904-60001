#include <iostream>
int main()
{
  int a = 0;
  std::cin >> a;
  if (!std::cin) {
    std::cerr << "Ошибка ввода\n";
    return 1;
  }
  std::cout << a << "\n";
  return 0;
}