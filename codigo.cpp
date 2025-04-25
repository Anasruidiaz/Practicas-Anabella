#include <stdio.h>
int main (){
	char nombre;
	int edad;
	float altura;
	
	printf("Ingrese su nombre: ");
	scanf ("%c", &nombre);
	
	printf("Ingrese su edad; \n");
	scanf("%d", &edad);
	
	printf("\nIngrese su altura en metros: \n" );
	scanf("%f", &altura);
	
	printf("Hola %c. Tienes %d años y mides %f.", nombre, edad, altura);
	
	return 0;
}
