#include<iostream>
#include<stdio.h>

using namespace std;

struct card
{
    int face;
    int color;
    int shape;
    char s;  //here the size of char is taken as 4 instead of 1
             //it's similar to the remaining types inside struct 
             //and it is called padding in the structure
};

int main()
{
    struct card c1 = {1, 0, 2};
    cout<<sizeof(c1)<<endl;
    cout<<c1.face<<endl;
    cout<<c1.color<<endl;
    cout<<c1.shape<<endl;
    cout<<c1.s<<endl;
    
}