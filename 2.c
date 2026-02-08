#include <cs50.h>
#include <stdio.h>

int main( )
{
  float celsius= get_float ("Enter celsius: ");
  float fahrenheit= get_float( celsius * 9/5)+32;

  printf("Temperature in fahrenheit: %2f\n",fahrenheit);

  return 0;

}
