#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(int argc, char *argv[]){

  //Permite usar acentos
    setlocale(LC_ALL,"");

  /*int ic; //initial credit
  int nr; //number of rounds
  int spots;// numeros apostados, máximo 15*/

  string vetor[3];

  //imprime todos os argumentos recebidos na execução
  //do programa, para testar, compile e faça
  //./a.out arg1 arg2 arg2
  //o primeiro argumento é sempre o nome 
  //do programa (a.out, neste exemplo)
  for(int i = 0; i < argc; i++){
    cout << "Argumento[" <<i<< "]: " << argv[i] << endl;
    vetor[i] = argv[i];
  }

  for(int i = 0; i <= 3; i++){
    cout << vetor[i] << " " << endl;
  }

  return 0;
}