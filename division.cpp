#include <iostream>
#include <string>

std::string division()
{
    long double value1;
    long double value2;
    std::cout << "Enter the first value for the division\n";
    std::cin >> value1;
    std::cout << "Enter the second value for the division\n";
    std::cin >> value2;
    long double result{value1 / value2};
    std::string result_str{std::to_string(result)};
    return "The result is " + result_str;
}
