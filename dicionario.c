#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define NUMERODEDEFINICOES 10


struct dicionario{
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[])
{

    int i;
    while(palavra1[i] == palavra2[i] && palavra1[i] !='\0' && palavra2[i] !='\0')
    {
        ++i;
    }
    if(palavra1[i]== '\0' && palavra2[i]== '\0'){
        return true;
    } else {
        return false;
    }

}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){
    
    bool compararStrings(const char palavra1[], const char palavra2[]);
    int i =0;

    while(i<numDePalavras){
        if(compararStrings(procurar, lingua[i].palavra)){
            return i; 
        }else{
            return ++i;
        }
    }

    return -1;

}

int main(void){

    int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras); 
    
    char palavra[20];
    int resultadoPesquisa;

    const struct dicionario portugues[NUMERODEDEFINICOES] = 
    {   {"CASA", "Onde pessoa mora"},
        {"PAO", "Comida de trigo"},
        {"FEIJAO", "Grao tipico do Brasil"},
        {"ARROZ", "Grao do japao"},
        {"QUEIJO", "Comida mineira"},
        {"PIZZA", "Comida da Italia"},
        {"FRANGO", "Ave, consumido no mundo"},
        {"OVO", "Filhote do frango"},
        {"ERVILHA", "Grao verde e gostoso"},
        {"TRIGO", "Grao da Asia"},
    };
    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);
    if(resultadoPesquisa =! -1){
        printf("%s\n",portugues[resultadoPesquisa].definicao);
    }else{
        printf("\n Palavra nao encontrada no dicionario");
    }

    return 0;
}


