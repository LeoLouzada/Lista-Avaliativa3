#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char placaSalva[9], diaSalvo[20];
    int tamanho;
    char placaInvalida[9], diaInvalido[20];
    char placa[9], dia[20], diaMinusculo[20];

    scanf("%s", placaSalva);
    scanf("%s", diaSalvo);

    if(strlen(placaSalva) == 7){
        tamanho = 7;
        if(!isalpha(placaSalva[0]) || !isalpha(placaSalva[1]) || !isalpha(placaSalva[2]) || !isalpha(placaSalva[4])){
            strcpy(placa, placaInvalida);
        }else if(!isdigit(placaSalva[3]) || !isdigit(placaSalva[5]) || !isdigit(placaSalva[6])){
            strcpy(placa, placaInvalida);
        }else{
            strcpy(placa, placaSalva);
        }
    }else{
        tamanho = 8;
        if(!isalpha(placaSalva[0]) || !isalpha(placaSalva[1]) || !isalpha(placaSalva[2])){
            strcpy(placa, placaInvalida);
        }else if(!isdigit(placaSalva[4]) || !isdigit(placaSalva[5]) || !isdigit(placaSalva[6]) || !isdigit(placaSalva[7])){
            strcpy(placa, placaInvalida);
        }else if(placaSalva[3] != '-'){
            strcpy(placa, placaInvalida);
        }else{
            strcpy(placa, placaSalva);
        }
    }

    if(strcmp(diaSalvo, "SEGUNDA-FEIRA") == 0 || strcmp(diaSalvo, "TERCA-FEIRA") == 0 || strcmp(diaSalvo, "QUARTA-FEIRA") == 0 ||
       strcmp(diaSalvo, "QUINTA-FEIRA") == 0 || strcmp(diaSalvo, "SEXTA-FEIRA") == 0 || strcmp(diaSalvo, "SABADO") == 0 || strcmp(diaSalvo, "DOMINGO") == 0){
        strcpy(dia, diaSalvo);
    }else{
        strcpy(dia, diaInvalido);
    }

    strcpy(diaMinusculo, dia);
    strlwr(diaMinusculo);

    if(strlen(placaSalva) == 7 && strcmp(placa, placaSalva) == 0 && strcmp(dia, diaSalvo) == 0){
        if(strcmp(diaSalvo, "SABADO") == 0 || strcmp(diaSalvo, "DOMINGO") == 0){
                printf("Nao ha proibicao no fim de semana\n");
        }else if(placaSalva[6] == '0' || placaSalva[6] == '1'){
            if(strcmp(diaSalvo, "SEGUNDA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[6] == '2' || placaSalva[6] == '3'){
            if(strcmp(diaSalvo, "TERCA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[6] == '4' || placaSalva[6] == '5'){
            if(strcmp(diaSalvo, "QUARTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[6] == '6' || placaSalva[6] == '7'){
            if(strcmp(diaSalvo, "QUINTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[6] == '8' || placaSalva[6] == '9'){
            if(strcmp(diaSalvo, "SEXTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }
    }else if(isdigit(placaSalva[7]) && strcmp(placa, placaSalva) == 0 && strcmp(dia, diaSalvo) == 0){
    	 if(strcmp(diaSalvo, "SABADO") == 0 || strcmp(diaSalvo, "DOMINGO") == 0){
            printf("Nao ha proibicao no fim de semana\n");
        }else if(placaSalva[7] == '0' || placaSalva[7] == '1'){
            if(strcmp(diaSalvo, "SEGUNDA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[7] == '2' || placaSalva[7] == '3'){
            if(strcmp(diaSalvo, "TERCA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[7] == '4' || placaSalva[7] == '5'){
            if(strcmp(diaSalvo, "QUARTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[7] == '6' || placaSalva[7] == '7'){
            if(strcmp(diaSalvo, "QUINTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }else if(placaSalva[7] == '8' || placaSalva[7] == '9'){
            if(strcmp(diaSalvo, "SEXTA-FEIRA") == 0){
                printf("%s nao pode circular %s\n", placaSalva, diaMinusculo);
            }else{
                printf("%s pode circular %s\n", placaSalva, diaMinusculo);
            }
        }
    }else if(strcmp(placa, placaInvalida) == 0 && strcmp(dia, diaSalvo) == 0){
        printf("Placa invalida\n");
    }else if(strcmp(placa, placaSalva) == 0 && strcmp(dia, diaInvalido) == 0){
        printf("Dia da semana invalido\n");
    }else if(strcmp(placa, placaInvalida) == 0 && strcmp(dia, diaInvalido) == 0){
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
    }

    return 0;
}
