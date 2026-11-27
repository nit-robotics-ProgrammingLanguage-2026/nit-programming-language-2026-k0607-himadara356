#include <stdio.h>

int main(void)
{
    long n,g;
    long i,j;
    g = 0;
    i = 0;
    scanf("%ld", &n);
if  (n>=0&&n<=50)
    {
        j = n;
    for (i=0;i<=n;i++)
    if(i==j)
        {
             j = j - 1;
        }
    else
        { 
            g = g + 1;
            j = j - 1;
        }
    
    }
else if(n<0)
    {
     printf("NG");   
    }
else if(n>50&&n<=100)
    {
       j=100-n;
    for(i=0;i<101-n;i++)
        if(i==j)
        {
           j = j - 1;
        }
        else
       {
           g = g + 1;
           j = j - 1;
       }
    }
else if(n>100)
    {
        ;
    }
if (n>=0)
    {
  printf("%ld", g);
    }
    return 0;
};
