#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Declaracion de clase
class Libro {
	//Declaracion de parametros de manera privada
private:
    string titulo, autor, genero;
	  int anio, numpag;

public:
    // Constructor con parámetros
    Libro(string tit, string aut, string gen, int aniop, int num): titulo (tit), autor (aut), genero (gen), anio (aniop), numpag (num){}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
    // Método para mostrar información del libro
    void informacion() {
        
        cout << "Libro: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Genero: " << genero << endl;
        cout << "Anio de publicacion: " << anio << endl;
        cout << "Numero de paginas: " << numpag << endl;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Declaracion de int main
int main() {
	
	//Impresion de datos
	cout << "--------------------- Biblioteca de infantil ---------------------" << endl<< endl;
    // Crear objetos de la clase Libro utilizando el constructor con parámetros
    Libro Libro1("Charlie y la fabrica de chocolate", "Roald Dahl", "Novela infantil", 1964, 160);
    Libro Libro2("Matilda", "Roald Dahl", "Novela infantil", 1988, 228);

    // Llamar al método informacion() para mostrar los detalles de los libros
    Libro1.informacion();
    cout << endl; // Agregar una línea en blanco entre los libros
    Libro2.informacion();

    return 0;
}

