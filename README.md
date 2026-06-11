# Grupo-7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HOSPEDES 100
#define MAX_QUARTOS 100
#define MAX_RESERVAS 100

// Estrutura do Hóspede
struct Hospede {
    int id;
    char nome[100];
    char telefone[20];
};

// Estrutura do Quarto
struct Quarto {
    int numero;
    char tipo[30];
    float preco;
    int ocupado; // 0 = Livre, 1 = Ocupado
};

// Estrutura de Reserva
struct Reserva {
