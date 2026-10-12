#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float P, R, I;
    int T;

    cout<<"P = ";
    cin>>P;
    cout<<"T = ";
    cin>>T;
    cout<<"R = ";
    cin>>R;

    I=(P*R*T)/100;

    cout<<"Wynik rzeczywisty: "<<fixed<<setprecision(2)<<I<<endl;
    cout<<"Wynik calkowity: "<< static_cast<int>(I);

    return 0;
}