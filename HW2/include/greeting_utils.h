#pragma once
#include <string>


// #ifndef greeting_utils.h
// #define greeting_utils.h
// #endif

namespace GreetingUtils {
    std::string create_message(const std::string& name);
    char* format_as_c_string(const std::string& msg);
}