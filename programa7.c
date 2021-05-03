#include <stdio.h>
int  main ()
{
    /* Garcés López Angel Manuel
    Equipo Aamuke
    02 Mayo 21
    Programa 7. valores reales,  calcula el porcentaje de un valor numerico
    */

    float valorI, porcen, valorF;

    printf ("\n \n Programa 7" );
    printf ("\n \n Saca el porcentaje 15");
    printf ("\n \n Dame el primer valorI 300 ");
    printf("\n \n resta el porcen a valorI 255");
    scanf ("%f", &valorI); // Permite capturar un valor real y lo guarda en variable primer
    printf ("\n \n Dame el porcentaje (%) ");
    scanf ( "%f", &porcen); // Permite capturar un valor real y lo guarda en variable primer
    valorF = valorI * (porcen / 100); // Formula matematica para calcular porcentaje.
    printf ("\n \n El valor final es %255", valorF);

    return  0;
}