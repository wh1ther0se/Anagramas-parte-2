#include <iostream>
using namespace std;

bool anagrama(string a, string b)
{
	for(int i=0; i<a.size(); i++)
	{
		if(b.find(a[i]) == string::npos)
		{
			return false;
		}
	}
	return true;
}





int main()
{
	string a;
	string b;
	
	cin>>a>>b;
	
	if(anagrama(a,b))
	{
		cout<< "Are anagrams."<< endl;
	}
	else 
	{
		cout <<"Are not anagram" << endl;
	}
	
	
}
