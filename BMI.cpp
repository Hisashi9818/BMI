#include <bits/stdc++.h>
using namespace std;
int w;
double h;
main() {
    cout<<"Calculate BMI"<<endl;
    cout<<"Weight ";
    cin>>w;
    cout<<endl;
    cout<<"Height ";
    cin>>h;
    cout<<endl;
    double BMI= w/pow(h,2);
    ;cout<<"------------------"<<endl;
    ;cout<<"Your weight is (kg): "<<w<<endl;
    ;cout<<"Your height is (m) : "<<h<<endl;
     cout<<"------Result-------"<<endl;
;cout<<"BMI="; ;cout<<setprecision(1)<<fixed<<round(BMI*10)/10<<endl;
   
    if(BMI < 20)
        cout << "You are thin";
    else
        if(BMI >= 20 && BMI <= 30)
        cout << "You are healthy";
    else
        if(BMI > 30)
        cout << "You are fat";
    
    }

