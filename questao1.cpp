#include <iostream>
using namespace std;

/*
Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais; 
• Escaleno: tem os comprimentos dos três lados diferentes. 
*/

int main()
{
    float x, y, z;
    
    cout << "Digite um valor para x: ";
    cin >> x;
    cout << "Digite um valor para y: ";
    cin >> y;
    cout << "Digite um valor para z: ";
    cin >> z;
    
    if(x >= z + y || y >= x + z || z >= x + y){
    cout << "Os seus valores não formam um triângulo.";
    }else{                            
        if(x == z && x == y){
        cout << "Seu triângulo é equilátero.";
        }else{
            if(x == z || z == y || x == y){
            cout << "Seu triângulo é isósceles";
            }else{
                if(x != z && x != y)
                cout << "Seu triângulo é escaleno";
                       
            }
        }
    }
}
