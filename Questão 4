#include <iostream>
using namespace std;

/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago. 
*/

int main()
{
    int anocarro;
    double prcarro;
    
    cout << "CALCULADORA DE IMPOSTO - DETRAN";
    cout << "\nQual o ano do carro?: ";
    cin >> anocarro;
    cout << "Qual o preço do carro: ";
    cin >> prcarro;
    
    if(anocarro < 1990){
        cout << "O imposto à ser pago é de: " << (prcarro * 0.01) + prcarro << " R$";
    }else{
        cout << "O imposto à ser pago é de: " << (prcarro * 0.015) + prcarro << " R$";
    }
}
