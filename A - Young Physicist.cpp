#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned int n;
 
    cin>>n;
 
    long long int a[(n*3)-1],i,j,f=0,s=0,t=0;
 
    for(i=0;i<(n*3);i++)
    {
        cin>>a[i];
    }
 
    for(int i=0;i<3;i++)
    {
        for(j=i;j<(n*3);j=j+3)
        {
            if(i==0)
            {
                f=f+a[j];
 
            }
            if(i==1)
            {
                s=s+a[j];
            }
            if(i==2)
            {
                t=t+a[j];
 
            }
        }
    }
 
 
    if(f==0&&s==0&&t==0)
    {
        cout<<"YES";
 
    }
    else
    {
        cout<<"NO";
    }
return 0;
}
