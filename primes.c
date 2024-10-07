// primes.c

#include <stdio.h>
#include <math.h>

int isprime(int p) {
    if (p < 2) {
        return 0;  // 0 et 1 ne sont pas des nombres premiers
    }
    if (p == 2) {
        return 1;  // 2 est le seul nombre premier pair
    }
    if (p % 2 == 0) {
        return 0;  // Élimine les nombres pairs
    }
    
    int limit = (int)sqrt(p);
    for (int i = 3; i <= limit; i += 2) {  // Teste uniquement les nombres impairs
        if (p % i == 0) {
            return 0;  // p n'est pas premier
        }
    }
    return 1;  // p est premier
}

int main() {
    int n;
    
    // Demander à l'utilisateur d'entrer la valeur de n
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    int count = 0;  // Pour compter les nombres premiers

    // Parcourir tous les nombres de 2 à n
    for (int i = 2; i <= n; i++) {
        if (isprime(i)) {
            count++;  // Incrémenter le compteur si i est premier
        }
    }

    // Afficher le nombre total de nombres premiers jusqu'à n
    printf("Il y a %d nombres premiers jusqu'à %d.\n", count, n);

    return 0;
}