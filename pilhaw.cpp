#include <iostream>
#include <stdlib.h>

using namespace std;

#define TAMANHO 50

typedef struct pilha{
	int topo;
	int elementos[TAMANHO];
}pilha;

int empty(pilha *p){
	if(p->topo == -1)
		return 1;
	return 0;
}

int size(pilha *p){
	return p->topo+1;
}

int stackpop(pilha *p){
	return p->elementos[p->topo];
}

int pop(pilha *p){
	if(empty(p)){
		cout << "pilha vazia"<< endl;
		exit(1);
	}
	return p->elementos[p->topo--];
}

void push(pilha *p, int e){
	if(p->topo == TAMANHO-1){
		cout << "pilha cheia" << endl;
		exit(1);
	}
	p->elementos[++(p->topo)] = e;
}

int main(){
	pilha a;
	a.topo = -1;

	push(&a, 3);
	push(&a, 5);
	push(&a, 21);

	cout << "tamanho da pilha "<< size(&a) << endl;
	cout << "topo da pilha " << stackpop(&a) << endl;

}
