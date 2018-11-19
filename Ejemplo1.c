#include <stdio.h>
int MAXSIZE = 8;
int pila[8];
int top = -1;

int estaVacia();
int estaLlena();
int contar();
int pop();
int push();

int estaVacia(){
	if(top == -1)
		return 1;
	else
		return 0;
}

int estaLlena(){
	if(top == MAXSIZE)
		return 1;
	else
		return 0;
}

int contar(){
	return pila[top];
}

int pop(){
	int datos;
	if(!estaVacia()){
		datos = pila[top];
		top = top - 1;
		return datos;
	} else{
		printf("\tLa pilaa esta vacía\n\n");
	}
}

int push (int datos){
	if(!estaLlena()){
		top = top +1;
		pila[top] = datos;
	} else {
		printf("\tLa pila esta llena\n");
	}
}
	
int main(){
	//Hacemos push a la pila
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);
	
	printf("Elementos dentro de la pila: ½d\n", contar());
	printf("Elementos: \n");
	
	//Imprimir los elementos
	while(!estaVacia()){
		int datos = pop();
		printf("%d\n", datos);
	}
	
	printf("Pila llena: %s\n", estaLlena()?"true":"false");
	printf("Pila vacia: %s\n", estaVacia()?"true":"false");
	
	return 0;
}

