/*
a
b c
d e f
g h i j 
k l m n o
print the pattern..........
*/
#include<iostream>
using namespace std;
void HalfPyramid(int n){
	char alphabet='a';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<alphabet++;
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	HalfPyramid(n);
	cout<<"\n";
	return 0;
}
