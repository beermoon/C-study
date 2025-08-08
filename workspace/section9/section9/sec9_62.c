//
//  sec9_62.c
//  section9
//
//  Created by 최명기 on 8/7/25.
//

#include <stdio.h>

int main() {
    int a = 10;
    int b= 20;
    int temp;
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    temp = a;
    printf("temp = %d\n",temp);
    a=b;
    printf("a = %d\n",a);
    b=temp;
    printf("b = %d\n",b);
    
    return 0;

}
