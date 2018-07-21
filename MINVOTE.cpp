//There was and will always be only one Chester. RIP legend
//--------------------Life is beautiful--------------------
#include<bits/stdc++.h>
using namespace std;
#define Nilesh ios_base::sync_with_stdio(false);
int main()
{
	Nilesh
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long a[n+1],pre[n+1];
        long long sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            pre[i]=sum;
        }

        int ans[n+1]={0};
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=1;j--)
                {
                    if(pre[i-1]-pre[j]<=a[i])
                        ans[j]++;
                    else
                        break;
                }

            for(int j=i+1;j<=n;j++)
                {
                    if(pre[j-1]-pre[i] <=a[i])
                        ans[j]++;
                    else
                        break;
                }
        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
