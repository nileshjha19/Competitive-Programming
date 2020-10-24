//There was and will always be only one Chester. RIP legend
//--------------------Life is beautiful--------------------
#include<bits/stdc++.h>
using namespace std;
#define Nilesh ios_base::sync_with_stdio(false);
bool check(long long n,long long k,long long h,long long a[])
{
    long long time=0;
    //cout<<k<<" ";
    for(int i=0;i<n;i++)
    {
        time+=(ceil(a[i]/(double)k));
    }
    //cout<<time<<endl;
    if(time<=h)
        return true;
    return false;
}
int main()
{
	Nilesh
	int t;
	cin>>t;
	while(t--)
    {
        long long n,h;
        cin>>n>>h;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long start=0,end=1000000009;
        while(start+1<end)
        {
            long long mid=(start+end)/2;
            if(check(n,mid,h,a))
                end=mid;
            else
                start=mid;
        }
        cout<<end<<endl;
    }
}
