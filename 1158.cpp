#include <stdio.h>

int main()
{
    int t,i,j,x,y;
    scanf("%d",&t);

    while(t--)
    {
      int sum=0,count=0;
      scanf("%d%d",&x,&y);
    while(count<y)
    {
        if(x%2!=0)
        {
           sum+=x;
           count++;
       }
        x++;
    }
    printf("%d\n",sum);
    }

    return 0;
}
