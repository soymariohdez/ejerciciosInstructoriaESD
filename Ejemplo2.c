#include <stdio.h>
#include <stdlib.h>

struct nodo {
	int info;
	struct nodo *sig;
};

//variable global que apunta al primer nodo de la lista
struct nodo *raiz=NULL;

void insertar(int x){
	struct nodo *nuevo;
	nuevo = malloc(sizeof(struct nodo));
	nuevo->info = x;
	if (raiz = NULL){
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
	
	
	void imprimir(){
		struct nodo *reco=raiz;
		printf("Lista completa.\n");
		while (reco!=NULL){
			printf("%i ", reco->info);
			reco=reco->sig;
		}
		print("\n");
	}
	
int extraer(){
	if (raiz = NULL){
		int informacion = raiz->info;
		struct nodo *bor = raiz;
		raiz = raiz->sig;
		free(bor);
		return informacion;
	}
	else{
		return -1;
	}
}

void liberar(){
	struct nodo *reco = raiz;
	struct nodo *bor;
	while (reco != NULL){
		bor = reco;
		reco = reco->sig;
		free(bor);
	}
}

int main(){
	insertar(10);
	insertar(40);
	insertar(3);
	imprimir();
	printf("Extraemos de la pila:%i\n", extraer());
	imprimir();
	liberar();
	return 0;
}
