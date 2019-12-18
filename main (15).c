/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    switch(i)
    {
        case 1:printf("today is monday");
        break;
        case 2:printf("today is tuesday");
        break;
        case 3:printf("today is wednesday");
        break;
        case 4:printf("today is thrusday");
        break;
        case 5:printf("today is friday");
        break;
        case 6:printf("today is saturday");
        break;
        case 7:printf("today is sunday");
        break;
        default:
        printf("please enter valid number");
        break;
    }
    return 0;
    
}