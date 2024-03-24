#include <iostream>
using namespace std;

/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
    CÓDIGO  CARGO   PERCENTUAL
    101     Gerente     10%
    102     Engenheiro  20%
    103     Técnico     30% 
*/

int main ()
{
    float antsalario, novosalario;
    int codigocargo;
    
    cout << "CÓDIGO  CARGO   PERCENTUAL\n";
    cout << "101     Gerente     10%\n";
    cout << "102     Engenheiro  20%\n";
    cout << "103     Técnico     30%\n";
    
    cout << "Qual é seu código de cargo?: ";
    cin >> codigocargo;
    cout << "Qual é seu salário atual?: ";
    cin >> antsalario;
    
    if(codigocargo == 101){
        novosalario = (antsalario * 0.1) + antsalario;
        cout << "Seu novo salário é de: " << novosalario << " R$ e a diferença pro antigo é de: " << novosalario - antsalario << " R$";
    }   if(codigocargo == 102){
            novosalario = (antsalario * 0.2) + antsalario;
            cout << "Seu novo salário é de: " << novosalario << " R$ e a diferença pro antigo é de: " << novosalario - antsalario << " R$";
        }
            if(codigocargo == 103){
                novosalario = (antsalario * 0.3) + antsalario;
                cout << "Seu novo salário é de: " << novosalario << " R$ e a diferença pro antigo é de: " << novosalario - antsalario << " R$";
            }
                if(codigocargo < 101 || codigocargo > 103){
                    novosalario = (antsalario * 0.4) + antsalario;
                    cout << "Seu novo salário é de: " << novosalario << " R$ e a diferença pro antigo é de: " << novosalario - antsalario << " R$";
                }
}
