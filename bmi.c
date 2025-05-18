#include <stdio.h>
//Nombre y Apellido:Santiago Retamozo
//Legajo: 98417
int main(int argc, char *argv[]) {
	float PESO, ALTURA, IMC;
	//PEDIR DATOS AL USUARIO
	printf ("Ingrese el peso en Kilogramos: ");
	scanf ("%f", &PESO);
	printf ("Ingrese la altura en Metros: ");
	scanf ("%f", &ALTURA);
	//REALIZAR EL CALCULO
	IMC = PESO / (ALTURA * ALTURA);
	//MOSTRAR EL RESULTADO
	printf ("\nSu indice de masa corporal es de: %.2f\n", IMC);
	//EVALUAR IMC
	if (IMC < 18.5) {
		printf("Bajo peso\n");
	} else if (IMC < 25.0) {
		printf("Normal\n");
	} else if (IMC < 30.0) {
		printf("Sobrepeso\n");
	} else {
		printf("Obesidad\n");
	}
	return 0;
}

