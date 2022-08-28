
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int c;
   double d;
   cin>>c>>d;
   switch( c )
   {
     case 1:
     cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.00*d<<endl;
     break;
     case 2:
     cout<<"Total: R$ "<<fixed<<setprecision(2)<<4.50*d<<endl;
     break;
     case 3:
     cout<<"Total: R$ "<<fixed<<setprecision(2)<<5.00*d<<endl;
     break;
     case 4:
     cout<<"Total: R$ "<<fixed<<setprecision(2)<<2.00*d<<endl;
     break;
     case 5:
     cout<<"Total: R$ "<<fixed<<setprecision(2)<<1.50*d<<endl;
   }
    return 0;
}
