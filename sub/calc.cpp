#include<iostream>
using namespace std;
int main()
{
	int n1,n2;char choice;
cout<<"Enter two numbers";
cin>>n1>>n2;
cout<<"Enter operation";
cin>>choice;
switch(choice)
{
	case '+':  
		cout<<n1+n2;  
		break;
	case '-':   
		cout<<n1-n2;
		break;
	case '*':
		cout<<n1*n2;
		break;
	case '/':
		cout<<n1/n2;
		break;

}


}
