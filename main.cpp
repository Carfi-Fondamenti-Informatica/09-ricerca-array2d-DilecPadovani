#include <iostream>
// #include <string>
using namespace std;
#include "lib.h"

int main()
{

  char nomi[10][20];
  char nome[20];
  int posizione = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      nome[j] = ' ';
      nomi[i][j] = ' ';
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cin >> nomi[i];
  }
  cin >> nome;

  if (find_in(nomi, nome, posizione))
  {
    cout << posizione;
  }
  else
  {
    cout << "non presente";
  }

  return 0;
}
