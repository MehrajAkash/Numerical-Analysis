// C++ Program to decompose a matrix into lower and upper triangular matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int arr[n][n+1];

    for(int i=0; i<n; i++)cin>>arr[i][0];

    for(int i=0; i<n; i++)cin>>arr[i][1];

    for(int j=2; j<n+1; j++){
        for(int i=n-j; i>=0; i--){
            arr[i][j] = arr[i-1][j-1] - arr[i][j-1];
        }

    }

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}
