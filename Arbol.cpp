#include "Arbol.h"

Arbol::Arbol()
{

}

void Arbol::dibujar()
{

	glRotatef(-45, 0.0f, 1.0f, 0.0f);
	// Tronco
	glPushMatrix();
		glTranslatef(0.0f, 1.0f, 0.0f);
		glRotatef(90, 1.0f, 0.0f, 0.0f);
		glutSolidCylinder(0.15f, 1.0f, 40, 40);
		// Hojas del tronco
		glutSolidSphere(0.25f, 20, 20);

	glPopMatrix();

	// Ramas

	glPushMatrix();
		glTranslatef(0.25f, 0.75f, 0.0f);
		glRotatef(90, 1.0f, -0.5f, 0.0f);
		glutSolidCylinder(0.04f, 0.5f, 40, 40);
		// Hojas
		glutSolidSphere(0.14f, 20, 20);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-0.3f, 0.95f, 0.0f);
		glRotatef(90, 1.0f, 0.4f, 0.0f);
		glutSolidCylinder(0.04f, 0.6f, 40, 40);
		// Hojas
		glutSolidSphere(0.14f, 20, 20);
	glPopMatrix();

}

Arbol::~Arbol()
{

}