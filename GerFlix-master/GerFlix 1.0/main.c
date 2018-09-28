#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
#define USUARIOS 15
#define SERIES 5

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);





    int opcion;
    printf("1- Mostrar listado de series\n2- Mostrar listado de Usuarios\n3- Mostrar listado de Usuarios y la serie que ve\n4- Mostrar la serie y los usuarios que la ven\n");
    scanf("%d",&opcion);

    switch(opcion)
        {
        case 1:
                mostrarListaSeries(listaDeSeries,SERIES);
                break;

        case 2:
                mostrarListaUsuarios(listaDeUsuarios,USUARIOS);
                break;

        case 3:

                break;
        case 4:

                break;
        }



/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/




    return 0;
}
