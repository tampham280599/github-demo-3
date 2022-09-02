#include "stdio.h"
#include "conio.h"
#include "math.h"
int a = 41, t[][3]= {{ 25,30,40},{145,83,10}};
float y[8]={-48.5,32.5};
float x[10][2]={ {-125.3,48.9},{145.6,83.5}};
char n1[]={'T','h','u','\0'};
char n2[]="Thu";
char n3[10]={'T','h','u','\0'};
char n4[10]="Thu";
char sao='n';
int main()
{
    double k[]={23.5,78,49.3};
    int n = sizeof(k)/sizeof(double);
    printf("a=%6d, t(1,2)=%6d, t(1,1)=%6d",a,t[1][2],t[1][1]);
    printf("\nx(1,1)=%8.2f,x(2,0)=%8f",x[1][1],x[2][0]);
    printf("\n%s %s %s %s %c",n1,n2,n3,n4,sao);
    printf("\n%c",'s');
    printf("\n%d",n);
    getch();
}