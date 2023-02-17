#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*
* main - print whether the number stored in the variable n is positive or negative
*
* Return: always 0
*
*/

int main (void) {


int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n >0){
 
  printf("%d is a positive⧵n"n)

}

else if (n<0){

  printf("%d is a negative⧵n",n);

}

else {
  
  printf("%d is zero⧵n",n);

}


return (0);

}

