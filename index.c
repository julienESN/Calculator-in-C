#include <stdio.h>
#include <math.h>

// Une fonction qui effectue le calcul en fonction de l'opérateur
float perform_operation(float num1, float num2, char operator) {
    switch(operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else
                printf("Erreur! Division par zéro.\n");
                return NAN;  // retourne NaN en cas de division par zéro
        case '^':
            return pow(num1, num2);
        default:
            printf("Erreur! Opérateur invalide.\n");
            return NAN;  // retourne NaN pour une entrée invalide
    }
}

// Une fonction qui demande à l'utilisateur de saisir un nombre
float get_number() {
    float num;
    if (scanf("%f", &num) != 1) {
        printf("Erreur! Entrée invalide.\n");
        return NAN;  // retourne NaN pour une entrée invalide
    }
    return num;
}

// Une fonction qui demande à l'utilisateur de saisir un opérateur
char get_operator() {
    char operator;
    scanf(" %c", &operator);  // notez l'espace avant %c pour ignorer le caractère de nouvelle ligne précédent
    return operator;
}

int main() {
    float num1, num2, result;
    char operator, exit;

    do {
        printf("Entrez le premier nombre : ");
        num1 = get_number();
        if (isnan(num1)) continue;  // si l'utilisateur a entré une valeur non valide, recommence la boucle

        printf("Entrez l'opérateur (+,-,*,/,^) : ");
        operator = get_operator();

        printf("Entrez le deuxième nombre : ");
        num2 = get_number();
        if (isnan(num2)) continue;

        result = perform_operation(num1, num2, operator);
        if (!isnan(result)) printf("Résultat: %.2f\n", result);

        printf("Souhaitez-vous effectuer un autre calcul? (O/N) : ");
        scanf(" %c", &exit);

    } while (exit == 'O' || exit == 'o');

    return 0;
}
