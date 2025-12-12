#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double PI = 3.14159;
    //cout<<PI;

    int t;
    cin>>t;

    while(t!=0){

     int p, r, t, i;
     double compund_interest;
     cout << "Input the Principle: ";
     cin >> p;
     cout << "Input the Rate of Interest: ";
     cin >> r;
     cout << "Input the Time: ";
     cin >> t;
     i=(p*r*t)/100;

     compund_interest = p*pow((1+(r/100.0)),t) - p;

     cout << "The Simple interest for the amount " << p << " for ";
     cout << t << " years @ " << r << " % is: " << i << endl;

     cout << "The Compound interest for the amount " << p << " for ";
     cout << t << " years @ " << r << " % is: " << compund_interest << endl;

    }

    return 0;
}




