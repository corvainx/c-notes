#include <stdio.h>
#include <stdbool.h>

int main()
{
  // logical operators are used to combine or modify boolean expressions
  // && = AND
  // || = OR
  // ! = NOT

  int temp = 100000;
  bool isSunny = true;

  if(temp <= 0 || temp >= 30){
    printf("The temperature is BAD\n");
  }
  else{
    printf("The temperature is GOOD\n");
  }

  if(!isSunny){
    printf("It is CLOUDY outside\n");
  }
  else {
    printf("It is SUNNY outside\n");
  }

  return 0;
}
