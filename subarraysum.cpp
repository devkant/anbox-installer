#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int n,s;
		cin>>n>>s;

		long long int arr[n];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
			int r=0;
			int l=0;

			int pass=0;
		for(int i=0;i<n;i++)
		{
			r=i;

			int kk=i;
			int sum=0;
			while(sum<=s && kk>=0)
			{
				sum=sum+arr[kk];
				if(sum==s)
					{
						pass=1;
						l=kk;
						break;
					}

				kk--;

			}
			if(pass==1)
			{
				cout<<l+1<<" "<<r+1<<"\n";
				break;
			}
			
		}

		if(pass==0)
		{
			cout<<"-1"<<"\n";
		}

	}
	return 0;
}