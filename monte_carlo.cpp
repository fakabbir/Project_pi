/*
*Author: Aeimi/Fakabbir Amin
*Date:23 Dec 2016. 
*Monte Carlo Simulation to calculate the value for pie. 
*For a circle and a square the ratio of area of the circle to the area of the square would be pie/4.
*/

#include<bits/stdc++.h>

#define REP(i,a,b) for(int i=a;i<b;i++)


using namespace std;
int main(){
	int avg=100; // maximum value of HIT number. (Length of output file)
	int dots=100; // maximum value of random numbers for producing HITs.
	double x,y;    // Coordinates
	int hit;       // storage variable of number of HITs
	double sum=0;
	srand(time(0));
	REP(j,0,avg){
		hit=0;
		x=0; y=0;
		REP(i,0,dots){
			x=double(rand())/double(RAND_MAX);
			y=double(rand())/double(RAND_MAX);
			if(y<=sqrt(1-pow(x,2))) hit+=1; }   
			sum+=4*double(hit)/double(avg);       //Choosing HITs according to analytic formula of circle
		//cout<<""<<4*double(hit)/double(imax)<<endl; }  // Print out Pi number
}
cout<<sum/avg;
return 0;
}
