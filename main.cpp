#include <iostream>

int fibbo(int count){//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
    if(count < 1) return 0;
    if(count == 1) return 1;

    return fibbo(count - 1) + fibbo(count - 2);
    }


int main() {
    std::cout << "Hello, World! " << fibbo(7) << std::endl;
    return 0;
}
