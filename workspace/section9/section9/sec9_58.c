//
//  sec9_58.c
//  section9
//
//  Created by 최명기 on 8/7/25.
//

#include <stdio.h>

int main() {
    
    int a,b,c;
    double average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
   average = ((double)a+b+c)/3.0;
    
    printf("%lf\n",average);
    
    
    return 0;
}
