#include <stdio.h>
#include <stdlib.h>

struct abacaxiS
{ float Ag;
  int Ad; //docura
  float Ap; //preco 2 casas decimais
  float Vc; //confiança 5 casas decimais
};


int main()
{   int N, h, i, indMaior, aux, j;
    scanf ("%d", &N);
    while (N>0)
        {
        struct abacaxiS abacaxi[N];
        for (i=0; i<N; i++)
            {
              fflush(stdin);
              scanf("%d", &abacaxi[i].Ad);
            }
        for (i=0; i<N; i++)
            {
              fflush(stdin);
              scanf("%f", &abacaxi[i].Ap);
            }
        for (i=0; i<N; i++)
            {
              fflush(stdin);
             scanf("%f", &abacaxi[i].Vc);
            }
        for (i=0; i<N; i++)
            { abacaxi[i].Ag = (abacaxi[i].Ad * abacaxi[i].Vc)/abacaxi[i].Ap;
//              printf("%d %.2f %.5f %.5f\n", abacaxi[i].Ad, abacaxi[i].Ap, abacaxi[i].Vc, abacaxi[i].Ag);
            }
            indMaior = 0;
        for (i=0; i<N; i++)
        {
           if (abacaxi[i].Ag>abacaxi[indMaior].Ag)
                  {
                      indMaior=i;

                   }
        }
        printf("%d %.2f %.5f %.5f\n", abacaxi[indMaior].Ad, abacaxi[indMaior].Ap, abacaxi[indMaior].Vc, abacaxi[indMaior].Ag);
        scanf("%d", &N);
        }
    return 0;
}
