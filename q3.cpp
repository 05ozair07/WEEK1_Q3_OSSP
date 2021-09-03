
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  FACTORIAL OF N NATURAL NO.S
    int n = 0;cin>>n;
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
cout<<sum<<endl;
}
