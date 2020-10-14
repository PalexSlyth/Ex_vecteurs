#include "Vecteur3D.h"
#include <iostream>
using namespace std;


int main()
{
	Vecteur3D vect;
	//vect.affichevecteur();

	Vecteur3D v1(1, 2, 3), v2(3, 0, 2), w;
	cout << "v1 ="; v1.affiche();
	cout << "v2 ="; v2.affiche();
	cout << "w ="; w.affiche();
	w = v1.somme(v2);
	cout << "w = ";w.affiche();
	cout << "V1.V2" << v1.scal(v2) << endl;


	return 0;
}