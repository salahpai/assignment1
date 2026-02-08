#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int a= get_int("Enter the value of a : ");
 int b= get_int("Enter the value of b: ");

 if(a>b)
 {
    printf("larger number :%d",a);
 }
 else if(b>a)
 {
    printf("larger number :%d",b);
 }
 else
 {
    printf(" both are equal");
 }
 return 0;
}
