#include <stdio.h>

void DesSort(int ary[], int len);

int main(void){
    int arr[7];

    for(int i = 0; i < 7; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    DesSort(arr, sizeof(arr)/sizeof(int));
    
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

void DesSort(int ary[], int len){
    for(int i = 0; i < len-1; i++){
        for(int j = 0; j < (len-i)-1; j++){
            if(ary[j] < ary[j+1]){
                int temp = ary[j];
                ary[j] = ary[j+1];
                ary[j+1] = temp;
            }
        }
    }
}