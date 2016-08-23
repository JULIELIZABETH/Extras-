// Tema 6 - Batalha Naval '-'
#include <iostream>
using namespace std;

#define LINHAS 9
#define COLUNAS 9 

enum Estado {
	AGUA,
	BARCO,
	ERRO,
	ACERTO	
};

enum Direcao {
    ACIMA,
    BAIXO,
    ESQUERDA, 
    DIREITA	
};

// Funções
void mostrar_tabuleiro( int tabuleiro[LINHAS][COLUNAS] );
void adicionar_barco( int tabuleiro[LINHAS][COLUNAS], int tamanho, Direcao d );

int main()
{
	// Criar o tabuleiro
	int tabuleiro[LINHAS][COLUNAS];
	
	// Preencher o tabuleiro
	for(int lin = 0; lin < LINHAS; lin++)
	{
		for(int col = 0; col < COLUNAS; col++)
		{
			// 0: AGUA		1: BARCO
			tabuleiro[lin][col] = AGUA;			
		}
	}
	
	// Adicionar os barcos
	int tamanho = 5;
	adicionar_barco( tabuleiro, tamanho, ACIMA );
    adicionar_barco( tabuleiro, tamanho, BAIXO );
	// Mostrar o tabuleiro em tela
	mostrar_tabuleiro( tabuleiro );		
}

void mostrar_tabuleiro( int tabuleiro[LINHAS][COLUNAS] )
{
	cout << "    1  2  3  4  5  6  7  8  9 " << endl;
	cout << endl;
	for(int lin = 0; lin < LINHAS; lin++)
	{
		cout << " " << lin + 1 << " ";
		for(int col = 0; col < COLUNAS; col++)
		{
			switch( tabuleiro[lin][col] )
			{
				case AGUA:
					cout << " ~ ";
					break;
				case BARCO:
					cout << " B ";
					break;
				case ERRO:
					cout << " X ";
					break;
				case ACERTO:
					cout << " O ";
					break; 		
			}  
		}
		cout << endl;
	}
}

void adicionar_barco( int tabuleiro[LINHAS][COLUNAS], int tamanho, Direcao d )
{
	//verifica a possição.
	int linha_b, coluna_b;
	cout << "Adicionando Barcos " << endl;
	cout << "Digite linha: [1 ate 9] " << endl;
	cin >> linha_b;
	cout << "Digite coluna: [1 ate 9] " << endl;
	cin >> coluna_b;
	//Verifica si estar dentro do tabuleiro. 
	if( linha_b >= 1 && linha_b <= 9 &&
		coluna_b >= 1 && coluna_b <= 9 
		
		)
		
	{
		
		int linha_inicial = linha_b - 1;
		int coluna_inicial = coluna_b - 1;

		switch(d)
		{
		
		case ACIMA:
		// verifico se pode adicionar para a acima. 
		if(linha_b + (tamanho - 1 ) >= 1 ) 
		{
			// Adicionando o Barco para acima --->
		   for(int aumentar = 0; aumentar < tamanho; aumentar++)
		   {
			 // A linha não muda. 
			 // Adiciona cada parte do Barco nas colunas seguintes. 
			 // Aumenta de 0 (primeira parte do barco) até chegar no tamanho (última parte do barco).
			 tabuleiro[linha_inicial - aumentar ][coluna_inicial] = BARCO;
		   }		
		   cout << "Adicionado para acima" << endl;	
		   }
		 break;
		case BAIXO:
		// verifico se pode adicionar para a baixo. 
		if(linha_b + (tamanho - 1 ) <= 9 ) 
		{
			// Adicionando o Barco para a Direita --->
		   for(int aumentar = 0; aumentar < tamanho; aumentar++)
		   {
			 // A linha não muda. 
			 // Adiciona cada parte do Barco nas colunas seguintes. 
			 // Aumenta de 0 (primeira parte do barco) até chegar no tamanho (última parte do barco).
			 tabuleiro[linha_inicial + aumentar ][coluna_inicial] = BARCO;
		   }		
		   cout << "Adicionado para baixo" << endl;	
		   }
		 break;
		case ESQUERDA:
	    	// adicionando o barco para a esquerda. 
		if(coluna_b - (tamanho - 1 ) >= 1 ) 
		{
			// Adicionando o Barco para a esquerda --->
		   for(int aumentar = 0; aumentar < tamanho; aumentar++)
		   {
			 // A linha não muda. 
			 // Adiciona cada parte do Barco nas colunas seguintes. 
			 // Aumenta de 0 (primeira parte do barco) até chegar no tamanho (última parte do barco).
			 tabuleiro[linha_inicial][coluna_inicial - aumentar] = BARCO;
		   }		
		   cout << "Adicionado para a esquerda" << endl;	
		   }
	    
	     break;
	    case DIREITA:
	   	//adicionando o barco para a Direita. 
				if(coluna_b + (tamanho - 1 )<= 9 ) 
				{
					// Adicionando o Barco para a Direita --->
				   for(int aumentar = 0; aumentar < tamanho; aumentar++)
				   {
					 // A linha não muda. 
					 // Adiciona cada parte do Barco nas colunas seguintes. 
					 // Aumenta de 0 (primeira parte do barco) até chegar no tamanho (última parte do barco).
					 tabuleiro[linha_inicial][coluna_inicial + aumentar] = BARCO;
				   }		
				   cout << "Adicionado para a direita" << endl;	
				   }
	     break;
	default:
	   cout << "direção invalida" << endl;
	}
	
		
	
	}
	else
	{
		cout << "ERRO: pos invalida" << endl;
	}		
}
