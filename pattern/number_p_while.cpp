//number pattern without reassigning using while loop
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include<iostream>
using namespace std;
int main(){
	int col=0, r=1,n=1,num=5;
	while(r <= num){
		while(col <= r-1){
			cout<<n;
			col++;
			n++;
		}
		col=0;
		cout<<endl;
		r++;
	}	
}
