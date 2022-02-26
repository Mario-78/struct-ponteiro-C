#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Conta{
	char Numero[11];
	char Codigo[3];
	float Saldo;
}Conta;

struct Pessoa{
	int Id;
	char Nome[50];
	int Idade;
	float Peso;
	float Altura;
	char CPF[12];
}Pessoa;

struct Pessoa pessoa[100];
struct Conta conta[100];
int op = 0;
int idPesq = 0;
int qtdCad = 0;
int id = 1;


struct Pessoa *p;
struct Conta *c;


void initialFrame();
void centerFrameInit();
void centerFrameFinal();
void finalFrame();
void setPointer();
void setId();
void clsTela();
void msnSucess();
void menu();
void cadastrarAluno();
void cadConta();
void listar();
void imprimirCadAluno();
void imprimirCadConta();
void editarCad();
int main();


void initialFrame(){
	
	printf("\n=========================================================================================\n");
	
}

void centerFrameInit(){
	
	printf("|");
	
}

void centerFrameFinal(){
	
	printf("\t\t\t\t\t|");
}

void finalFrame(){
	
	printf("\n=========================================================================================\n\n\n");
	
}

void setPointer(int id){
	
	p = &pessoa[id];
	
	c = &conta[id];
	
}

void setId(){
	
	pessoa[qtdCad].Id = id;
	id++;
	
}

void clsTela(){
	
	system("cls");	
	
}

void msnSucess(){
	
	printf("\n Atualização realizada com sucesso\n");
	
}

void menu(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	clsTela();
	
	op = 0;
	
	initialFrame();
	centerFrameInit();
	printf("\t\t\t\t\t     Opções ");
	centerFrameFinal();
	initialFrame();
	centerFrameInit();
	printf("Para cadastrar aluno informe: \t\t\t1");
	centerFrameFinal();
	initialFrame();
	centerFrameInit();
	printf("Para listar alunos informe:   \t\t\t2");
	centerFrameFinal();
	initialFrame();
	centerFrameInit();
	printf("Para pesquisar aluno informe: \t\t\t3");
	centerFrameFinal();
	initialFrame();
	centerFrameInit();
	printf("Para sair informe:            \t\t\t4");
	centerFrameFinal();
	finalFrame();
	scanf("%d", &op);
	
}

void cadastrarAluno(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	clsTela();	
  	
	initialFrame(); 
	centerFrameInit();
	printf("\t\t\t\t     CADASTRO DE ALUNO");
	centerFrameFinal();
	finalFrame();  
	            
	setId();	
	
	printf("\n Informe o nome: ");
	fflush(stdin);
	fgets(pessoa[qtdCad].Nome, 50, stdin);
	
	printf("\n Informe a idade: ");
	scanf("%d", &pessoa[qtdCad].Idade);
	
	printf("\n Informe o peso: ");
	scanf("%f", &pessoa[qtdCad].Peso);
	
	printf("\n Informe a altura: ");
	scanf("%f", &pessoa[qtdCad].Altura);
	
	printf("\n Informe o CPF: ");
	fflush(stdin);
	scanf("%s", &pessoa[qtdCad].CPF);
	
	qtdCad ++;
	
	main();
	
}

void cadConta(int idP){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	clsTela();	
	
	int id = idP - 1;

	initialFrame();
	centerFrameInit();
	printf("\t\t     CADASTRO DE CONTA");
	centerFrameFinal();
	finalFrame();
	
	printf("\n Informe o número da conta: ");
	fflush(stdin);
	fgets(conta[idP].Numero, 11, stdin);
	
	printf("\n Informe o codigo: ");
	fflush(stdin);
	fgets(conta[idP].Codigo, 3, stdin);
	
	printf("\n Informe o saldo: ");
	fflush(stdin);
	scanf("%f", conta[idP].Saldo);	
	
	main();
	
}

void listarCad(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	clsTela();
	
	int i = 0;
	
	for(i = 0; i < qtdCad; i++){
		
		printf("\n ================================");
		printf("\n Aluno: ");
		printf("\n ================================");
		printf("\n Id : %d", pessoa[i].Id);
		printf("\n ================================");
		printf("\n Nome: %s", pessoa[i].Nome);
		printf("\n ================================");
		printf("\n Idade : %d", pessoa[i].Idade);
		printf("\n ================================");
		printf("\n Peso: %.3f", pessoa[i].Peso);
		printf("\n ================================");
		printf("\n Altura: %.2f", pessoa[i].Altura);
		printf("\n ================================");
		printf("\n CPF: %s", pessoa[i].CPF);
		printf("\n ================================\n\n\n");
		
	}
	
	system("pause");
	
	main();
	
}

