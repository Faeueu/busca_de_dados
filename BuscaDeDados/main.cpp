#include <iostream>
using namespace std;

void buscaSequencial(int vetor[], int tamanho, int chaveBusca){
    bool encontrado = false;
    for(int i=0; i < tamanho; i++){
        if (vetor[i] == chaveBusca){
            encontrado = true;
            cout << i;
        }else if (!encontrado){
            cout << "Chave nao encontrada" << endl;
        }else{
            cout << endl;
        }
    }
}

void buscaBinania(int vetor[], int tamanho, int chaveBusca){

    int inicio = 0;
    int fim = tamanho -1;

    while(inicio <= fim) {
        int meio = (inicio + fim) / 2;


        if(vetor[meio] == chaveBusca){
            cout << meio << endl;
            return;
        }else if(vetor[meio] < chaveBusca){
            inicio = meio + 1;

        }else if(vetor[meio] > chaveBusca){
            fim = meio - 1;
        }else{
            cout << "Chave nao encontrada";
        }
    }
    cout << "CHAVE ENCONTRADA" << endl;
}

int main()
{
    int vetor[] = {1,2,3,4,5,6,7,8,9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 7;


    cout << "->BUSCA SEQUENCIAL<- \n";
    buscaSequencial(vetor, tamanho, chave);

    cout << "->BUSCA BINARIA<- \n";
    buscaBinania(vetor, tamanho, chave);

    return 0;
}
