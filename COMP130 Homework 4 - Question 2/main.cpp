//
//  main.cpp
//  COMP130 Homework 4 - Question 2
//
//  Created by ax on 9/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

int main() {
    
    string str_input = " ";
    
    cout << "Enter a string of some length: ";
    
    // enter ssn
    getline(cin, str_input);
    
    int word_count = 1;
    
    for (int i = 0; i <= str_input.length(); i++) {
        if (str_input[i] == ' ') {
            // if the space has a space ahead of it,
            if (str_input[i + 1] == ' ') {
                continue; // continue to count just one word per spaces between words
            } else {
                word_count++;
            }
        }
    }
    
    cout << "The string has " << word_count << " words" << endl;
    
    return 0;
}
