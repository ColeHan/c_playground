#include <stdio.h>


/*
std stream files:
stdin
stdout
stderr
*/

int main()
{
  //printf("hello world!\n");
  //int a;
  //scanf("%d", &a);//input stream
  //printf("input value is: %d\n",a);  
  
  //printf("please input the value a:\n");
  fprintf(stdout,"please input the value a:\n");//printf is the an encapsulation of this code, stdout's default output is monitor
  
  int a;
  //scanf("%d",a);
  fscanf(stdin, "%d", &a);//stdin's default input is keyboard
  
  if(a<0){
    fprintf(stderr, "the value must be >0\n");
    return 1;
  }

  return 0;
}
