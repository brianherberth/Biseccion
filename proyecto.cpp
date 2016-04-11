#include <iostream>
#include <string>
#include <sstream>
#include <math.h>       
#include <stdio.h>

using namespace std;

int main(){
	double epMin=1;
	int y=0;
	double epRe=100;
	double xa=0;
	double xb=1,xrv;
	double xr= (xa+xb)/2;	
	double fr= pow (xr,4)+(3*pow(xr,3))-2;
	double fxa=pow (xa,4)+(3*pow(xa,3))-2;
	double fxb=pow (xb,4)+(3*pow(xb,3))-2;
	double r= fxa*fr;


	if(r>0)
		xa=xr;

	while (epRe>=epMin){
		xrv=xr;
		xr= (xa+xb)/2;
		fr= pow (xr,4)+(3*pow(xr,3))-2;
		fxa=pow (xa,4)+(3*pow(xa,3))-2;
		r= fxa*fr;
		epRe=((xr-xrv)/xr)*100;

	if(r>0)
		xa=xr;
	else
		xb=xr;

	cout<<xr<<"	"<<y<<endl;
		if(epRe<0)
			epRe=epRe*(-1);

	}
   return 0;
}