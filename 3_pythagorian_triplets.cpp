//pythagorian triplet or not
#include<iostream>
using namespace std;
bool is_pythagorianTriplets(int,int,int);
int main(){
	int a,b,c;
	cout<<"\nEnter the values for a,b and c: ";
	cin>>a>>b>>c;
	
	if(is_pythagorianTriplets(a,b,c)){
		cout<<"\nYes!! These are pythagorian triplets.";
	}
	else{
		cout<<"\nNo!! These are not pythagorian triplets.";
	}
	return 0;
}

bool is_pythagorianTriplets(int a,int b,int c){
	int max;
	
	max=a>b?a>c?a:c:b>c?b:c;
	
	if(max==a){
		if((a*=a)==(b*=b)+(c*=c)){
			return true;
		}
		
	}
	else if(max==b){
		if((b*=b)==(a*=a)+(c*=c)){
			return true;
		}
		
	}
	else if(max==c){
		if((c*=c)==(a*=a)+(b*=b)){
			return true;
		}
		
	}
	else{
		return false;
	}
	
}
