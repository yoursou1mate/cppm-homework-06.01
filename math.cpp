//
//  math.cpp
//  cppm-homework-06.01
//
//  Created by a1ex on 11/22/23.
//

#include <cmath>
#include "math.hpp"

int Math::addition (int x, int y)
{
    int add = x+y;
    return add;
    
};

int Math::subtraction (int x, int y)
{
    int sub = x-y;
    return sub;
};

int Math::multiplication (int x, int y)
{
    int mult = x*y;
    return mult;
};

int Math::divition(int x, int y)
{
    double div = x/y;
    return div;
};

int Math::exponentation(int x, int y)
{
    int exp = pow(x,y);
    return exp;
};

