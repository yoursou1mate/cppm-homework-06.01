//
//  main.cpp
//  cppm-homework-06.01
//
//  Created by a1ex on 11/22/23.
//

#include <iostream>
#include "math.hpp"


int main(int argc, const char * argv[]) {
  
    int x;
    int y;
    int z;
    Math m (x,y);
    
    std::cout << "Please enter first number: ";
    std::cin >> x;
    std::cout << '\n';
    
    std::cout << "Please enter second number: ";
    std::cin >> y;
    std::cout << '\n';
    
    std::cout << "Please choose your operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - divition, 5 - exponentation): ";
    std::cin >> z;
    std::cout << '\n';
    
    if (z == 1)
    {
        std::cout << x << " + " << y << " =  " <<  m.addition(x,y) << std::endl;
        
    }
    else if (z == 2)
    {
        std::cout << x << " - " << y << " =  " << m.subtraction(x,y) << std::endl;
    }
    else if (z == 3)
    {
        std::cout << x << " * " << y << " =  " << m.multiplication(x,y) << std::endl;
    }
    else if (z == 4)
    {
        std::cout << x << " / " << y << " =  " << m.divition(x,y) << std::endl;
    }
    else if (z == 5)
    {
        std::cout << x << " to the degree of " << y << " =  " << m.exponentation(x,y) << std::endl;
    };
    
    return 0;
}
