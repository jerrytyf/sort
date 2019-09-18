
#include <iostream>
using namespace std;
int main()
{
    int a[500],i,j,t;
    int n;
    cin>>n;
    
    for(i=0;i<=500;i++)
        a[i]=0;
    
    for(i=1;i<=n;i++)
    {
        cin>>t;
        a[t]++;
    }
    for(i=0;i<=500;i++)
        for(j=1;j<=a[i];j++)
            cout<<i<<" ";
    return 0;
}
