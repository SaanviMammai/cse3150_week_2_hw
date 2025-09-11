#include <iostream>
#include <string>
#include "greeting_utils.h"

using namespace GreetingUtils;

int main(){
    
    std::cout << "Enter your name: " << std::endl;
    std::string name;
    std::getline(std::cin, name);

    std::string greeting = GreetingUtils::create_message(name);
    char* c_greeting = GreetingUtils::format_as_c_string(greeting);

    std::cout << c_greeting << std::endl;

    delete[] c_greeting;

    return 0;
}
