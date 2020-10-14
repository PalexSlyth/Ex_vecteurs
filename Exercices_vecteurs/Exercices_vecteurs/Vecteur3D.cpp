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
/*bool Vecteur3D::coincide(Vecteur3D& vect)
{
	if ((vect.m_fltX == m_fltX) && (vect.m_fltY == m_fltY) && (vect.m_fltZ == m_fltZ))
		return true;
	else
		return false;
}*/

//Q71, a
/*Vecteur3D Vecteur3D::normax(Vecteur3D vect)
{
	float vect1 = m_fltX * m_fltX + m_fltY * m_fltY + m_fltZ * m_fltZ;
	float vect2 = vect.m_fltX * vect.m_fltX + vect.m_fltY * vect.m_fltY + vect.m_fltZ * vect.m_fltZ;
	if (vect1 > vect2)
		return *this;
	else
		return vect;
}*/

//Q71, b
/*Vecteur3D& Vecteur3D::normax(Vecteur3D & vect)
{
	float vect1 = m_fltX * m_fltX + m_fltY * m_fltY + m_fltZ * m_fltZ;
	float vect2 = vect.m_fltX * vect.m_fltX + vect.m_fltY * vect.m_fltY + vect.m_fltZ * vect.m_fltZ;
	if (vect1 > vect2)
		return *this;
	else
		return vect;
}*/

//Q72 ,c
/*Vecteur3D* Vecteur3D::normax(Vecteur3D* vect)
{
	float vect1 = m_fltX * m_fltX + m_fltY * m_fltY + m_fltZ * m_fltZ;
	float vect2 = vect->m_fltX * vect->m_fltX + vect->m_fltY * vect->m_fltY + vect->m_fltZ * vect->m_fltZ;
	if (vect1 > vect2)
		return this;
	else
		return vect;
}*/

Vecteur3D Vecteur3D::somme(Vecteur3D& vect)
{
	Vecteur3D resultat;
	resultat.m_fltX = m_fltX + vect.m_fltX;
	resultat.m_fltY = m_fltY + vect.m_fltY;
	resultat.m_fltZ = m_fltZ + vect.m_fltZ;

	return resultat;
}

float Vecteur3D::scal(Vecteur3D& vect)
{
	return (vect.m_fltX * m_fltX + vect.m_fltY * m_fltY + vect.m_fltZ * m_fltZ);
}

void Vecteur3D::affiche()
{
	cout << m_fltX << m_fltY << m_fltZ;
}
