#include <stdio.h>

int main(){
    int a = 14;
    int b = 17;
    int* pointer1 = &a;
    int* pointer2 = &b;
    int sum = *pointer1 + *pointer2;
    int sub = *pointer1 - *pointer2;
    printf("a + b = %d  \n",sum);
    printf("a - b = %d  \n", sub);
    return 0;
}
