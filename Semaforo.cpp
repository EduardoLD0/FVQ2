#include "Semaforo.h"

Semaforo::Semaforo()
{

}

void Semaforo::dibujar()
{
	glRotatef(-45, 0.0f, 1.0f, 0.0f);
	// Poste semaforo
	glPushMatrix();
		glTranslatef(0.0f, 1.0f, 0.0f);
		glRotatef(90, 1.0f, 0.0f, 0.0f);
		glutSolidCylinder(0.1f, 1.0f, 4, 4);
	glPopMatrix();

	// Cabeza semaforo
	glPushMatrix();
		glTranslatef(0.0f, 1.5f, 0.0f);
		glRotatef(90, 1.0f, 0.0f, 0.0f);
		glutSolidCylinder(0.2f, 0.5f, 4, 4);
	glPopMatrix();

	// Luz roja
	glPushMatrix();
		glTranslatef(0.175f, 1.35f, 0.175f);
		glRotatef(45, 0.0f, 1.0f, 0.0f);
		glutSolidCylinder(0.05f, 0.05f, 10, 10);
	
	// Luz amarilla

		glTranslatef(0.0f, -0.12f, 0.0f);
		glutSolidCylinder(0.05f, 0.05f, 10, 10);

	// Luz verde

		glTranslatef(0.0f, -0.12f, 0.0f);
		glutSolidCylinder(0.05f, 0.05f, 10, 10);
	glPopMatrix();
}

Semaforo::~Semaforo()
{

}