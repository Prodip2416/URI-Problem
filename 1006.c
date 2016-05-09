#include<stdio.h>
int main()
{
    float A,B,C,D,MEDIA;

    scanf("%f %f %f",&A,&B,&C);

    D=((A*2)+(B*3)+(C*5))/(2+3+5);
    MEDIA=D;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
