#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi= 3.14 ;
    float r,d,p,s ;
    printf("entre la valeur du rayon r \n");
    scanf("%f" ,&r);
    //traitement

    if(r!=0)
    {
        p=2*pi*r ;
        d=p/pi ;
        s=pi*r*r ;
    //affichage

        printf("Un cercle de rayon %.2f\n a pour diamètre %.2fQ\n , pour périmetre %.2f\n et pour surface %.2f\n",r,d,p,s);
    }
    else
    {
        printf("Error");
    }

    return 0;
}
