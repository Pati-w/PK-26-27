<<<<<<< HEAD
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

=======
#include <iostream>

using namespace std;

int main() {

    /*
    cout służy do wyświetlania danych na standardowym wyjściu,
    czyli w naszym przypadku w terminalu.

    Tekst umieszczamy w cudzysłowie.

    endl kończy bieżącą linię i przechodzi do następnej.
    */
    cout << "Hello world!" << endl;

    /*
    return 0 oznacza poprawne zakończenie programu.

    Wykonywanie programu rozpoczyna się od funkcji main()
    i kończy po wykonaniu jej instrukcji.
    */
>>>>>>> 4e42700cff7bd6a650c80dcace81adcc3108add2
    return 0;
}