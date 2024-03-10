#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de clase
class Estudiante {
	// Declaracion de parametros de manera privada
private:
    string nombre, apellido, curso;
	  int edad, carnet;

public:
    // Constructor con par�metros
    Estudiante(string nom, string apell, string curs, int ed, int carnee): nombre (nom), apellido (apell), curso (curs), edad (ed), carnet(carnee){}

    // M�todo para mostrar informaci�n del estudiante
    void informacion() {
        
        cout << "Nombre del Estudiante: " << nombre << endl;
        cout << "Apellido del Estudiante: " << apellido << endl;
        cout << "Curso al que el Estudiente esta asignado: " << curso << endl;
        cout << "Edad del Estudiante: " << edad << endl;
        cout << "Numero de carnet de Estudiante: " << carnet << endl;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//declaracion de funcion main
int main() {
	//Impresion de parametros
	cout << "--------------------- Registro de Estudiantes ---------------------" << endl<< endl;
    // Crear objetos de la clase Libro utilizando el constructor con par�metros
    Estudiante Estudiante1("Edward", "Ramirez","Programacion I", 20, 9020);
    Estudiante Estudiante2("Heather", "Ruano", "Calculo I", 18, 1802);

    // Llamar al m�todo informacion() para mostrar los detalles de los libros
    Estudiante1.informacion();
    cout << endl; // Agregar una l�nea en blanco entre los estudiantes
    Estudiante2.informacion();

    return 0;
}
