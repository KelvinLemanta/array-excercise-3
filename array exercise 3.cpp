
// 137533 Kelvin Lemanta

//Array using a loop to input and output values.

#include <iostream>
using namespace std;

int main(){
	int nums [6];
	cout<<" Enter 6 values in your array";
	for (int i=0; i<6; i++){
		cin>>nums[i];
	}
	cout<<"The values input are:"<<endl;
	for (int i=0; i<6; i++){
		cout<<nums [i]<<endl;
	}
	return 0;
}
