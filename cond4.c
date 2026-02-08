
#include <cs50.h>
#include <stdio.h>

int main( )
{
int a= get_int("Enter the year a: ");

if ((a%4==0 && a%100!=0) ||a%400==0)
{
    printf(" Leap year");
}
else
{
 printf("Not leap year");
}
 return 0;
}
