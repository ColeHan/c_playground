#include <stdio.h>

int main(int argv, char* argc[])
{
    printf("hello world\n");
    return 0;//can be detect by echo $?, if not 0, then be treated as error code. when use && execute multiple codes in terminal, can not run latter code.

    //return 101;
}
