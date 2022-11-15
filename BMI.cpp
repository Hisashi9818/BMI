#include <bits/stdc++.h>
using namespace std;
int w;
double h,BMI;
main() {
   cin>>w>>h;
   BMI= w/(h*h);
   while (true)
cout<<setprecision(1)<<fixed<<round(BMI*10)/10;
cout<<endl;

     if(BMI < 20){
        cout << "Nguoi gay";}
    else
        if(BMI >= 20 && BMI <= 30){
        cout << "Nguoi li tuong";}
    else
        if(BMI > 30){
        cout << "Nguoi beo";}

}
