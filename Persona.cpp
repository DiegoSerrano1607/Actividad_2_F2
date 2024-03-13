#include <iostream>
using namespace std;
class Persona{
	//atributos
	protected : string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
	protected : 
			Persona (){
			}
			Persona(string nom, string ape, string dir, string fechaN, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fechaN;
				telefono = tel;
			}
	//metodos
	//set 
	void setnombres(string nom){nombres = nom;}
	void setapellidos(string ape){apellidos = ape;}
	void setdireccion(string dir){direccion = dir;}
	void setfecha_nacimiento(string fechaN){fecha_nacimiento = fechaN;}
	void settelefono(int tel){telefono = tel;} 
	//get
	string getnombres(){return nombres;}
	string getapellidos(){return apellidos;}
	string getdireccion(){return direccion;}
	string getfecha_nacimiento(){return fecha_nacimiento;}
	int gettelefono(){return telefono;}
	//CRUD
	void mostrar(){
		cout<<"SE HA INGRESADO AL METODO"<<endl;
	}	
};
