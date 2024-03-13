//double trapezoidal rule
#include<iostream>
#include<cmath>
#define f(x,y) (pow(x,3)+pow(y,2))

using namespace std;

int main(){
	float a,b,c,d, I, h1, h2;
	cout<<"Enter the lower limit of dx: ";
	cin>>a;
	cout<<"Enter the upper limit of dx: ";
	cin>>b;
	cout<<"Enter the lower limit of dy: ";
	cin>>c;
	cout<<"Enter the upper limit of dy: ";
	cin>>d;
	h1=(b-a)/2;
	h2=(d-c)/2;
	
	I=h1*h2*((f(b,d))+(f(b, c))+(f(a, c))+(f(a, d)));
	
	cout<<"The required integration is "<<I<<endl;
	return 0;
}
