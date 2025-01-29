#include<bits/stdc++.h>
using namespace std;
const int n=3;

void print(double mat[n][n+1]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n+1; j++){
            cout << mat[i][j] <<"  ";
        }
      cout<<endl;
    }
}

int main(){

 double mat[n][n+1];

 cout<<"\n Enter value: \n";
 for(int i=0; i<n; i++){
    for(int j=0; j<n+1; j++){
        cout<<"mat["<< i <<"]["<< j <<"]=";
        cin>>mat[i][j];
    }
    cout<<endl;
 }

/// Convert to upper triangular matrix
double ratioo;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(j>i){
            ratioo = double(mat[j][i]) / mat[i][i];

            for(int k=0; k<n+1; k++){
                mat[j][k] = mat[j][k] - (ratioo * mat[i][k]);
            }
        }
    }
}

cout<<"Upper triangular matrix: "<<endl;
print(mat);

double value[n];

value[n-1] = double(mat[n-1][n]) / mat[n-1][n-1];
int j;

    for(int i=n-2; i>=0; i--){
        double sum = 0;
        for(j=i+1; j<n; j++){
            sum = sum + mat[i][j]*value[j];
        }
        value[i] = double( mat[i][j]-sum ) / mat[i][i];
    }

    /// value of x, y, z printed
for(int i=0; i<n; i++) cout<<endl<< value[i] <<" ";


return 0;
}
