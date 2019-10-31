#include<stdio.h>
#include"selectionsort.h"

void selectMin(float* subarr,int len_subarr){
    // locate the min-pos
    int i;
    float temp_min = subarr[0];
    int min_pos = 0;
    for(i=1;i<len_subarr;i++){
        if(subarr[i]<temp_min){
            temp_min = subarr[i];
            min_pos = i;
        }
    }

    subarr[min_pos] = subarr[len_subarr-1];
    subarr[len_subarr-1] = temp_min;
    
}


void selectSort(float* arr,int len_arr){

    int i;
    for(i=len_arr;i>=1;i--){
        selectMin(arr,i);
    }

    return;
}
