#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int x, y;
    x = 1;
    y = 2;
    int res = add(x, y);
    std::cout << "res: " <<  res << std::endl;
    return 0;
}
