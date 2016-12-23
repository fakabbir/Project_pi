#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    double x; // x coordinate of needle's center 
    double k; // angle between vertical position and needle
    double l; // lenght of the needle
    double n; // amount of trials
    double p = 0; // positive trials
    double y; // sin(angle) * l
    double pi;
    long i; // loop counter

srand(time(NULL));

cout << "number of trials ";
cin >> n;

l = 0.9;

for (i=0; i<n; i++)
{
    k = (double)rand()/(RAND_MAX)*360;       // random angle

    x = (double)rand()/(RAND_MAX*2);         // random x (0 do 1)

    y = (l/2) * sin (k);


    if (x<=y)                                    
    {
        p++;                                    
    }

}

pi = (l*n)/(p);

cout << "n = ";
cout << n << endl;
cout << "p = ";
cout << p << endl;

cout << pi;


return 0;
}
