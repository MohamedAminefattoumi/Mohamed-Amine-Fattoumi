#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Menge;
    float Preis;
    printf ("Menge des Produkts ist:");
    scanf("%d", &Menge);
    printf ("Verkaufspreis ist: ");
    scanf("%f", &Preis);
    while(Menge<0||Preis<0){
        printf("Menge des Produkts ist:");
        scanf("%d", &Menge);
        printf("Verkaufpreis ist:");
        scanf ("%f", &Preis);
    }

    printf("die Einnahmen sind: %.2f", Menge*Preis);
    return 0;
}
