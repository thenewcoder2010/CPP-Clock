//
//  main.cpp
//  CPP-Clock
//
//  Created by Aryan Srivastava on 16/7/22.
//

#include <iostream>
#include <string>
#include "Validate.h"

int main() {
    
    int day;
    std::string month;
    int year;
    
    std::cout << "Enter the day: ";
    std::cin >> day;
    
    std::cout << "Enter the month: ";
    std::cin >> month;
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    bool valid = validate(day, month, year);
    
    std::cout << "Valid has a value of: " << valid << "\n";
    
    if (valid) {
        std::cout << "It is valid";
    }
    
    else {
        std::cout << "It is not valid. Please re-run the program!";
    }
    
    return 0;
}
