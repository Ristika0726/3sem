//composite simpson's 1/3 rule
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
	
	for(int i=1; i<num; i++){
		k=lower+i*h; //since the interval increases by h every time hence upper=lower+ n*h
		if(i%2==0){
			I=I+2*(f(k));// suppose (f0+f1+f2)+(f2+f3+f4)+(f4+f5+f6)
		}else{
			I=I+4*(f(k));
		}
	}
	I=I*h/3;
	cout<<"The integration value calculated using Simpson's 1/3 is "<<I<<endl;
	return 0;
}
