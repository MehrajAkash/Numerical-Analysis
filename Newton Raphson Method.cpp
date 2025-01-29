
#include<bits/stdc++.h>
#include <math.h>

#define EPSILON 0.0001
using namespace std;

double func(double x)
{
     cout<< "func- x="<<x<<"  func()="<< x* sin(x) + cos(x) <<endl;
	return x* sin(x) + cos(x) ;
}


double derivFunc(double x)
{
    cout<< "derivfunc- x = "<<x<<" derivfunc()= "<< x* sin(x) + cos(x) <<endl;
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
    double a,b,c;
    cin>>a>>b;

    if(func(a)*func(b) < 0){
        if( fabs(func(a)) < fabs(func(b)) ){
            c = a;
        }
        else{
            c = b;
        }
    }
    else{
        cout<<"You have taken Invalid input."<<endl;
        return 0;
    }

	newtonRaphson(c);
	return 0;
}

