#include<bits/stdc++.h>
int m,a[1011],s;
using namespace std;
int work(int x)
{
	for(int i=2;i<=sqrt(x); i++)
		if(x%i==0&&a) return 0;
	return x;
}
int main() {
	
	scanf("%d",&m);
	for(int i=2;i<=m;i++) a[i]=work(i);
	for(int i=5;i<=m;i++)
	{
		if(a[i]-a[i-1]==2)
		{
			s=max(s,a[i]);
		}
		else if(a[i]-a[i-2]==2)
		{
			s=max(s,a[i]);
		}
	}
	printf("%d %d",s-2,s); 
	return 0;
}
