#include "header.h"

void miStrcmp(char palabra[], char palabra2[], int cant){
    int i;
    int band = 1;
    for(i=0; i<cant; i++){
        if(palabra[i] != palabra2[i]){
            band = -1;
            break;
        }
    }
    if(band != -1){
        printf("Son iguales!");
    }else{
        printf("Son distintas!");
    }
}
