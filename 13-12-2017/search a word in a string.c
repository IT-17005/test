#include<stdio.h>
#include<string.h>
char a[30],b[30];

int main()
{

    printf(" Enter 1st string :  ");
    gets(a);

    printf(" Enter 2nd string :  ");
    gets(b);

    int r=strstr(a,b);
    if(r)
        printf("found \n");
    else
        printf(" not  found \n");
    main();
    return 0;
}



