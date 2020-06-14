#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    long long int i,j,lucky=0;
    string s;
    cin>>s;
 
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            lucky++;
        }
    }
 
 
 
 
    if( lucky==4 || lucky==7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 
    return 0;
}
