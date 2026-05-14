#include "pile.h"
#include <stdlib.h>
#include <stdio.h>

void CreatListe(Tliste * L, int n) {
    Tliste p, nouveau;
    int i;
    printf("Entrer l'element de tete: \n");
    scanf("%d", &nouveau->elem);
    * L = nouveau;
    p = nouveau;
    for(i=2;i<=n;i++){
        printf("Entrer l'element: %d",i);
        scanf("%d",&nouveau->elem);
        * L = nouveau;
        p ->suiv = nouveau;
        p = nouveau;
    }

 }
