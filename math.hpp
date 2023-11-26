//
//  math.hpp
//  cppm-homework-06.01
//
//  Created by a1ex on 11/22/23.
//

#pragma once


class Math
{
private:
    int x = 0;
    int y = 0;
    
public:
    
    Math(int x, int y)
    {
        this->x = x;
        this->y = y;
    };
    
    int addition (int x, int y);
    int subtraction (int x, int y);
    int multiplication (int x, int y);
    int divition(int x, int y);
    int exponentation(int x, int y);
    
};
