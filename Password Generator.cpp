#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
std::string generatePassword(int length) {
    std::string availableChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
    std::string password = "";
    std::srand(std::time(0));
    for (int i = 0; i < length; i++) {
        int index = std::rand() % availableChars.size();
        password += availableChars[index];
    }
    return password;
}
int main()
{
    std::string password = generatePassword(128);
    std::cout << "Password: " << password << std::endl;
    return 0;
}