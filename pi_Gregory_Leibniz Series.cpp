#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>

using namespace std;

int main()  

{
    //declare variables
    double sum, pi;
    int n;

    //prompt user
    cout << "How many iterations would you like to do to calculate pi: ? ";
    cin >> n;

    //calculate pi

   for(int i=0;i<=n;i++)
   {
		if(i%2==0)
		{
			sum+=(1.0/(2*i+1.0));
			}
		else
		{
			sum-=(1.0/(2*i+1.0));
			}
   }
cout<<4*sum;
    return 0;
}
