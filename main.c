#include <stdio.h> 
#include "tic-tac-toe.h"

int main() {
    
    char grille[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int fin = 0;

    while (fin == 0) 
    {
        
        tableau(grille);
        
        while (joueur_joue(grille) == 0){
        }
        
        if (victoire(grille, 'X') == 1) {
            
            tableau(grille);
            
            printf("C'est gagné !\n");
            
            fin = 1;
        }

        if (fin == 0 && tableau_pleins(grille) == 1) {
            
            tableau(grille);
            
            printf("Il y a égalite !\n");
            
            fin = 1;
        }

        if (fin == 0) {
            
            ordinateur_joue(grille);

            if (victoire(grille, 'O') == 1) {
                
                tableau(grille);
                
                printf("Tu as perdu ...\n");
                
                fin = 1;
            }

        }
    }

    return 0;
}