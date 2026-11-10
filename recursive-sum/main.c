#include <stdio.h>

 int sumUpTo(int n) {
     int result;
     
     if (n <= 0) {
         result = 0;
     } else {
         result = sumUpTo (n - 1) + n;
     }
     return result;
 }


int main() {
    int numeroUsuari;
    int resultat;
    
    printf ("Insereix un numero:");
    scanf ("%d", &numeroUsuari);
    
    resultat = sumUpTo (numeroUsuari);
    
    printf ("El resultat es: %d\n", resultat);
    
    
    return 0;
    
}
