#include <iostream>
using namespace std;
class contribucion {
	protected : string nombres,apellidos,direccion,fecha_nacimiento;
				int telefono;
	contribucion(){
	}
	contribucion(string nom, string ape, string dic, int tel, string fn){
		nombres = nom;
		apellidos = ape;
		direccion = dic;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	void crear();
	void leer();
	void actualiza();
	void borrar();
	
	
};
