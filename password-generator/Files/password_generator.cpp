#include "password_generator.h"

std::string generatePassword() {
    std::random_device randomNumber;
    std::mt19937 seed(randomNumber());
    std::uniform_int_distribution<int> gap(0, 63);
    std::uniform_int_distribution<int> gapPoint(3, 9);
    std::string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0987654321";
    std::string password;
    for(size_t i = 1; i < 13 ; ++i) 
        password += base[gap(seed)];
    password.data()[gapPoint(seed)] = '.';
    return password;
}