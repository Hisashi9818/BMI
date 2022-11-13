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
    double q= w/pow(h,2);
    ;cout<<"------------------"<<endl;
    ;cout<<"Your weight is (kg): "<<w<<endl;
    ;cout<<"Your height is (m) : "<<h<<endl;
     cout<<"------Result-------"<<endl;
;cout<<"BMI="; ;cout<<setprecision(1)<<fixed<<round(q*10)/10<<endl;
    if (q<20){
    cout<<"Skinny person";

}

    if (20<=q<=30){
    cout<<"Ideal person";

}
    if (q>30){
    cout<<"Fat person";

}
    }

