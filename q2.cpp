#include <iostream>
using namespace std;
int main(){
	int side1,side2,side3;
	cout<<"Enter the first side\t";
	cin>>side1;
	cout<<"Enter the second side\t";
	cin>>side2;
	cout<<"Enter the third side\t";
	cin>>side3;
	if(side1+side2+side3==180){
		cout<<"These are the sides of triangle"<<endl;
	}else{
		cout<<"These are not the sides of triangle"<<endl;
	}
	return 0;
}
