#include<iostream>
using namespace std;

int main(){
        int i,j,a[2][2],b[2][2];
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout<<"Enter first matrix "<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>a[i][j];
            }
        }
        cout<<endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout<<"Enter second matrix "<<"["<<i<<"]"<<"["<<j<<"]";
                cin>>b[i][j];
            }
        }
        cout<<"First mtrix is "<<endl;
        for(i=0;i<2;i++){
                cout<<"|";
            for(j=0;j<2;j++){
                cout<<a[i][j];
            }
                cout<<"|\n";
        }
        cout<<"Second mtrix is "<<endl;
        for(i=0;i<2;i++){
                cout<<"|";
            for(j=0;j<2;j++){
                cout<<b[i][j];
            }
                cout<<"|\n";
        }
        cout<<"Matrix multiplication :- "<<endl;
        cout<<"|"<<(a[0][0]*b[0][0]+a[0][1]*b[1][0])<<" "<<(a[0][0]*b[0][1]+a[0][1]*b[1][1])<<"|"<<endl;
        cout<<"|"<<(a[1][0]*b[0][0]+a[1][1]*b[1][0])<<" "<<(a[1][0]*b[0][1]+a[1][1]*b[1][1])<<"|"<<endl;

    return 0;
}