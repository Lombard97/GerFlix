#include "usuariosyseries.h"

void mostrarUsuarioYSerie(eSerie listaDeSeries[], eUsuario listaDeUsuarios[],int tam)
{
    int i;
    int j;

    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam;j++)
        {
            if(listaDeUsuarios[i].idSerie==listaDeSeries[j].idSerie)
            {
                printf("%s %s",listaDeUsuarios[i].nombre,listaDeSeries[j].nombre);
            }
        }
    }

}

