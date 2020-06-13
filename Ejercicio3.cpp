#include "iostream"
using namespace std;
bool bisiesto (int);
int main (){
    int aa;
    cout << endl << "ANNO BISIESTO" << endl << endl;
    cout << "Introduzca un anno: ";
    cin >> aa;
    if (bisiesto(aa) == true)   //si la función retorna true quiere decir que es bisiesto
        cout << "El anno es bisiesto";
    else                        //si la función retorna false quiere decir que no es bisiesto
        cout << "El anno no es bisiesto";
    return 0;
}

bool bisiesto (int aa){
    if (aa%400==0)      //Si el año es divisible entre 400 es bisiesto
        return true;
    else if (aa%4==0 && aa%100!=0)  //si el año es divisible entre 4 y no es divisible entre 100 es bisiesto 
        return true;
    else                //si no se cumple ninguna condición
        return false;
}