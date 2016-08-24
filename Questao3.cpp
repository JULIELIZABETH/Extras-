//Questão 3.
#include <iostream>
using namespace std;
void dividindo(int num);
int main(){
	/*
Programa DIVISAO POR DOIS
O programa lê um número e divide por dois (sucessivamente) até que
o resultado seja menor que 1.
Mostra o resultado de cada divisão e a quantidade de divisões efetuadas.
Dicas: Você precisa enviar alguma informação para a função?
Dicas: Quais informações precisam ser passadas? (Não use variáveis globais!)
*/
int num;
cout << "Digite o numero que deseja dividir:" << endl;
cin >> num;
// ----- DIVIDE UM NÚMERO POR DOIS SUCESSIVAS VEZES -----
    dividindo(num);
}
// O bloco termina aqui.
void dividindo (int num){
    int quantidade = 0;
    while ( num > 0)
{
    num /= 2;
    cout << "Resultado divisao: " << num << endl;
    quantidade++;
} cout << "Foram feitas um total de "<< quantidade << "divisoes" << endl;
}
