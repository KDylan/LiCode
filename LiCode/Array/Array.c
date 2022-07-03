//
//  Array.c
//  LiCode
//
//  Created by Dylan on 2022/6/29.
//

#include "Array.h"

/// 删除数组中重复元素，并且返回新数组长度
/// @param arr array
/// @param length length
/// @param val 重复元素
int removeAllDuplicates(int arr[],int length, int val) {

    int slow = 0;

    for (int flag = 0; flag < length; flag ++ ) {
        if (arr[flag] != val) {
            // arr[slow++] isEqual arr[slow], slow = slow + 1
            arr[slow++] = arr[flag];
           
        }
    }

    for (int i = 0; i<length; i++) {
        printf("=========> %d", arr[i]);
    }

    return slow;
}


/// 删除数组中重复元素，并且返回新数组长度
int removeDuplicates(int arr[], int length) {
//    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int slow = 0;
    for (int flag = 1; flag < length; flag ++ ) {
        if (arr[slow] != arr[flag]) {
            slow++;
            arr[slow] = arr[flag];
        }
    }
    for (int i = 0; i<length; i++) {
        printf("%d,", arr[i]);
    }
    return slow + 1;
}


