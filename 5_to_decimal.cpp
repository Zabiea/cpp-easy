//decimal to binary,octal

#include<iostream>
using namespace std;
int bin_to_dec(int);
int oc_to_dec(int);

int main(){
	int b,o;
	cout<<"Enter the binary number: ";
	cin>>b;
	cout<<"Enter the octal number: ";
	cin>>o;
	
	cout<<"\nThe binary to decimal: "<<bin_to_dec(b);
	cout<<"\nThe octal to decimal: "<<oc_to_dec(o);
	
	return 0;
}

int bin_to_dec(int n){
	int rem,i=1,num=0;
	while(n>0){
		rem=n%10;
		if(rem>1){
			cout<<"ERROR: Wrong binary number!";
			exit(1);
		}
		num=num+rem*i;
		i*=2;
		n/=10;
	}
	return num;
}
int oc_to_dec(int n){
	int rem,i=1,num=0;
	while(n>0){
		rem=n%10;
		if(rem>7){
			cout<<"ERROR: Wrong octal number!";
			exit(1);
		}
		num=num+rem*i;
		i*=8;
		n/=10;
	}
	return num;
}

