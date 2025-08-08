//
//  sec9_60.c
//  section9
//
//  Created by 최명기 on 8/7/25.
//

#include <stdio.h>

int main() {
    double celsius,fahrenheit;
    
    
    printf("celsius is : ");
    scanf("%lf",&celsius);
  
    
    fahrenheit = celsius * 1.8 + 32;
    printf("fahrenheit is %.2lf\n",fahrenheit);
    
    
    
    
    celsius = (fahrenheit - 32) / 1.8;
    printf("celsius is %.2lf\n",celsius);
    
    return 0;
}
