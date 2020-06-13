#include "iostream"
using namespace std;
float salario (float, float, float, float, float, char);
int main (void){
    cout << endl << "CALCULO DE SALARIOS" << endl << endl;
    float horasN, horasE, SS, AFP, renta;
        char car;
    horasN=1.75;    //valor de las horas regulares
    horasE=2.5;     //valor de las horas extra
    SS=0.04;        //porcentaje de descuento por seguro social
    AFP=0.0625;     //porcentaje de descuento por AFP
    renta=0.1;      //porcentaje de descuento por la renta
    cout << endl << "Digite un caracter para calcular el salario o 'ctrl+z' para finalizar: ";
    while (cin>>car){       //mientras que cin reconozca la lectura, el loop se repetirá
        salario(horasN, horasE, SS, AFP, renta, car);
        cout << endl << "Digite un caracter para calcular el salario o 'ctrl+z' para finalizar: ";
    }
    return 0;
}

float salario(float horasN, float horasE, float SS, float AFP, float renta, char car){
    int horasNT, horasET;
    float salariot, salarior;   //parámetros creados solo para esta función que almacenarán los salarios totales y reales
    cout << "Digite las horas normales trabajadas en el mes: ";
    cin >> horasNT;     
    cout << "Digite las horas extra trabajadas en el mes: ";
    cin >> horasET;
    salariot=horasNT*horasN+horasET*horasE;     //cálculo del salario total
    cout << "El salario total del empleado es de : $" << salariot << endl;
    salarior=salariot;
    salarior-=salariot*SS;
    salarior-=salariot*AFP;
    if (salariot>500)       //se verifica primero si el empleado gana más de $500 antes de descontar la renta
        salarior-=salariot*renta;               //cálculo del salario real
    cout << "El salario real del empleado es de : $" << salarior << endl;    
}