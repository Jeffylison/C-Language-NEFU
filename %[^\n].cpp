#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10],b[100];
    while(scanf("%[^\n]",a))
    {
        if(a[0]=='#') break;
        getchar();
        scanf("%[^\n]",b);
        getchar();
        int n,m,sum;
        n=strlen(a);m=strlen(b);
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<m;j++)
        {

            if(a[i]==b[j])sum++;
        }

        cout<<a[i]<<" "<<sum<<endl;
        }
    }
    return 0;
}
