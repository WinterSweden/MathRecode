//
//  main.cpp
//  MathRecode
//
//  Created by Hitarth Choudhary on 2024-10-04.
//

#include <iostream>
#include <cmath>


int main () {
    // variable initialisation
    double selection;
    int number;
    int Answer;
    
    std::cout << "Welcome to MathRecode. Designed by Hitarth Choudhary in C++. MathRecode v1.0 \n";
    std::cout << "Number?\n";
    std::cin >> number;
    std::cout << "1. Square, 2. Squareroot 3. Cube 4. Cuberoot\n";
    std::cin >> selection;

    
    if(selection == 1) {
        
        int Answer = number * number;
        std::cout << Answer << "\n";
        };
    
    
    
    
    
    
    if(selection == 2) {
        
        int Answer = sqrt(number);
        std::cout << Answer << "\n";
    };
    
    
    
    
    
        
    if(selection == 3) {
            
        int Answer = number * number * number;
        std::cout << Answer << "\n";
            
    };
    
    
    
    
    
    
        
    if(selection == 4) {
            
        int Answer = cbrt(number);
        std::cout << Answer << "\n";
    };
        
        };
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

