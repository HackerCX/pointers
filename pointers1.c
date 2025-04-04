#include <stdio.h>


int main(){
    int a = 14;
    int b = 17;
    int c = 99;
    int* a1 = &a;
    int* b1 = &b;
    int* c1 = &c;
    printf("%p  \n",a1);
    printf("%p  \n", b1);
    printf("%p  \n", c1);
    return 0;
}
