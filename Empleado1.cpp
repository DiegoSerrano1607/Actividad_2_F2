#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : public Persona {

private:
    string codigo_empleado;
    string puesto;

public:
    Empleado() {}

    Empleado(string nom, string ape, string dir, string fechaN, int tel, string codEmp, string puesto) : Persona(nom, ape, dir, fechaN, tel) {
        codigo_empleado = codEmp;
        this->puesto = puesto;
    }

    void setCodigo_empleado(string n) { codigo_empleado = n; }
    void setPuesto(string m) { puesto = m; }
    void setNombres(string nom) { nombres = nom; }
    void setApellidos(string ape) { apellidos = ape; }
    void setDireccion(string dir) { direccion = dir; }
    void setTelefono(int tel) { telefono = tel; }
    void setFecha_nacimiento(string fechaN) { fecha_nacimiento = fechaN; }

    string getCodigo_empleado() { return codigo_empleado; }
    string getPuesto() { return puesto; }
    string getNombres() { return nombres; }
    string getApellidos() { return apellidos; }
    string getDireccion() { return direccion; }
    string getFecha_nacimiento() { return fecha_nacimiento; }
    int getTelefono() { return telefono; }

    void mostrar() {
        cout << "      " << endl;
        cout << nit << "," << nombres << "," << apellidos << "," << direccion << "," << telefono << endl;
    }
};
