
#include<bits/stdc++.h>
#include <math.h>

#define EPSILON 0.0001
using namespace std;

double func(double x)
{
     cout<< "x = "<<x<< "   func()= "<< x* sin(x) + cos(x) <<endl;
	return x* sin(x) + cos(x) ;
}


double derivFunc(double x)
{
	return x* cos(x);
}

// Function to find the root
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		// x(i+1) = x(i) - f(x) / f'(x)
		x = x - h;
	}

	cout << "The value of the root is : " << x;
}


int main()
{
	double x = 3.1416;
	newtonRaphson(x);
	return 0;
}

