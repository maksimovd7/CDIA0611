#include <iostream>
#include <string>

std::string reverseString(const std::string& str) {
    if (str.empty()) return "";
    return reverseString(str.substr(1)) + str[0];
}
