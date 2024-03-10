#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de clases
class Calculadora {
	//Declaracion de parametros de manera privada
private:
    int numero1, numero2;
 //Declaracion de parametros de manera publica para realizar las operaciones asignadas con los parametros privados 
public:
	//Constructor y sus Parametros declarados
    Calculadora(int num1, int num2) : numero1(num1), numero2(num2) {}
    
//Declaracion del procedimiento que realiza la funcion suma
    int suma() {
        return numero1 + numero2;
    }
//Declaracion del procedimiento que realiza la funcion resta
    int resta() {
        return numero1 - numero2;
    }
//Declaracion del procedimiento que realiza la funcion multiplicacion
    int multiplicacion() {
        return numero1 * numero2;
    }
//Declaracion del procedimiento que realiza la funcion division
   	int division() {
   		//condicion que exceptua los casos donde el segundo digito es igual a cero
        if (numero2 != 0)
            return numero1 / numero2;
        else {
        	//Error al dividir por cero
            cerr << "Error: Division por cero" << endl;
            return 0;
        }
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main
int main() {
	//Asignacion de valores a los parametros declarados de manera privada, con los cuales se realizara las operaciones artitmeticas
    Calculadora calculadora(10, 5);
    //Impresion de resultados
    cout << "-------------------Resultados-------------------" << endl;
    cout << "Numeros a operar: 10 - 5" << endl;
    cout << "Suma: " << calculadora.suma() << endl;
    cout << "Resta: " << calculadora.resta() << endl;
    cout << "Multiplicacion: " << calculadora.multiplicacion() << endl;
    cout << "Division: " << calculadora.division() << endl;

    return 0;
}

