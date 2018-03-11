#include<stdio.h>
int a[2][100],n,m,res1[100],res2[100],res3[100],res4[100],un[2][100],u1,u2,bg,lol;
int uni(int size,int num) /// function for finding unique value
{
    int c=1,i,j;
    un[num][0]=a[num][0];
    for(i=1; i<n; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[num][i]==un[num][j])
            {
                break;
            }
            if(j==c-1)
            {
                un[num][c]=a[num][i];
                c++;
            }
        }
    }
    return c;
}
int inter(void)///function for finding inter set of a & b
{
    int i,j,k=0,l1;
    for(i=0; i<u1; i++)
    {
        for(j=0; j<u2; j++)
        {
            if(un[0][i]==un[1][j])
            {
                res1[k++]=un[0][i];
            }
        }
    }
    return k;
}
int main()
{
    int i,j,k,l,inter_n,m,kk=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[0][i]);
    scanf("%d",&m);
    for(i=0; i<m; i++)
        scanf("%d",&a[1][i]);
    u1=uni(n,0);
    u2=uni(m,1);
    bg=(u1>=u2) ? u1: u2;
    /// Intersect part start
    inter_n=inter();
    printf("This is a^b\n");
    for(i=0; i<inter_n; i++)
        printf("%d   ",res1[i]);
    printf("\n");
    /// Intersect part end

    /// Union  part start
    l=m=0;

    for(i=0; i<u1; i++)
        res2[l++]=un[0][i];
        m=l;
    for(i=0; i<u2; i++)
    {kk=0;
        for(j=0; j<m; j++)
        {
            if(un[1][i]==res2[j])
            {kk++;
                break;
            }
            if(j==m-1 && kk==0)
            {
                res2[l++]=un[1][i];
                m=l;
            }
        }
    }
    printf("\nThis is a U b \n");
    for(i=0; i<m; i++)
        printf("%d ",res2[i]);
    printf("\n");
    /// Union part end

    ///a-b part start
    l=0;
    for(i=0; i<u1; i++)
    {
        for(j=0; j<u2; j++)
        {
            if(un[0][i]==un[1][j])
                break;
            if(j==u2-1)
                res3[l++]=un[0][i];
        }
    }
    printf("\nThis is a-b\n");
    for(i=0; i<l; i++)
        printf("%d  ",res3[i]);
    printf("\n");
    ///A-B  part end

    ///B-A part start
    l=m=0;
    for(i=0; i<u2; i++)
    {
        for(j=0; j<u1; j++)
        {
            if(un[1][i]==un[0][j])
                break;
            if(j==u1-1)
                {res4[l++]=un[1][i];m=l;}
        }
    }
    printf("\nThis is b-a\n");
    for(i=0; i<m-1; i++)
        printf("%d  ",res4[i]);
    printf("\n");
    ///B-A part end
    return 0;
}


