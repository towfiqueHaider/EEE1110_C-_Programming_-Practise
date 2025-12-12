#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double PI = 3.14159;
    //cout<<PI;

    int t;
    cin>>t;

    while(t!=0){

    double x,y;
    cout<<"Enter integer value of angle x:"<<endl;
    cin>>x;

    y = sin(x*PI/180);

    cout<<"y = "<<y<<endl;


    }

    return 0;
}



