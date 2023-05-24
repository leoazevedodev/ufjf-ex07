#include <iostream>
#include <cstdlib> ///rand()
#include <ctime>   ///time()
#include "ListaEncad.h"

using namespace std;

int numAleatorio(int a, int b)
{
    return a + rand()%(b - a + 1) ; /// retorna um numero inteiro aleatório entre a e b
}

int main()
{
    ListaEncad l; /// cria lista vazia
    int NumNos = 12;

    //srand(time(NULL));
    srand(99);
    /// ATENCAO: os valores inseridos na lista sao gerados
    /// aleatoriamente e mudam em cada execucao do programa!!!
    cout << "Inserindo valores: ";
    for(int i = 1; i <= NumNos; i++)
    {
        int val =  numAleatorio(0, 50); /// cria um valor aleatório entre 0 e 50
        l.insereInicio(val);
    }
    cout << endl;

    bool existe = l.busca(20);
    cout << "O valor 20 esta na lista? ";
    if(existe)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    l.imprime();

    cout << "O numero de nos e: " << l.numNos() << endl;

    cout << "A posicao e : " << l.verificaMaior(35) << endl;

    l.limpar();

    l.insereInicio(15);
    l.insereInicio(1);
    l.insereInicio(3);
    l.insereInicio(1);

    l.imprime();

    cout << "O numero de nos e: " << l.numNos() << endl;

    cout << "A media e: " << l.calcularMedia() << endl;

    ListaEncad l2;

    l2.insereInicio(98);
    l2.insereInicio(99);

    l.concatena(&l2);

    l.imprime();



    return 0;
};

