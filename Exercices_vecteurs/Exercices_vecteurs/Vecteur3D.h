#ifndef VECTEUR3D_H
#define VECTEUR3D_h
#pragma once

class Vecteur3D
{
	float m_fltX, m_fltY, m_fltZ;


public:
	//Q69, a.
	//Vecteur3D();

	/*Vecteur3D(float m_fltX, float m_fltY, float m_fltZ);
	void affichevecteur();*/

	//Q69, b.
	//Vecteur3D(float = 0, float = 0, float = 0);

	//Q69, c.
	/*inline Vecteur3D(float X = 0, float Y = 0, float Z = 0)
	{
		m_fltX = X;
		m_fltY = Y;
		m_fltZ = Z;
	}*/

	//Q70, a.
	/*inline Vecteur3D(float X = 0, float Y = 0, float Z = 0)
	{
		m_fltX = X;
		m_fltY = Y;
		m_fltZ = Z;
	}

	bool coincide(Vecteur3D &);*/

	Vecteur3D(float X = 0, float Y = 0, float Z = 0)
	{
		m_fltX = X;
		m_fltY = Y;
		m_fltZ = Z;
	}
	//Q71, a
	//Vecteur3D& normax(Vecteur3D& vect);

	//Q71, b
	//Vecteur3D& normax(Vecteur3D& vect);

	//Q71,c
	//Vecteur3D* normax(Vecteur3D* vect);


	//Q72
	Vecteur3D somme(Vecteur3D&);
	float scal(Vecteur3D&);
	void affiche();

};
#endif // !VECTEUR3D_H