//composite trapezoidal
#include<iostream>
#include<cmath>
#define f(x) (sin(x/2)+2*cos(x))

using namespace std;

int main(){
	float upper, lower, I, h, k;//h is the inteval obtained for the subinterval 
								//I implies integration
								//k implies next value of x
	int num;//num = sub intervals
	cout<<"Enter the lower limit of integration: ";
	cin>>lower;
	cout<<"Enter the upper limit of integration: ";
	cin>>upper;
	cout<<"Enter the number of sub intervals: ";
	cin>>num;
	
	h=(upper-lower)/num;
	
	I=f(upper)+f(lower);
	//calculation for I= h/2[f0+fn+2*(f1+f2+...+fn)
	for(int i=1; i<num; i++){
		k= lower+ i*h;
		I=I + 2* (f(k));
	}
	
	I=I*h/2;
	cout<<"The integration value calculated form Trapezoidal rule is "<<I<<endl;
	return 0;	
}
