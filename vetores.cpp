//Aula de vetores 03.08.2016 (:
#include <iostream>
#include <string>
using namespace std;

#define TAMANHO 5; //criar a constante.
//costantes são o oposto de variaveis,pois elas ficam gravadas e não podem sem mudadas.



int main()
{
	//adicionando valores ESTATICAMETE.
	int notas[TAMANHO] = { 100,80,60,40,20, }; 
	//tamanho = 5     0 ,1, 2, 3, 4 ordem. 
	//adicionando valores DINAMICAMENTE.  
	int notas2[TAMANHO];
	
	for(int pos = 0; pos < TAMANHO; pos++)
	{
	    cout << "digite o valor da pos " << pos << endl;
		cin >> notas2[pos];
	}


    for(int pos = 0; pos < TAMANHO; pos++)
    {
        cout << notas2[pos] << " ";	
	}


}

/*
int primeira_nota = notas[0];
	cout << "primeira nota: " << notas[0] << endl; //criando uma nova variavel para chamar a primeira nota.
	
	notas[0] =89;
	cout << "nota 1: "<< notas[0] << endl;
	
	notas[0] =13;
	cout << "nota 1: "<< notas[0] << endl;
	cout << "terceira nota: " << notas[2] << endl; //acessando diretamente o vetor.
	
	char texto[9] = { 'O','l','a',' ','M','u','n','d','o'};
	
	for(int pos = 0; pos < 5;pos++)
	{
	    cout << notas[pos] << endl;	
	}
	
	string nomes[3] = {"marcelo", "tiago", "priscilla"};
	
	bool valores[4] = { true, false, false, true};
*/
