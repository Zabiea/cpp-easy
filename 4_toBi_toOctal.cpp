//decimal to binary,octal

#include<iostream>
using namespace std;
int to_binary(int);
int to_octal(int);

int main(){
	int n;
	cout<<"Enter the decimal number: ";
	cin>>n;
	
	cout<<"\nThe equivalent binary number: "<<to_binary(n);
	cout<<"\nThe equivalent octal number: "<<to_octal(n);
	
	return 0;
}

int to_binary(int n){
	int rem,i=1,num=0;
	while(n>0){
		rem=n%2;
		num=num+rem*i;
		i*=10;
		n/=2;
	}
	return num;
}
int to_octal(int n){
	int rem,i=1,num=0;
	while(n>0){
		rem=n%8;
		num=num+rem*i;
		i*=10;
		n/=8;
	}
	return num;
}

