#include<stdio.h>
#include<stdlib.h>
int main (){
	float a,b,c;
	int obj;
	do{
		printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Divicion\n");
		printf("Elige una opcion: ");
		scanf("%d",&obj);
		printf("Elige el primer operador: ");
		scanf("%f",&a);
		printf("Elige el segundo operador: ");
		scanf("%f",&b);
		switch(obj){
			case 1: c=a+b;
			break;
			case 2: c=a-b;
			break;
			case 3: c=a*b;
			break;
			case 4: while(b==0){
				printf("Error, el segundo operador debe ser mayor a 0\n");
				printf("Introduce el segundo operador: ");
				scanf("%f",&b);
			}c=a/b;
		break;

		default: printf("Error, la opcion que marcaste es invalida. ");
		c=0;

        system("cls");
		}
		if(b>0){
		printf("El resultado es: %.2f\n",c);
		}
		else{
            system("cls");
            printf("Error, la opcion que marcaste es invalida. ");
		}
        }while(c==0);
}
