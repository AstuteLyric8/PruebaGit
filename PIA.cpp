#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<windows.h>

int op, i, j, S, n1, m1, n2, m2,f1,f2;
int MA[100][100]; 
int MB[100][100];
int MC[100][100];
int MF[100][100];
float A,B,R;
void marco(); void menu(); void op1(); void op2(); void op3(); void op4(); void op5(); void op6(); 
void op7(); void op8(); void op9(); void op10(); void op11(); void op12(); void op13(); void op14();
void op15(); void op16();
main(){
	do
	{
	menu();
	switch(op )
	{
		case 1: op1(); break;
		case 2: op2(); break;
		case 3: op3(); break;
		case 4: op4(); break;
		case 5: op5(); break;
		case 6: op6(); break;
		case 7: op7(); break;
		case 8: op8(); break;
		case 9: op9(); break;
		case 10: op10(); break;
		case 11: op11(); break;
		case 12: op12(); break;
		case 13: op13(); break;
		case 14: op14(); break;
		case 15: op15(); break;
		case 16: op16(); break;
	
	}
}
	while(op!=16);
}


void menu()
{
	
	printf("		MENU DE OPERACIONES			\n");	
	printf("//////////////////////////////////////////////////\n");
	printf("	1.- Suma de numeros \n");
	printf("	2.- Resta de numeros \n");	
	printf("	3.- Multiplicacion de numeros \n");
	printf("	4.- Divsion de numeros \n");
	printf("	5.- Elevar un numero a una potencia \n");
	printf("	6.- Raiz de un numero\n");
	printf("	7.- Generar una Matriz A\n");
	printf("	8.- Mostrar la Matriz A\n");
	printf("	9.- Generar una Matriz B\n");
	printf("	10.- Mostrar la Matriz B\n");
	printf("	11.- Sumar las matrices \n");
	printf("	12.- Resta de las matrices\n");
	printf("	13.- Alternar filas de Matriz A\n");
	printf("	14.- Alternar filas de Matriz B\n");
	printf("	15.- PRUEBA EN GIT\n");
	printf("	16.- Salir   \n");
	printf("//////////////////////////////////////////////////\n\n\n");
	printf("Indique una opcion de la lista: \n" ); scanf("%d",&op);
	system("cls");
}

void op1(){
	printf("Suma \n");
	printf("Ingrese el primer valor= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el segundo valor= ");scanf("%f",&B);
	printf("\n");
	R = A + B;
	printf("%.0f + %.0f = %.0f \n",A,B,R);

	system("pause");
	system("cls");
}

void op2(){
	printf("Resta \n");
	printf("Ingrese el primer valor= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el segundo valor= ");scanf("%f",&B);
	printf("\n");
	R = A - B;
	printf("%.0f - %.0f = %.0f \n",A,B,R);

	system("pause");
	system("cls");
}

void op3(){
	printf("Multiplicacion \n");
	printf("Ingrese el primer valor= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el segundo valor= ");scanf("%f",&B);
	printf("\n");
	R = A * B;
	printf("%.0f * %.0f = %.0f \n",A,B,R);

	system("pause");
	system("cls");
}

void op4(){
	printf("Division \n");
	printf("Ingrese el primer valor= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el segundo valor= ");scanf("%f",&B);
	printf("\n");
	R = A / B;
	printf("%.0f / %.0f = %.0f \n",A,B,R);

	system("pause");
	system("cls");
}

void op5(){
	printf("Potencia \n");
	printf("Ingrese el valor a elevar= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el valor de la potencia= ");scanf("%f",&B);
	printf("\n");
	R = pow(A, B);
	printf("%.0f a %.0f potencia = %.0f \n",A,B,R);
	
system("pause");
	system("cls");
}

void op6(){
	printf("Raiz \n");
	printf("Ingrese el valor a aplicar raiz= ");scanf("%f",&A);
	printf("\n");
	printf("Ingrese el valor de la raiz= ");scanf("%f",&B);
	printf("\n");
	R = pow(A, 1.0/B);
	printf("raiz %.0f de %.0f  = %.0f \n",B,A,R);
	
	system("pause");
	system("cls");
}

