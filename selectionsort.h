/***************************************************************************************************************************************************
 * selection sort(选择排序) and optimization
 * 1.首先将待排序的序列存储在数组中,遍历该数组找到最小值（序列最小值），将该最小值与数组tail元素交换，并将其分割为tail元素有序序列和before的非有序序列;
 * 2.目标对象设置为tail元素before的子序列，对子序列进行寻找当前最小值（整个序列次小值），将该当前最小值和子序列tail元素交换，得到具有两个升序排列的值的有序序列和befire的无序序列；
 * 3.如上述不断迭代，直到子序列中仅仅包含一个元素（此时无需再做操作，因为分割的结果是tail段小数据有序和head段大数据无序，当head端大数据无序的序列仅仅包含一个元素时，其就是有序）
 * 
 * 结果：得到down序序列
 * attention:排序是在原数据存储空间上进行，如果原数据不能动，首先需要先拷贝一份数据，之后对拷贝数据进行排序操作
 ***************************************************************************************************************************************************/

#ifndef __SELECTIONSORT_H__
#define __SELECTIONSORT_H__

//operater on the subarr to find the currentMin and put it into the current_tail,next split the series and iter the selectMin
void selectMin(float* subarr,int len_subarr);
void selectSort(float* arr,int len_arr);


#endif