#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum,i,j,t,s;
    cin>>n>>m;
    int a[n];
    for(i=1;i<=n;i++)
        {cin>>a[i];}
    for(i=0;i<n-1;i++)
        for(j=1;j<=n-1-i;j++)
            if(a[j]<a[j+1])
                t=a[j],a[j]=a[j+1],a[j+1]=t;
    sum=0;s=1;
    for(t=0;t<=m;t)
    {
        if(s==n&&t+s<=m)
        {sum+=a[s]*s;break;}
        else if(s==n&&t+s>m)
        {sum+=a[s]*(m-t);break;}
        else if(a[s]==a[s+1])
            s++;
        else if(a[s]>a[s+1]&&s+t<=m)
        {sum+=a[s]*s;a[s]--;t+=s;}
        else if(a[s]>a[s+1]&&s+t>m)
        {sum+=a[s]*(m-t);break;}
    }
    cout<<sum;
    return 0;
}
