/*
 * Cabecera objeto DiscoDuro 
 */

#ifndef Citas_H
#define Citas_H

#include <string>
using std::string;


/*
 * A continuación se define la clase computador
 */
class Citas{
	
	private:
		string dia;
		string descripcionC;
		
		
	public:
		Citas(string diaIn, string descripcionCIn);
		~Citas();
		
		string getDia();
		string getDescripcion();
		
		
		void setDia(string diaIn);
		void setDescripcion(string descripcionCIn);		

	
};


#endif

