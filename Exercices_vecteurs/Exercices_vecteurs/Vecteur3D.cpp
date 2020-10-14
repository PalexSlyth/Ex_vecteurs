#include "Vecteur3D.h"
#include <iostream>
using namespace std;


/*Vecteur3D::Vecteur3D()
{
	m_fltX = 0;
	m_fltY = 0;
	m_fltZ = 0;
}*/

/*Vecteur3D::Vecteur3D(float X, float Y, float Z)
{
	m_fltX = X;
	m_fltY = Y;
	m_fltZ = Z;
}

/*void Vecteur3D::affichevecteur()
{
	cout << this->m_fltX << this->m_fltY << this->m_fltZ << endl;
}*/


//Q70, a
/*bool Vecteur3D::coincide(Vecteur3D vect)
{
	if ((vect.m_fltX == m_fltX) && (vect.m_fltY == m_fltY) && (vect.m_fltZ == m_fltZ))
		return true;
	else
		return false;
}*/

//Q70, b
/*bool Vecteur3D::coincide(Vecteur3D * vect)
{
	if (vect->m_fltX == this->m_fltX) && (vect->m_fltY == this->m_fltY) && (vect->m_fltZ == this->m_fltZ))
		return true;
	else
		return false;
}*/

//Q70, c
bool Vecteur3D::coincide(Vecteur3D& vect)
{
	if ((vect.m_fltX == m_fltX) && (vect.m_fltY == m_fltY) && (vect.m_fltZ == m_fltZ))
		return true;
	else
		return false;
}

