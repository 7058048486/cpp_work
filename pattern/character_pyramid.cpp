/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/
#include<iostream>
using namespace std;
char ch='A';
int num=5;
int main()
{
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
		}
		ch++;
		cout<<endl;
	}
}
