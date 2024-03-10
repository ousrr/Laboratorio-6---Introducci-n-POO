#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
// Declaracion de clase
class Pelicula {
//Declaracion de parametros de manera privada
private:
    string titulo, director, genero;
	  int anio;
	  float duracion;

public:
    // Constructor con par�metros
    Pelicula(string tit, string dire, string gen, int aniop, float dur): titulo (tit), director (dire), genero (gen), anio (aniop), duracion (dur){}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
    // M�todo para mostrar informaci�n de la pelicula
    void informacion() {
        
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Genero: " << genero << endl;
        cout << "Anio de lanzamiento: " << anio << endl;
        cout << "Duracion: " << duracion << endl;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Declaracion de funcion main
int main() {
	
	//Impresion de datos
	cout << "--------------------- Catalogo de Peliculas ---------------------" << endl;
    // Crear objetos de la clase pelicula utilizando el constructor con par�metros
    Pelicula Pelicula1("Guerra de novias", "Gary Winick", "Comedia Romantica", 2009, 1.29);
    Pelicula Pelicula2("La propuesta", "Anne Fletcher", "Comedia Romantica", 2009, 1.48);

    // Llamar al m�todo informacion() para mostrar los detalles de las peliculas
    Pelicula1.informacion();
    cout << endl; // Agregar una l�nea en blanco entre las peliculas
    Pelicula2.informacion();

    return 0;
}