void op7(){
	printf("Inserte el ancho de la matriz A= ");scanf("%d",&n1);
	printf("\n");
	printf("Inserte la longitud de la matriz A= ");scanf("%d",&m1);
	printf("\n");
	srand(time(NULL));
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		MA[i][j] =rand()%99+1;
		printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op8(){
	printf("Mostrando la matriz A= \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");	
}

void op9(){
	printf("Inserte el ancho de la matriz B= ");scanf("%d",&n2);
	printf("\n");
	printf("Inserte la longitud de la matriz B= ");scanf("%d",&m2);
	printf("\n");
	srand(time(NULL));
	for(i=1;i<=n2;i++){
		printf("\n");
		for(j=1;j<=m2;j++){
		MB[i][j] =rand()%99+1;
		printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op10(){
	printf("Mostrando la matriz B= \n");
	for(i=1;i<=n2;i++){
		printf("\n");
		for(j=1;j<=m2;j++){
		printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");	
}

void op11(){
	//SUMA DE MATRICES A+B = C
	printf("MATRIZ A + MATRIZ B = MATRIZ C\n");
	printf("\n MATRIZ A  \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	printf("\n MATRIZ B \n");
	for(i=1;i<=n2;i++){
		printf("\n");
		for(j=1;j<=m2;j++){
		printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	printf("\n MATRIZ C \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		MC[i][j]=MA[i][j]+MB[i][j];
		printf("  %d ",MC[i][j]);		
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op12(){
	//RESTA DE MATRICES A-B = C
	printf("MATRIZ A - MATRIZ B = MATRIZ C\n");
	printf("\n MATRIZ A  \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	printf("\n MATRIZ B \n");
	for(i=1;i<=n2;i++){
		printf("\n");
		for(j=1;j<=m2;j++){
		printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	printf("\n MATRIZ C \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		MC[i][j]=MA[i][j]-MB[i][j];
		printf("  %d ",MC[i][j]);		
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op13(){
	//ALTERNAR FILAS DE MATRIZ A
	printf("\n MATRIZ A  \n");
	for(i=1;i<=n1;i++){
		printf("\n");
		for(j=1;j<=m1;j++){
		printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	printf("Inserte fila inicial: ");
	scanf("%d",&f1);printf("\n");
	printf("Inserte fila objetivo: ");
	scanf("%d",&f2);printf("\n");

	for(j=1;j<=m1;j++){
			MF[2][j]=MA[f2][j];
			MF[1][j]=MA[f1][j];
			MA[f2][j]=MF[1][j];	
			MA[f1][j]=MF[2][j];
		
		}
	
	printf("\n MATRIZ A Actualizada \n");	

	for(i=1;i<=n1;i++){
		printf("\n");
		
		for(j=1;j<=m1;j++){
		
			printf("  %d ",MA[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op14(){
	//ALTERNAR FILAS DE MATRIZ B
	printf("\n MATRIZ B  \n");
	for(i=1;i<=n2;i++){
		printf("\n");
		for(j=1;j<=m2;j++){
		printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	printf("Inserte fila inicial: ");
	scanf("%d",&f1);printf("\n");
	printf("Inserte fila objetivo: ");
	scanf("%d",&f2);printf("\n");

	for(j=1;j<=m2;j++){
			MF[2][j]=MB[f2][j];
			MF[1][j]=MB[f1][j];
			MB[f2][j]=MF[1][j];	
			MB[f1][j]=MF[2][j];
		
		}
		
	printf("\n MATRIZ B Actualizada  \n");	
	for(i=1;i<=n2;i++){
		printf("\n");
		
		for(j=1;j<=m2;j++){
		
			printf("  %d ",MB[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	system("cls");
}

void op15(){
	printf("PRUEBA \n");
	printf("ESTO ES UNA PRUEBA \n");

	system("pause");
	system("cls");
	}
	
void op16(){

	printf("Salir");
	printf("Quiere salir?= y=1/n=0\n");
	scanf("%d",&S);
	switch(S){
		case 1: 
			system("cls");
			exit(0);
			
		
		case 0:
			system("cls");
			menu();
		
			
		}
	}


