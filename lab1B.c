/***************************************
* EECS2031ON – Lab1 *
* Author: Nguyen, Sophia *
* Email: sophia97@my.yorku.ca *
* eecs_username: sophia97 *
* York Student #: 214285514
****************************************/
#include <stdio.h>

main()
{
  int m, d, y;
  printf("Please enter month, day and year separated by spaces: " );
 
  scanf( "%d %d %d",  &m, &d, &y);     
 
  printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n", m,d,y,y,m,d,y,m,d);
}

