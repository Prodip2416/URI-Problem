#include<stdio.h>
int main()
{
    char s[15];
    double a,b,total;
    scanf("%s %lf %lf",s,&a,&b);

    total=a+(b*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;

}
