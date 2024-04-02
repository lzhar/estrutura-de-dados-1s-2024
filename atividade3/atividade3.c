#include <stdio.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
    
    FILE *arq_txt;

    arq_txt = fopen("arq.txt", "w");

    if(arq_txt == NULL){
        printf("Erro ao abrir o arquivo txt");
        exit(1);
    }
    
    fprintf(arq_txt, argv[1]);
    fprintf(arq_txt, "\n")

    fclose(arq_txt);

    exit(0);

}