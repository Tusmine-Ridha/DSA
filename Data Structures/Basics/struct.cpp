#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    /* data */
    int length;
    int breadth;
};


int main()
{
   struct rectangle r = {20, 4};

   printf("%d\n %d\n", r.length, r.breadth);
  
   
}

//declaration and initialization is done within the stack frame of the program