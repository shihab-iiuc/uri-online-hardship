#include <stdio.h>

int main()
{
   double N,x,y;
   scanf("%lf",&N);
   if(N<=2000.00)
     printf("Isento\n");
    else if(N>2000.00 && N<=3000.00)
    {
        N=N-2000;
        N=N*(8.0/100.0);
        printf("R$ %.2lf\n",N);
    }
    else if(N>3000.00 && N<=4500.00)
    {
        N=N-2000.00-1000.00;

        N=N*(18.0/100.0);
       printf("R$ %.2lf\n",N+80);
    }
    else if(N>4500.00)
    {
        N=N-2000-1000-1500;
        N*=(28.0/100.0);
        printf("R$ %.2lf\n",N+80+270);



    }


    return 0;
}
