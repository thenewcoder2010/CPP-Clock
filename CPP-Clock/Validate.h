//
//  Validate.h
//  CPP-Clock
//
//  Created by Aryan Srivastava on 16/7/22.
//

#ifndef Validate_h
#define Validate_h

#include <string>

bool validate(int day, std::string month, int year) {
    std::string months[12] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    std::string months31[8] = {"January", "March", "May", "July", "August", "October", "December"};
    std::string months30[4] = {"April", "June", "September", "November"};
    
    
    if (day > 31) {
        return false;
    }
    bool found = false;
    
    int arrSize = sizeof(months)/sizeof(months[0]);
    
    for (int i = 0; i < arrSize; i++) {
        if (month == months[arrSize]) {
            found = true;
            break;
        }
    }
    
    if (found != true) {
        return false;
    }
    
    if (month == "February" && year % 4 != 0 && day > 28) {
        return false;
    }
    
    if (month == "February" && year % 4 == 0 && day > 29) {
        return false;
    }
    
    bool dayIs31 = false;
    bool dayIs30 = false;
    
    int months31Length = sizeof(months30)/sizeof(months[0]);
    
    for(int i = 0; i < months31Length; i++) {
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
    
    if (dayIs31 == true && day < 32) {
        return true;
    }
    
    else if (dayIs30 == true && day < 31) {
        return true;
    }
    
}

#endif /* Validate_h */
