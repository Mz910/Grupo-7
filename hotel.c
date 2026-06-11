#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_HOSPEDES 100
#define MAX_QUARTOS 100
#define MAX_RESERVAS 100

///// Estrutura do Hóspede /////
struct Hospede {
    int id;
    char nome[100];
    char telefone[20];
};

///// Estrutura do Quarto /////
struct Quarto {
    int numero;
    char tipo[30];
    float preco;
    int ocupado; // 0 = Livre, 1 = Ocupado
};

///// Estrutura de Reserva /////
struct Reserva {
   int codigoReserva;
   int codigoHospede;
   int numeroQuarto;
   int dias;
   int checkin;
   int ativa;
};

///// Vetores /////

Hospedes[MAX_HOSPEDES];
Quartos[MAX_QUARTOS];
Reservas[MAX_RESERVAS];

int totalHospedes = 0;
int totalQuartos = 0;
int totalReservas = 0;

///// Módulo de Hóspedes /////

void cadastrashospede() {
    if(totalHospedes >= MAX_HOSPEDES){
        printf("Limite atingido!\n");
        return;
    }

    printf("\nCodigo: ");
    scanf("%d", &hospedes[totalHospedes].codigo);

    getchar();

    printf("Nome: ");
    fgets(hospedes[totalHospedes].nome,100,stdin);

    printf("CPF: ");
    fgets(hospedes[totalHospedes].cpf,20,stdin);

    hospedes[totalHospedes].ativo = 1;

    totalHospedes++;

    printf("Hospede Cadastrado!\n");

}

void listarHospedes() {
    int i;

    printf("\n ===== HOSPEDES =====\m");
