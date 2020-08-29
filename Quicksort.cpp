//Algoritmo de Ordenção - Quicksort
//Tarefa de Programação - PAA
//Feito por: Julia Gabriella Corrêa Silva.

#include <iostream>
#include <locale.h>
using namespace std;

//Função PARTIÇÃO
int particao(int vetor[], int pi, int pf){
        int pivo = vetor[pf];
        int i = (pi -1);
        for(int j = pi; j <= pf - 1; j++){
            if(vetor[j] <= pivo){
                i = i + 1;
                swap(vetor[i], vetor[j]);
            }
        }
        swap(vetor[i+1], vetor[pf]);
        return i+1;
    }

//Procedimento QUICKSORT
void quicksort(int vetor[], int pi, int pf){
        int p = 0;
        if(pi < pf){
            p = particao(vetor, pi, pf);
            quicksort(vetor, pi, p-1);//esquerda do pivo
            quicksort(vetor, p+1, pf);//direita do pivo
        }
    }

int main(){
    setlocale(LC_ALL, "Portuguese");
    int pi = 0;
    int pf = 14;
    int vetor[15]={9,10,-1,3,6,2,1,-3,1,0,-2,15,8,-7,0};

    //MOSTRANDO O VETOR DESORDENADO
    cout << "Vetor inicial desordenado: " << endl;
    for(int i = 0; i < 15; i ++){
        cout << "Posição [" << i << "]= " << vetor[i] << endl;
    }

    //CHAMANDO O PROCEDIMENTO QUICKSORT
    quicksort(vetor, pi, pf);
    cout << endl;

     //MOSTRANDO O VETOR ORDENADO
    cout << "Vetor final ordenado: " << endl;
    for(int i = 0; i < 15; i ++){
        cout << "Posição [" << i << "]= " << vetor[i] << endl;
    }

    return 0;
}
