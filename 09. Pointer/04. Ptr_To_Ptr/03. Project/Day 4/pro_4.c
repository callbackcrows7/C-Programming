#include <stdio.h>

int main(void){
    int arr[5] = {1,2,3,4,5};
    int temp;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < i; j++){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    

    return 0;
}