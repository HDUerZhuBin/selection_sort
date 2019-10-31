#include<stdio.h>
#include"selectionsort.h"

int main(){
    float test_signal[] = {15,87,95,35,47,62,58,74,25,698,254,15,47,23,64};
    int len_test_signal = sizeof(test_signal)/sizeof(test_signal[0]);

    int i;
    printf("before sorting:\n");
    for(i=0;i<len_test_signal;i++){
        printf("%f;  ",test_signal[i]);
    }

    selectSort(test_signal,len_test_signal);

    printf("after sorting:\n");
    for(i=0;i<len_test_signal;i++){
        printf("%f;  ",test_signal[i]);
    }

    return 0;

}