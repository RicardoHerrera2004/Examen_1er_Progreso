#include <stdio.h> //Se agrega la libreria stdio en el programa//

int main (void) { //Se crea la funcion principal del programa//

    int numero, digito, sumatotal=0; //Se agrega las variables del programa//
    
    printf ("Ingrese un numero: "); //Se imprime la indicacion//
    scanf ("%d", &numero); //Se lee el numero que va ingresar el usuario//
    
    do //Se utiliza el do while para crear un bucle de obtencion de digitos hasta enontrar todos los digitos del numero ingresado//
    {
        digito = numero%10; //Se utiliza el modulo para sacar el residuo de la division por 10, consiguiendo el digito del numero ingresado//
        numero = numero/10; //Se divide el numero para 10 para seguir encontrando los digitios que faltan//
        printf ("El primer digito es: %d \n", digito);
        printf ("El numero es: %d \n", numero);

    } while (numero>0);
    


    return 0;
}
