#include <stdio.h> 
#include <stdlib.h>
#include "tic-tac-toe.h"

void tableau(char grille[9]) {
    
    printf("\n");
    printf(" %c | %c | %c\n", grille[0], grille[1], grille[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", grille[3], grille[4], grille[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", grille[6], grille[7], grille[8]);
    printf("\n");

}

void ordinateur_joue(char grille[9]) {
int i = 0;

    while (i < 9)
    {
        if (grille[i] != 'X' && grille[i] != 'O') {
            
            grille[i] = 'O'; 
            
            return; 
        }

        i = i + 1; 
    }
}

int joueur_joue(char grille[9]) {
int position;

    printf("Choisissez où jouer ? : ");
    scanf("%d", &position);


    if (grille[position] == 'X' || grille[position] == 'O') {
        
        printf("Cette case est deja prise\n");
        
        return 0;
    }

    grille[position] = 'X';
    
    return 1;
}
 
int tableau_pleins(char grille[9]) {
int i = 0;

    while (i < 9)
    {
        
        if (grille[i] != 'X' && grille[i] != 'O') {
            
            return 0; 
        }

        i = i + 1; 
    }

    return 1; 
}


int victoire(char grille[9], char symbole) {

    if (grille[0] == symbole && grille[1] == symbole && grille[2] == symbole)
    {
        return 1;
    }
    if (grille[3] == symbole && grille[4] == symbole && grille[5] == symbole)
    {
        return 1;
    }
    if (grille[6] == symbole && grille[7] == symbole && grille[8] == symbole)
    {
        return 1;
    }


    if (grille[0] == symbole && grille[3] == symbole && grille[6] == symbole)
    {
        return 1;
    }
    if (grille[1] == symbole && grille[4] == symbole && grille[7] == symbole)
    {
        return 1;
    }
    if (grille[2] == symbole && grille[5] == symbole && grille[8] == symbole)
    {
        return 1;


    }
    if (grille[0] == symbole && grille[4] == symbole && grille[8] == symbole)
    {
        return 1;
    }
    if (grille[2] == symbole && grille[4] == symbole && grille[6] == symbole)
    {
        return 1;
    }

    return 0;
}



