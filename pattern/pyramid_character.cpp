/*
A 
B C 
D E F 
G H I J 
K L M N O 
*/
#include<iostream>
using namespace std;
int main()
{
	int num=5;
	char ch='A';
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}
