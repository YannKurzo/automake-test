#include "func.h"
#include <config.h>

#include <iostream>

int main (void)
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "This is " << PACKAGE_STRING << "." << std::endl;
    show();
    std::cin.get();
    return 0;
}
