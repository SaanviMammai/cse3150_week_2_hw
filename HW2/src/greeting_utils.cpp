#include <iostream>
#include <string>

namespace GreetingUtils {
    std::string create_message(const std::string& name){
        std::string greeting = "Hello, " + name + "!";
        return greeting;
    }

    char* format_as_c_string(const std::string& msg){
        char* buffer = new char[msg.size() + 1];
        for (size_t i = 0; i < msg.size(); ++i) {
            buffer[i] = msg[i];
        }
        buffer[msg.size()] = '\0';
        return buffer;
    }
}