//
//  main.c
//  InsertSort
//
//  Created by 任腾 on 13-12-24.
//  Copyright (c) 2013年 任腾. All rights reserved.
//

#include <stdio.h>

void insertSort(int *num, int n)
{
    int i,j,key;
    
    for (j = 1; j < n; ++j)
    {
        key = num[j];
        i = j - 1;
        while(i >= 0 && num[i] > key)
        {
            num[i + 1] = num[i];
            i--;
        }
        num[i + 1] = key;
    }
}

int main(int argc, const char * argv[])
{

    // insert code here...
    int num[] = {3,2,6,4,9,1,0};
    int n = sizeof(num) / sizeof(int);
    int i = 0;
    
    insertSort(num, n);
    
    for(i = 0;i < n;i++)
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}

