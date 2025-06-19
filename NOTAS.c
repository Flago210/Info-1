#include <stdio.h>

int main(int argc, char *argv[]) {
	int ALM;
	float nota, prom;
	//Variables para operar
	int i=0;
	float M=0, m=100, suma=0;
	//Cantidad de alumnos
	do {
		printf ("Ingrese la cantidad de alumnos: ");
		scanf ("%d", &ALM);
		if(ALM < 0)
			printf ("Ingrese un valor positivo unicamente");
	} while(ALM <= 0);
	for (i=0; i<ALM; i++){
		do {
			printf ("Ingrese la calificacion del estudiante%d: ", i + 1);
			scanf ("%f", &nota);
			if (nota < 0 || nota > 100)
				printf ("Error: Ingreso una calificacion no valida");
		} while  (nota < 0 || nota > 100);
	//Sacar el mayor y menor
	if (nota > M)
		M = nota;
	if (nota < m)
		m = nota;
	//Conseguir el promedio
	suma += nota;
	}
	prom = suma / ALM;
	printf ("\n El promedio obtenido es de: %.2f\n", prom);
	printf ("La calficacion mas alta es: %2.f\n", M);
	printf ("La calificacion mas baja es: %2.f\n", m);
	return 0;
	
	}
	
	
	
