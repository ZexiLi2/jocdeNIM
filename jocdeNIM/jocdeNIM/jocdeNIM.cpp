// jocdeNIM.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Zexi Li Li
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));

    int player, playerindex, resultat[3];
    
    resultat[0] = 3;    
    resultat[1] = 4;    
    resultat[2] = 5;
    //els resultats representen les 3 files, cada fila les seves peces
    while (resultat[0] > 0 || resultat[1] > 0 || resultat[2] > 0)   //mentre les files siguin més gran que 0 segueix bucle
    {
        int iamove = rand() % 3 + 1;    //peces que treu ia
        int iamove2 = rand() % 3 + 1;     //de quina columna la treu

        cout << "Current Game Status -> " << resultat[0] << " " << resultat[1] << " " << resultat[2] << "\n";   //mostra estat actual
        cout << "Computer removes " << iamove << " stones from pile at index " << iamove2 << "\n";  //indica quantes peces treu la màquina i de quina fila

            resultat[iamove2-1] = resultat[iamove2-1] - iamove ;    //actualitzar resultat
       
        cout << "Current Game Status -> " << resultat[0] << " " << resultat[1] << " " << resultat[2] << "\n";   //mostra estat després del torn de la màquina

        cout << "Select number of pebbles you want to remove (1, 2 or 3): ";    //pregunta al jugador quantes pedres vol treure
            cin >> player;  //llegeix el teclat
            if (player > 3 || player < 1)   //si el jugador escriu un nombre inferior a 1 o superior a 3 (que no sigui 1, 2 o 3)
            {
                cout << "Number not available \n";  //el programa indicarà que el nombre no està disponible
                break;
            }
            else
            {
                cout << "Select index (1, 2 or 3): ";   //pregunta al jugador que seleccioni l'index 
                    cin >> playerindex; //llegeix el teclat
                 cout << "Player removes " <<player<<" from index "<<playerindex<<"\n";    //indica quantes peces treu el jugador i de quina fila
               
                    resultat[playerindex-1] = resultat[playerindex-1] - player; //actualitzar resultat

                cout << "Current Game Status -> " << resultat[0] << " " << resultat[1] << " " << resultat[2] << "\n";    //mostra estat després del torn del jugador

            }
            
    }   //s'acaba bucle
    cout << "End of game!"; //anuncia que el joc s'ha acabat
            
    return 0;
}
