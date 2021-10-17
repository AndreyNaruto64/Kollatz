#include <iostream>

int main()
{
    int x;
    std::cout << "Input chislo" << std::endl;
    std::cin >> x;
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
            std::cout<< x << std::endl;
        }
        else {
            x = x * 3 + 1;
            std::cout << x << std::endl;
        }
    }
  
}