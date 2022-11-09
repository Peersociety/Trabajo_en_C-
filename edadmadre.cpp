#include <iostream>
using namespace std;

int main(){
    int hijoedad,madreedad,edad;
    cout<<"Ingrese la Edad de la madre:"<<endl;
    cin>>madreedad;
    cout<<"Ingrese la Edad del hijo:"<<endl;
    cin>>hijoedad;
    edad = madreedad - hijoedad;

    cout<<"La edad de la madre cuando naciste es:"<<edad<<"";

    return 0;
}