#include<iostream>
using namespace std;

int main() {
	
	//BREAK statement
	for(int i = 0; i<=5; i++) {
		cout<<"HYY\n";
		if(i == 3) {
			cout<<"reply nii kya na, jao bhar ma\n";
			break; //get out of the loop
		}
		
		cout<<i<<" ";
	}

	cout<<"Break kick us out from the loop.."<<endl;
	
	//CONTINUE statement
	for(int i =0; i<=5; i++) {
		cout<<i<<" ";
		cout<<"HYY"<<endl;
		if(i == 3) {
			cout<<"Sorry..\n";
			continue;  //doesn't execute the remaining part, start the loop from next iteration..
		}
	}
	
	return 0;
}
