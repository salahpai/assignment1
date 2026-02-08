#include <cs50.h>
#include <stdio.h>

int main( )
{
  int n= get_int("Enter an integer: ");

  if(n%2==0)
  {
    printf("The number is even\n");
  }
  else
  {
    printf("The numberis odd\n");
  }

return 0;


}
