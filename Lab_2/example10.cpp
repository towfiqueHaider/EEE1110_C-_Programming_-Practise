#include<iostream>
using namespace std;

int main(){
    int d,v;
    double t,t_m;
    d = 34000000;
    v = 186000;
    t = d/v;
    t_m = t/60;


    cout<<"Time in seconds = "<<t<<endl;
    cout<<"Time in minutes = "<<t_m;

    return 0;
}


