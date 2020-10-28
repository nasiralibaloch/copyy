#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[4];
	string str[4]={"good","bad","positive","negetive"};
	for(int i=0;i<4;i++)
	{
		s[i]=str[i];
	}
	for(int i=0;i<4;i++)
	{
		cout<<"the elements"<<i+1<<"copied arry s[i]  "<<s[i]
<<"  is same as str[i]   "<<str[i]<<endl;
	}
}
