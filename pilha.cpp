#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//cria a estrutura de registro - arquivo
struct Pilha{
	int topo;
	int capacidade;
	float *pElemento;
};	

//inicializar (criar a pilha)
void iniciarPilha (struct Pilha *p, int c){
	p->topo = -1;
	p->capacidade = c;
	p->pElemento = (float*) malloc (c * sizeof(float));
}

//verificar estado da pilha CHEIA
int pilhaCheia (struct Pilha *p){
	if (p->topo == p->capacidade -1)
		return 1; //true
	else
		return 0; //false
}

//verificar estado da pilha VAZIA
int pilhaVazia (struct Pilha *p){
	if (p->topo == -1)
		return 1; //true
	else
		return 0; //false
}

//empilhar (inserir)
void empilhar (struct Pilha *p, float emp){
	p->topo ++;
	p->pElemento [p->topo] = emp;
}

//desempilhar (retirar)
int desempilhar (struct Pilha *p, float desemp){
	desemp = p->pElemento [p->topo];
	p->topo --;
		return desemp;
}

//mostrar as opções para trabalhar na pilha
int main(){
	struct Pilha pilha;
	int capa;
	int opcao;
	float valor;
	
	cout << "Digite a capacidade da pilha: ";
	cin >> capa;
	
	iniciarPilha = ( pilha , capa);
	
	while(1){
		cout << "\n 1 - Empilhar (push)";
		cout << "\n 2 - Desempilhar (pop)";
		cout << "\n 3 - Mostrar o topo";
		cout << "\n 4 - sair";
		cout << "\n Digite a opção desejada:";
		 cin >> opcao;
		 
		 switch (opcao){
		 	case 1: if(pilhaCheia(pilha)) == 1;
		 	cout << "PILHA CHEIA!!!";
		 }else{
		 	cout << "VALOR?";
		 	 cin >> valor;
		 	 empilhar (minhapilha, valor);
		 }
	}
	
	return 0;
}






