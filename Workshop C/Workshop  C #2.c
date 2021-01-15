#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
    long result ;
    printf("Entre a\n");
    scanf("%d" ,&a);
    printf("Entre b\n");
    scanf("%d" ,&b);
    //audication
    result = a + b ;
    printf("the sum is : %d \n",result );
    result = a - b ;
    printf("the substraction is : %d \n",result );
    result = a / b ;
    printf("the division is :%d \n",result );
    result = a * b ;
    printf("the multiplication is : %d \n",result );
    result = a % b ;
    printf("the modulo is : %d \n");


    return 0;
}
