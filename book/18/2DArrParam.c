#include <stdio.h>

void ShowArr2DStyle(int (*arr)[4], int colum){
    for(int i = 0; i < colum; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int Sum2DArr (int arr[][4], int colum){
    int sum = 0;
    for(int i = 0; i < colum; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}


int main(void){
    int arr1[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
    };
    int arr2[3][4] = {
        {1, 1, 1, 1},
        {3, 3, 3, 3},
        {5, 5, 5, 5},
    };

    ShowArr2DStyle(arr1, sizeof(arr1)/sizeof(arr1[0]));
    ShowArr2DStyle(arr2, sizeof(arr2)/sizeof(arr2[0]));

    printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
    printf("arr2의 합: %d \n", Sum2DArr(arr2, sizeof(arr2)/sizeof(arr2[0])));

    return 0;
}