#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantite;
    float prix;
    printf ("Quantite de produit est:");
    scanf("%d", &quantite);
    printf ("prix de vente est: ");
    scanf("%f", &prix);
    while(quantite<0||prix<0){
        printf("Quantite  de produit est:");
        scanf("%d", &quantite);
        printf("prix de vente est:");
        scanf ("%f", &prix);
    }

    printf("chiffre d\'affaires est: %.2f", quantite*prix);
    return 0;
}
