//
//  Validate.h
//  CPP-Clock
//
//  Created by Aryan Srivastava on 16/7/22.
//

#ifndef Validate_h
#define Validate_h

#include <iostream>
#include <string>

bool validate(int day, std::string month, int year) { // The code will return true if the date is valid and false if it is not valid
    std::cout << "I AM ALIVE!\n";
    std::string months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    std::string months31[8] = {"January", "March", "May", "July", "August", "October", "December"};
    std::string months30[4] = {"April", "June", "September", "November"};
    
    bool validDay =  false;
    
    if (day > 31) { // Checking whether the day is more than 31
        return false;
        
    }
    
    else if (day < 1) { // Checking whether the day is less than 1
        return false;
    }
    
    else {
        validDay = true;
    }
    
    bool validMonth = false;
    
    int arrSize = sizeof(months)/sizeof(months[0]);
    
    for (int i = 0; i < arrSize; i++) { // Checking whether the month is existent
        if (month == months[arrSize]) {
            validMonth = true;
            break;
        }
    }
    
    if (validMonth != true) {
        return false;
    }
    
    if (month == "February" && year % 4 != 0 && day > 28) {
        return false;
    }
    
    else if (month == "February" && year % 4 == 0 && day > 29) {
        return false;
    }
    
    else {
        validDay = true;
    }
    
    bool dayIs31 = false;
    bool dayIs30 = false;
    
    int months31Length = sizeof(months30)/sizeof(months[0]);
    
    for (int i = 0; i < months31Length; i++) {
        if (month == months31[i]) {
            dayIs31 = true;
        }
    }
    
    int months30Length = sizeof(months30)/sizeof(months[0]);
    
    for (int i = 0; i < months30Length; i++) {
        
        if (month == months30[i]) {
            dayIs30 = true;
        }
        
    }
    
    if (dayIs31 == true && day < 31) {
        validDay = true;
    }
    
    else if (dayIs30 == true && day < 30) {
        validDay = true;
    }
    
    else {
        validDay = false;
    }
    
    if (validDay == true && validMonth == true) {
        return true;
    }
}

#endif /* Validate_h */
