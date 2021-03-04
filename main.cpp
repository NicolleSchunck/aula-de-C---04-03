/*
 Quadro Resumo
 1) nome, status, imc, peso, altura
 2) nome, peso, altura
 3) imc = peso / altura * altura
 4) nome, imc, status
 * 
 * 
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

 

string nome, status;
double imc, peso, altura;

 

 

int main () 
{   
    setlocale(LC_ALL, "Portuguese");
    int item = 0;
    
    MENU: // Ponto de Repetição
    system("clear");
    cout << "\n***Menu***";
    cout << "\n1 Ler";
    cout << "\n2 Calcular";
    cout << "\n3 Exibir";
    cout << "\n4 Sair";
    cout << "\nItem:";
    cin >> item;
    
    if ( item == 1 )
    {
        system("clear");
        cout << "\nDigite o nome:";
        cin.ignore(); // ignora o enter do cin anterior
        getline (cin, nome );
        
        cout << "\nDigite o Peso:";
        cin >> peso;
        
        cout << "\nDigite altura:";
        cin >> altura;
        
    }
    
    else if (item == 2)
    {
        imc = peso / pow (altura, 2 );
        
        // Processamento do Status
        if ( imc < 18.5 )
        {  
            status = "Vc está abaixo do peso!";
        }
        
        else if ( imc <= 24.9  )
        {
            status = "Vc está dentro de seu peso normal!";
        }
        else
        {
            status = "Vc está com sobrepeso! Procure ajuda!";
        }
        
        cout << "\ncalculando imc..." << endl;
        system("sleep 3");
    }
    
    else if (item == 3)
    {
        system("clear");
        cout << "\n*** Tela de Saída***";
        cout << "\nNome:" << nome;
        
        cout << fixed << setprecision (2) << "\nIMC.:" << imc;
        cout << "\nStatus:" << status << endl;
        system("sleep 5");
        
    }
    
    else if ( item == 4 )
    {
        exit(0); // sair do programa
    }
    
    goto MENU; // Volta ao ponto de repetição
    
    return 0;
}