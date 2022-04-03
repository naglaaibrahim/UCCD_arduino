#include <stdio.h>

void main()
{
    int num1,num2,num3;
    printf ("plz enter number 1 :");
    scanf(" %d",&num1);
     printf ("plz enter number 2 :");
    scanf(" %d",&num2);
     printf ("plz enter number 3 :");
    scanf(" %d",&num3);
      if(num1>num2 && num1>num3){
         printf(" maximum number is %d",num1);
     }
       else if (num2>num1 && num2>num3){
               printf(" maximum number is %d",num2);
     }
     else{
         printf(" maximum number is %d",num3);
     }          
          

}