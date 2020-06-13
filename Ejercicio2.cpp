#include "iostream"
using namespace std;
int adivinar (int, int);
int main(void){
    cout << endl << "EL NUMERO MAGICO" << endl << endl;
    int n;
    char car;
    int respuesta=88;   //numero respuesta elegido arbitrariamente
    cout << "Adivine el numero que se encuentra entre 1 y 100" << endl << "Tiene 5 intentos" << endl;
    do{                 //se utiliza do para por lo menos ejecutar una vez el programa
        adivinar (n, respuesta);
        cout << "Si desea continuar jugando introduzca un caracter, de lo contrario 'ctrl+z'";
    }
    while (cin>>car);   //mientras que cin reconozca la lectura, el loop se repetirá
    return 0;
}

int adivinar (int n, int respuesta){
    for (int i=4;i>=0;i--){     
        //i cuenta desde 4 hacia 0, dado que se indica los intentos resatnes después de haber hecho un intento
        cout << "Introduzca un numero: ";
        cin >> n;
        if (n<1||n>100){        //se checkea que no se haya metido un número muy grande o pequeño
            cout << "El numero ingresado se sale del parametro";
            return 0;           //se termina la función de ser el caso
        }
        if (n>respuesta)        //se dará una pista si el número es mayor
            cout << "Equivocado. Pista: el numero ingresado es mayor que el numero secreto" << endl;
        else if (n<respuesta)   //se dará una pista si el número es menor
            cout << "Equivocado. Pista: el numero ingresado es menor que el numero secreto" << endl;
        else {                  //si se adivina el número se le notifica al usuario
            cout << "Correcto. Usted ha adivinado el numero secreto, era " << respuesta << endl;
            return 0;           //de ser el caso, se acaba prematuramente 
        }
        cout << "Le quedan " << i << " intentos" << endl;   //se lee cuantas iteraciones quedan antes de acabar
    }
}