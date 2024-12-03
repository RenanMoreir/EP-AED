#include <string.h>

typedef char Elemento;
typedef int Boolean;

typedef struct linha {
    int posicao;
    struct linha *prox;
} lista;

typedef struct _no_arvore_ {
	Elemento valor;
    lista * linha;
	struct _no_arvore_ * esq;
	struct _no_arvore_ * dir;

} No;


typedef struct {

	No * raiz;

} Arvore;

typedef struct {

	Elemento * a;
	int livre;
	int capacidade;

} ListaLinhas;