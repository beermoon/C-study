//
//  sec9_prac2.c
//  section9
//
//  Created by 최명기 on 8/7/25.
//

#include <stdio.h>

int main () {
    int a = 20;
    int b = 30;
    int temp;
    
    temp = 20;
    a = b;
    b = temp;
    
    printf("%d\n",a);
    printf("%d\n",b);
}
