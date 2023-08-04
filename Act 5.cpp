#include <iostream>

using namespace std;

int main() {
	int i, num, div, sum=0;
	cout<<"--------------------------------------\n";
	cout<<"Check if the Number is Perfect or Not\n";
	cout<<"--------------------------------------\n";
	cout<<"Enter a Number: --> ";
	cin>>num;
	if (num>=500){
		cout<<"Limit!";
	}
	else {
			for (i=1;i<num;i++){
		div = num % i;
		if (div == 0)
		sum = sum + i;
	}
	if (sum == num)
	cout<< num<<" is a Perfect Number. ";
	else
	cout<<num<<" is Not a Perfect Number. ";
	cout<<"\n\nSubmitted By: Jeff Jojer Jones E. Catulay\nBSCS 2B\n\n";
	}
	system("pause");
}
