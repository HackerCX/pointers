#include <stdio.h>


int main(){
    int arr[] = {1, 17, 25, 477, 99};
    int* pointer = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < size; ++i){
        printf("%d  \n", *pointer);
        pointer++;
    }
    return 0;
}
