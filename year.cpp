#include <iostream>

int main()

{

    int a;

    std::cin >> a;

    if (a % 400 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else if (a % 100 == 0)
    {
        std::cout << "NO" << std::endl;
    }
    else if (a % 4 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}