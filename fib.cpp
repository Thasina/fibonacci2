#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int f[n+1];
    long long int sum=0;
    f[0]=0;
    f[1]=1;
    for(long long int i=2;i<=n+1;i++)
    {
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<" , ";
        if(f[i]%2==0)
        {
            sum=sum+f[i];
        }

    }
    cout<<endl;
   cout<<"sum :"<<sum<<endl;
}
