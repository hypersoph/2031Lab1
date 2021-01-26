/***************************************
* EECS2031ON – Lab1 *
* Author: Nguyen, Sophia *
* Email: sophia97@my.yorku.ca *
* eecs_username: sophia97 *
* York Student #: 214285514
****************************************/
#include <stdio.h> // define EOF

main(){
  int c;
  int count = 0;
  int countlines = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    if (c!='\n') count++;
    else countlines++;

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n# of lines: %d\n",count, countlines);

}