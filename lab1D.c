/***************************************
* EECS2031ON – Lab1 *
* Author: Nguyen, Sophia *
* Email: sophia97@my.yorku.ca *
* eecs_username: sophia97 *
* York Student #: 214285514
****************************************/
#include <stdio.h>

int main()
{  
   int a = 2031;
   void greet(int);
   float sum(float, float);
   greet(a);
   
   float x, y;
   printf("Enter two float numbers separated by ##: ");
   
   scanf("%f##%f", &x, &y);
   
   
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}

void greet(int i){
   printf("Hello %d!\n", i);
}
