//
//  main.c
//  LiCode
//
//  Created by Dylan on 2022/2/21.
//

#include <stdio.h>
#include "Array.h"

int main(int argc, const char * argv[]) {
   
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int length = sizeof(arr)/sizeof(arr[0]);
//    printf("\n %d\n", removeAllDuplicates(arr, length ,2));
    
    printf("\n %d\n", removeDuplicates(arr, length));
       
    
    
    return 0;
}

