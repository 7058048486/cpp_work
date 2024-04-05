//full diamond pyramid
#include<iostream>
using namespace std;
int main()
{
	int num=5;
	for(int i=1;i<=num;i++)
	{
		for(int j=num;j>=1;j--)
		{
			if( i<j)
				cout<<" ";
				
			else if(i>=j)
				cout<<"* ";
			
		}
		
		cout<<endl;
	}
}
