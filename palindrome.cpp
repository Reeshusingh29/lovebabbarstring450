#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="lal";
	int start=0,end=s.size()-1;
	while(start<end)
	{
		if(s[start]!=s[end])
		{
			cout<<"it is not palindrome "<<endl;
			return 0;
		}
		start++,end--;
		
	}
	cout<<"it is  palindrome "<<s<<endl;
	
}

