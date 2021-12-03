#include<iostream>
using namespace std;

char before(char X){
	if(X == 65){
		return X = 'Z';		
	}
	if(X >= 65 && X <=90){
		X = X-1 ;
	}else{
		return '0';
	}
	return X;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}