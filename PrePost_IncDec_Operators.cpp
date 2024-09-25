#include<iostream>
using namespace std;

int main() {
	
	int i = 4;
	
	//use first, then increment it
	cout<<" i++ "<<(i++)<<endl;
	//output: 4 , i = 5
	
	//increment first and then use it
	cout<<" ++i "<<(++i)<<endl;
	//i = 6, output: 6
	
	//use first and then decrement it
	cout<<" i-- "<<(i--)<<endl;
	//output: 6, i = 5
	
	//first decrement it and then use it
	cout<<" --i "<<(--i)<<endl;
	//i = 4, output: 4


	int a,b = 1;
	a=10;
	if(a>0 || b>0) {
		cout<<b<<"first";
	} else {
		cout<<++b;
	}
	
	return 0;
}
