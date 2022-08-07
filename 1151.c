#include <stdio.h>

int main()
{
  int n,i,fib,result;
   scanf("%d",&n);
   int n1=0;
   int n2=1;
   for(i=1;i<=n;i++)
   {
      if(i<n)
        printf("%d ",n1);
      if(i==n)
       {
          printf("%d\n",n1);
          break;
       }
      int result=n1+n2;
      n1=n2;
      n2=result;
      
      
   }
    return 0;
}
