#include <iostream>
#include <string>
#include "big_integer.h"

int main()
{
    auto number1 = big_integer("114575");
    auto number2 = big_integer("78524");
    auto result = number1 + number2;
    long long result2 = number1 * number2;
    std::cout << "Сложение: " << result << std::endl; // 193099
    std::cout << "Умножение: " << result2; // 8996887300

}
