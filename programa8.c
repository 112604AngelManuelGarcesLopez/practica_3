#include  <stdio.h>
int  main ()
{
     /* Garcés López Angel Manuel
    Equipo AMUKE
    02 MAYO 21
    Programa 8. pide tres valores, porcentaje de examen, porcentaje de tareas, valor total.
    */

    float valorE, valorT, promedio;

    printf ("\n \n Programa 8" );
    printf ("\n \n Saca el promedio ");
    printf ("\n \n Dame el valorE  ");// Permite capturar un valor real y lo guarda en variable primer
    scanf ("%f", &valorE);
    printf ("\n \n Dame el valorT ");
    scanf ("%f", &valorE); 
    printf ("\n \n Dame el promedio ");
    scanf ("%f", &promedio);  
 
    prom = (valorE + valorT) / 5; // Formula matematica para calcular el promedio.
    printf ("\n El promedio final es %f", prom);

    return  0;
}