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
	//TABLA DE REFERENCIA
	printf ("\n	 Indice | Condicion");
	printf("\n	  <18.5 | Bajo peso\n");
	printf("    18.5 a 24.9 | Normal\n");
	printf("    25.0 a 29.9 | Sobrepeso\n");
	printf("	   >=30 | Obesidad\n");
	
	return 0;
}

