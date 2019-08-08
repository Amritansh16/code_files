#include <bits/stdc++.h>
using namespace std;
 vector<int> ans;
void func(vector<int> &v,int in,int sum,int t)
{
	if(sum>=t)
	{
		if(sum==t)
		{
			for(int j=0;j<ans.size();j++)
			    cout<<ans[j]<<" ";
			    cout<<endl;
		}
	//	ans.clear();
		return ;
	}
	
	for(int i=in;i<v.size();i++)
	{
		ans.push_back(v[i]);
		func(v,i+1,sum+v[i],t);
		ans.pop_back();
	}
}
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	int a;
	
	for(int i=0;i<n;i++)
	   {
	   	cin>>a;
	   	v.push_back(a);
	   }
	   int t;
	cin>>t;
	   func(v,0,0,t);
}
