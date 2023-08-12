/* This program adds two numbers of your choice together and shows the answer */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main()
{
  int n1, n2, total;
  
  printf("This program adds two numbers. \n");
  printf("1st number? ");
  n1 = GetInteger();
  printf("2nd inumber? ");
  n2 = GetInteger();
  total = n1 + n2;
  printf("The total is %d.\n", total);
  return 0;
}
