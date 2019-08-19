#include <iostream>

using namespace std;

void modovenda();
void modorecomendacao();
void modoestoque();

void menu(){
	int escolha;

cout<< "             Bem-vindo ao programa de gerenciamento de vendas."<<endl<<endl;

	cout<< "1- Modo venda"<<endl;
	cout<< "2- Modo recomendação"<<endl;
	cout<< "3- Modo estoque"<<endl;

	cout<< "Selecione um dos modos acima: "<<endl<<endl;
	cin>>escolha;

	if (escolha==1){
		modovenda();
	}

	if (escolha==2){
		modorecomendacao();
	}

	if (escolha==3){
		modoestoque();
	}

	if (escolha<1||escolha>3){
		cout<<"Opção indisponível.";
	}



}