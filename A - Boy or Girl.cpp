#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int maxi=1;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                char temp;
 
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
 
         }
 
 
    }
    int dist=1;
 
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
         if(s[i]==s[j])
         {
            i=j;
         }
         else{
            dist++;
            break;
 
         }
        }
    }
 
    if(dist%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
