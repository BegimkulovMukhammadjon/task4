#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nod(int a, int b) {
                int c;
                while (b) { // poka b!=0 (0-loj, vsyo ostalnoe-istina)
                        c = a % b;
                        a = b;
                        b = c;
                        }
                        return abs(a);
            }
int nok(int a, int b ) {
        int del = 1;
        return a * b / nod(a, b);
}
int qwe(int q) {
        for (int i = 0; i < q; i++) {
                printf("*");
        }
        printf("\n");
        return 0;
}
int asd(int q, int e) {
        for (int i = 0; i < e; i++) {
                printf("*");
        }
        for (int i = 0; i < q - 2 * e; i++) {
                printf(" ");
        }
        for (int i = 0; i < e; i++) {
                printf("*");
        }
        printf("\n");
        return 0;
}
int function2(int q, int w, int e) {
        for (int i = 0; i < e; i++) {
                qwe(q);
        }
        for (int i = 0; i < w- e- e; i++) {
                 asd(q,e);
        }
        for (int i = 0; i < e; i++) {
                qwe(q);
        }

        return 0;
}

int function6(int *a, int *b) {
        int c = nod(*a, *b);
        *a = *a /c;
        *b = *b /c;
        return *a, *b;

}
void func2();// 2 proga
void func5(); //5 proga
void func6();// 6 ppoga


int main()
{


       printf("\n\n2) (1) - Napisat funktsiyu s tremya tselimi parametrami m, n, d, izobrajayushyu v tekstovom okne terminala pri pomoshi simvolov * ramku razmerom m na n tolshinoy d");
       printf("\n\n5) (2) - Opredelite NOK tryox naturalnix chisel. Ispolzovat funktsii NOD(a, b) i NOK(a, b)\nUkazanie: NOK(a, b) = a * b / NOD(a, b).");
       printf("\n\n6) (2) - Nayti summu dvux drobey a/b i c/d. Otvet zapisat obiknovennoy drobyu.\nUkazanie: napisat funktsiyu cancel(a, b, p, q), kotoraya drob a/b privodit k nesokratimomu vidu p / q .");
       printf("\n\n0) EXIT");
       int q=-1;
       while (q != 0) {
                printf("\n\nVvedite nomer zadaniya: ");
       scanf_s("%d",&q);
       switch (q) {

       case 2:
               func2(); //2 proga
               break;

       case 5:
               func5(); //5 proga
               break;


       case 6:   func6(); //6 proga
       break;
   // case 7:
   //  int a, b;
   //  scanf_s("%d %d",&a,&b);
   //  printf("Otvet %d",nod(a,b));
   //6 proga //  break;
          }
       }
          return 0;
}


void func2() { //2 proga
       int q, w, e;
       printf("\nVvedite shirinu polya ");
       scanf_s("%d", &q);
       printf("\nVvedite visotu polya ");
       scanf_s("%d", &w);
       printf("\nVvedite glubinu polya ");
       scanf_s("%d", &e);
       printf("\n\n");
       function2(q,w,e);

}

void func5() {//5 proga
    int q,w,e;
    printf("\nVvedite pervoe chislo: ");
    scanf_s("%d", &q);
    printf("\nVvedite vtoroe chislo: ");
    scanf_s("%d", &w);
    printf("\nVvedite tretye chislo: ");
    scanf_s("%d", &e);
    printf("\n Otvet % d", nok(nok(q, w), e));

}

void func6() { // 6 proga
    int q, w, e, r;

    printf("\nVvedite chislitel pervogo chisla: ");
    scanf_s("%d", &q);
    printf("\nVvedite znamenatel pervogo chisla: ");
    scanf_s("%d", &w);
    printf("\nVvedite chislitel vtorogo chisla: ");
    scanf_s("%d", &e);
    printf("\nVvedite znamenatel vtorogo chisla: ");
    scanf_s("%d", &r);

    // q = q * r + w * e; //chislitel
    // w = w * r;//znamenatel
    q = q * r + w * e; w = w * r;
    function6(&q, &w);
    printf("§°§ä§Ó§Ö§ä: %d/%d", q, w); //delim chislitel i znamenatel na ix nod

}
