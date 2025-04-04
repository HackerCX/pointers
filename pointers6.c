#include <stdio.h>

void swapNums(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int a = 14;
    int b = 17;
    swapNums(&a, &b);
    printf("a = %d b = %d  \n", a, b);
    return 0;
}
