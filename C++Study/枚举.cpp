#include <bits/stdc++.h>
using namespace std;
int main()
{
    enum number_set{C,C0,D,D0,E,E0,F,G,A,B};
    number_set number;
    int i,j,k,sum=0,num=0;
    for(i=C;i<=B;i++)
    {
        for(j=C;j<=B;j++)
        {
            if(i!=j)
                for(k=C;k<=B;k++)
            {
                if(k!=i&&k!=j)
                {
                    sum++;
                    for(num=1;num<=3;num++)
                    {
                        switch(num)
                        {
                            case 1:number=(number_set) i;break;
                            case 2:number=(number_set) j;break;
                            case 3:number=(number_set) k;break;
                        }
                        switch(number)
                        {
                            case C:cout<<"C"<<" ";break;
                            case C0:cout<<"C0"<<" ";break;
                            case D:cout<<"D"<<" ";break;
                            case D0:cout<<"D0"<<" ";break;
                            case E:cout<<"E"<<" ";break;
                            case E0:cout<<"E0"<<" ";break;
                            case F:cout<<"F"<<" ";break;
                            case G:cout<<"G"<<" ";break;
                            case A:cout<<"A"<<" ";break;
                            case B:cout<<"B"<<" ";break;
                        }
                    }
                    cout<<sum<<endl;
                }

            }
        }
    }
    return 0;
}
