#include <stdio.h>

void main()
{
 int hours;
 float salary;
 printf("plz enter your hours :");
 salary=50*hours;
 scanf("%d", &hours);
 salary=50*hours;
  if (hours<40){
      salary=salary-(0.1*salary);
  }
  printf("salary is %f",salary);
 
}