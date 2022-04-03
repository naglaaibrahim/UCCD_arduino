
#include <stdio.h>

void main()
{
   int num;
   printf("plz enter your num :");
   scanf(" %d",&num);
   if(num>=85 && num<100 ){
       printf("your grad is excellent");
   }
    else if(num>=75 && num<85){
       printf("your grad is very good");
   }
    else if(num>=65 && num<75){
       printf("your grad is good");
   }
   

    else if(num>=50 && num<65){
       printf("your grad is normal");
   }
    
     else {
       printf("your grad is failed");
   }
}
