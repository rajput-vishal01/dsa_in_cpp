//Multiple values in for loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n :"<<endl;
	cin>>n;
	
	cout<<"Printing Value till n :"<<endl;
	
	for(int a=0,b=1,c=2;a<=0 && b<=1 && c>=2;a++,b++,c++){
		cout<<a<<b<<c<<endl;
	}
	return 0;
}
