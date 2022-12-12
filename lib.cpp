#include "lib.h"
bool find_in(char lista_nomi[10][20], char target_nome[20], int &posizione)
{
    for (int nome = 0; nome < 10; nome++)
    {
        for (int letter = 0; letter < 20; letter++)
        {
            if (lista_nomi
                    [nome][letter] != target_nome[letter])
            {
                letter = 20;
            }
            if (letter == 19)
            {
                posizione = nome;
                return true;
            }
        }
    }
    return false;
}