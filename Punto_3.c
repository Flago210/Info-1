#include <stdio.h>

int main(int argc, char *argv[]) {
	float NOTA;
	//Nombre: Santiago Retamozo
	//Legajo: 98417
	//pedir la nota al usuario
	printf ("Ingrese su calificacion (0 a 100): ");
	scanf ("%f", &NOTA);
	//muestra de calificacion
	if (NOTA >=90) {
		printf ("Calificacion: A");}
	else if (NOTA >=80) {
		printf ("Calificacion: B");}
	else if (NOTA >= 70) {
		printf ("Calificacion: C");}
	else if (NOTA >= 60) {
		printf ("Calificacion: D");}
	else{ 
		printf ("Calificacion: F");}
	return 0;
}

