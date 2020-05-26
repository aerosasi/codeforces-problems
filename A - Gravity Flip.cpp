#include<bits/stdc++.h>
 
using namespace std;
 
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
 
int main()
{
 ios_base::sync_with_stdio(false);
long long int a[101],res,no,i,j,k,len=0;
cin>>no;
 
for(i=0;i<no;i++)
{
    cin>>a[i];
}
std::sort(a,a+no);
for(i=0;i<no;i++)
{
    cout<<a[i]<<" ";
}
 
 
return 0;
}
