#include <cs50.h>
#include <stdio.h>
int main()
{

int x= get_int("Enter number of x: ");

if(x>0)
{
 printf("The number is positive");
}
else if(x<0)
{
    printf("The number is negative");

}
else
{
    printf("The number is zero");
}
return 0;
}
