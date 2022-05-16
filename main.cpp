#include <iostream>
#include "header/reverse_num.hpp"
#include "header/fibonacci.hpp"

int main() {
    int reversed = reversenumber(1439898);
    std::cout << "Reversed Number:: " << reversed << std::endl;
    std::cout << "fibonacci(8) = " << fibonacci(8) << std::endl;

    return 0;
}
