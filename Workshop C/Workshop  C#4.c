#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,count,total=0;

    do{
        printf("entrer les entiers positifs\n");
        scanf("%d",&i);
        if(i>0){
        count++;
        total=+i;
        }

    }
    while(i>-1);
        printf("le moyenne des %d entiers est %.2f",count,(float)total/count);
    return 0;
}
