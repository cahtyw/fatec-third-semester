#include <iostream>

using namespace std;

#define QTDNC 2

typedef struct
{
  float real, imaginaria;
} numcomplex;

static void leNumComplex(numcomplex *nc)
{
  cout << endl
       << "Parte Real: ";
  cin >> nc->real;
  cout << endl
       << "Parte Imaginaria: ";
  cin >> nc->imaginaria;
}

static void escreveNumComplex(numcomplex nc)
{
  cout << endl
       << "Numero Complexo: ";
  if ((nc.real != 0) || (nc.imaginaria == 0))
  {
    cout << nc.real;
  }
  if (nc.imaginaria != 0)
  {
    if ((nc.imaginaria > 0) && (nc.real != 0))
    {
      cout << "+" << nc.imaginaria;
    }
    else
    {
      cout << nc.imaginaria;
    }
    cout << "i";
  }
  cout << endl;
}

static numcomplex somaNumComplex(numcomplex a, numcomplex b)
{
  numcomplex summ;

  summ.real = a.real + b.real;
  summ.imaginaria = a.imaginaria + b.imaginaria;

  return summ;
}

static numcomplex produtoNumComplex(numcomplex a, numcomplex b)
{
  numcomplex result;

  result.real = a.real * a.imaginaria - b.real * b.imaginaria;
  result.imaginaria = a.real * a.imaginaria + b.real * b.imaginaria;

  return result;
}

int main()
{
  int i;
  numcomplex vetorNC[QTDNC];
  numcomplex sNC, pNC;
  for (i = 0; i < QTDNC; i++)
  {
    cout << endl
         << "====================";
    cout << endl
         << i + 1 << "o Numero Complexo";
    cout << endl
         << "====================" << endl;
    leNumComplex(&vetorNC[i]);
    escreveNumComplex(vetorNC[i]);
  }
  cout << endl
       << "====================" << endl;
  cout << endl
       << "====================";
  cout << endl
       << "Soma";
  cout << endl
       << "====================" << endl;
  sNC = somaNumComplex(vetorNC[0], vetorNC[1]);
  escreveNumComplex(sNC);
  cout << endl
       << "====================" << endl;
  cout << endl
       << "====================";
  cout << endl
       << "Produto";
  cout << endl
       << "====================" << endl;
  pNC = produtoNumComplex(vetorNC[0], vetorNC[1]);
  escreveNumComplex(pNC);
  cout << endl
       << "====================" << endl;
  return 0;
}
