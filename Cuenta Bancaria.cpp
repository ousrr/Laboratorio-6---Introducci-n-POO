#include <iostream>
#include <string>
#incluide <cmath>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de la clase
class CuentaBancaria {
	//Declaracion de parametros de manera privada
private:
    string nombreTitular;
    int numeroCuenta;
    float saldo;
//Declaracion de parametros de manera publica
public:
	//Constructor con parametros
    CuentaBancaria(string nomT, int numC, float sal) : nombreTitular(nomT), numeroCuenta(numC), saldo(sal) {}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//void para agregar al saldo la cantidad depositada
    void depositar(float cant) {
        saldo += cant;
        cout << "Deposito exitoso. Nuevo saldo: " << saldo << endl;
    }
//void que resta al saldo la cantidad a retirar
    void retirar(float cant) {
        if (cant <= saldo) {
            saldo -= cant;
            cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
        } else {
            cerr << "Error: Fondos insuficientes" << endl;
        }
    }
    
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//void que consulta el saldo despues de realizar los movimientos
    void consultarSaldo() {
        cout << "Saldo disponible: " << saldo << endl;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//declaracion de funcion main 
int main() {
	//Impresion de datos
	cout <<"----------------------Registo de Cuentas Bancarias----------------------"<< endl<< endl;
	cout <<"Nombre del Titular: Juan Batrez"<< endl;
	cout <<"Numero de Cuenta: 4580"<< endl;
    CuentaBancaria cuenta1("Juan Batrez", 4580, 1000.89);
    cuenta1.consultarSaldo();
	cout <<"Cantidad a Depositar: 500"<< endl;
    cuenta1.depositar(500);
	cout <<"Cantidad a Retirar: 200"<< endl;
    cuenta1.retirar(200);
    cuenta1.consultarSaldo();
    
     cout << endl; // Agregar una línea en blanco entre las Cuentas
     
    
    cout <<"Nombre del Titular: Carlos Ortiz"<< endl;
	cout <<"Numero de Cuenta: 6952"<< endl;
    CuentaBancaria cuenta2("Carlos Ortiz", 6952, 5720.55);
    cuenta2.consultarSaldo();
	cout <<"Cantidad a Depositar: 2800"<< endl;
    cuenta2.depositar(2800);
    cout <<"Cantidad a Retirar: 20"<< endl;
    cuenta2.retirar(20);
    cuenta2.consultarSaldo();

    return 0;
}

