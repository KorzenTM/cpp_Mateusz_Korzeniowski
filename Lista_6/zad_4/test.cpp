#include "stos.h"
#include <iostream>

int main()
{
    Stos stos;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == i % 5)
            stos.push(i);
    }
    //std:: cout << stos;
    stos.reverse();
    std:: cout << stos;
}