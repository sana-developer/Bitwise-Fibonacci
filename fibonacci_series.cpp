#include<iostream>
using namespace std;

int main() {
	
	int n = 10;
	
	int a = 0;
	int b = 1;
	int sum = 0;
	
	cout<<a<<" "<<b<<" ";
	
	for(int i = 0;i<n;i++) {
		sum = a+b;
		cout<<sum<<" ";
		a=b;
		b=sum;
	}
	
	return 0;
}
