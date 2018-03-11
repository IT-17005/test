#include<stdio.h>
#include<string.h>
char a[30],b[30];
int cmp()
{
    int i,j,k=3,n;
    int len_a=strlen(a);
    int len_b=strlen(b);
    n=(len_a>=len_b) ? len_b : len_a;
    for(i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            k=2;
            break;
        }
        else if(a[i]<b[i])
        {
            k=1;
            break;
        }
        else
            k=0;
    }
    if(k==0)
    {
        if(len_a!=len_b)
        {
            if(len_a>len_b)
                k=2;
            else
                k=1;
        }
        else
            k=0;
    }
    return k;
}
int main()
{

    printf(" Enter 1st string :  ");
    gets(a);

    printf(" Enter 2nd string :  ");
    gets(b);

    int r=cmp();
    if(r==1)
        printf("%s is small \n",a);
    else if(r==2)
        printf("%s is small \n",b);
    else
        printf(" They are equal string \n");

    main();
    return 0;
}


