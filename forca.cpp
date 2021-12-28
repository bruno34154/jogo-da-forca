#include <iostream>
#include <stdlib.h>
#include<locale.h>

using namespace std;


int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	char palavra[30], letra[1], secreta[30], tentativa[30];
	int tam, i, chances, acertos, menu;
	bool acerto;
	
	
	chances = 4;
	tam = 0;
	i = 0;
	acertos = 0;
	acerto = false;
	
	
	cout<<"Digite a palavra secreta, sem que seu amigo veja!!"<<endl;
	cin>>palavra;
	system("cls");
	
	while(palavra[i] != '\0'){
		
		i++;
		tam++;
		
	}
	for(i=0; i<30; i++){
		
		secreta[i]='-';
	}
	while((chances > 0) && (acertos < tam)){
		
		cout<<"Chances: "<<chances<<endl;
		cout<<"Palavra Secreta: ";
		for(i=0; i<tam; i++){
			
			cout << secreta[i];
		}
		
		cout<<endl<<"tentar adivinhar uma letra ou a palavra completa?"<<endl;
		cout<<"1-letra"<<endl<<"2-palavra"<<endl;
		cin>>menu;
		switch(menu){
		
			case 1:
				cout<<endl<<endl<<"Digite uma letra!!"<< endl;
				cin>>letra[0];
				for(i=0;i<tam;i++){
					
					if(palavra[i]==letra[0]){
						
						acerto = true;
						secreta[i] = palavra[i];
						acertos++;
					}
				}
				if(acerto == false){
					chances--;
				}
				break;
			case 2:
				cout<<"digite a palavra correta: "<< endl;
				cin>>tentativa;
				if(tentativa[i] != palavra[i]){
					chances--;
				}
				else{
					acertos = tam;
					acerto=true;
				}
				break;
			default:
				cout<<"opção invalida ";
				break;
		}
		acerto=false;
		system("cls");
		
	}
	
	if(acertos == tam){
		cout<<"Você ganhou!! A palavra é "<<palavra<<endl;
	}
	else{
		cout<<"você perdeu!! A palavra era: "<<palavra<<endl;
	}
	
	system("pause");
	return 0;
}
