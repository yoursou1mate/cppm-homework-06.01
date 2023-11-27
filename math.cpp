//
//  math.cpp
//  cppm-homework-06.01
//
//  Created by a1ex on 11/22/23.
//

#include <cmath>
#include "math.hpp"

int addition (int x, int y)
{
    int add = x+y;
    return add;
    
};

int subtraction (int x, int y)
{
    int sub = x-y;
    return sub;
};

int multiplication (int x, int y)
{
    int mult = x*y;
    return mult;
};

int divition(int x, int y)
{
    double div = x/y;
    return div;
};

int exponentation(int x, int y)
{
    int exp = pow(x,y);
    return exp;
};