void imprimirCadAluno(int idP){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int id = idP-1;
	
	if(idP > qtdCad){
		printf("\n Aluno não cadastrado!!!\n\n");
	}else{			
		printf("\n ================================");
		printf("\n Aluno: ");
		printf("\n ================================");
		printf("\n Id : %d", pessoa[id].Id);
		printf("\n ================================");
		printf("\n Nome: %s", pessoa[id].Nome);
		printf("\n ================================");
		printf("\n Idade : %d", pessoa[id].Idade);
		printf("\n ================================");
		printf("\n Peso: %.3f", pessoa[id].Peso);
		printf("\n ================================");
		printf("\n Altura: %.2f", pessoa[id].Altura);
		printf("\n ================================");
		printf("\n CPF: %s", pessoa[id].CPF);
		printf("\n ================================\n\n\n");
			
	}
	
}

void imprimirCadConta(int idP){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	clsTela();
	
	int id = idP-1;
	
	setPointer(id);
	
	if(idP > qtdCad){
		printf("\n Aluno não cadastrado!!!\n\n");
	}else{			
		printf("\n ================================");
		printf("\n Dados: ");
		printf("\n ================================");
		printf("\n Nome : %s", p -> Nome);
		printf("\n ================================");
		printf("\n Nome: %s", p -> CPF);
		printf("\n ================================");
		printf("\n Idade : %s", c -> Numero);
		printf("\n ================================");
		printf("\n Peso: %s", c -> Codigo);
		printf("\n ================================");
		printf("\n Altura: %.2f", c -> Saldo);
		printf("\n ================================");
			
	}
	
	system("pause");
	
	main();
	
}

void editarCad(int idP){
	
	clsTela();
	
	int id = idP-1;
	
	imprimirCadAluno(id);	
	
	char c[2];
		
	printf("\n Editar?");
	printf("\n Informe S para sim ou N para não!\n");
	scanf("%s", &c);
		
	int res = strcmp(c,"s");
	int res1 = strcmp(c,"S");	
		
	if(res == 0 || res1 == 0){		
	
		int op = 0;
		
		printf("\n =================================="); 
		printf("\n Para alterar o nome informe:    1");
		printf("\n =================================="); 
		printf("\n Para alterar a idade informe:   2");
		printf("\n =================================="); 
		printf("\n Para alterar o peso informe:    3");
		printf("\n =================================="); 
		printf("\n Para alterar a altura informe:  4");
		printf("\n =================================="); 
		printf("\n Para alterar o CPF informe:     5");
		printf("\n ==================================\n\n\n"); 
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("\n Informe o nome: \n");
				fflush(stdin);
				fgets(pessoa[id].Nome, 50, stdin);
				msnSucess();
				break;
			case 2:  
				printf("\n Informe a idade: \n");
				scanf("%d", &pessoa[id].Idade);
				msnSucess();
				break;
			case 3:
				printf("\n Informe o peso: \n");
				scanf("%f", &pessoa[id].Peso);
				msnSucess();
				break;
			case 4:
				printf("\n Informe a altura: \n");
				scanf("%f", &pessoa[id].Altura);
				msnSucess();
				break;
			case 5:
				printf("\n Informe o CPF: \n");
				scanf("%s", &pessoa[id].CPF);
				msnSucess();
				break; 
		}	
			
		imprimirCadAluno(idP);
	}	
	
	system("pause");
	
	main();
}

int main(){
	
	
	setlocale(LC_ALL,"Portuguese_Brazil");	
	
	menu();
	
	if(op == 1){
		cadastrarAluno();
	}
	else if(op == 2){
		listarCad();
	}
	else if(op == 3){
		printf("\n Informe o id do cliente: ");
		scanf("%d", &idPesq);
		editarCad(idPesq);
	}
	else if(op == 4){
		return 1;
	}
	else{
		printf("\n Opção inválida!!!");
	}
	
	return 0;
}



