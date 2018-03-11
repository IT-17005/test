#include<stdio.h>
#include<string.h>
char a[30],b[30],c[100];

int main()
{

    printf(" Enter 1st string :  ");
    gets(a);

    printf(" Enter 2nd string :  ");
    gets(b);
strcpy(c,a);
strcat(c,b);

printf(" %s  \n",c);

    return 0;
}


