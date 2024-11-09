#include <stdio.h>
#include <stdlib.h>


int saisir(){
    int n;
    int test = 0;
    while(test == 0) {
        printf("saisir N>0 et n<=6 : ");
        scanf("%d",&n);
        test = n >=1 && n <=6;
    }

    return n;

}



int pair(int n) {
    return n%2 == 0;
}

int somme_div(int n) {
    int s = 1;
    for (int i=2;i<=n/2;i++) {
        if (i%n==0){
            s++;
        }
    }
    return s;
}

int fact(int n) {
    int f = 1;
    for (int i=1;i<=n;i++) {
        f*=i;
    }
    return f;
}



int main()
{
    int n = saisir();
    printf("N est :%d \n",n);

    if(pair(n)){
        printf("N est pair !\n");
    }else {
        printf("N est impair !\n");
    }

    printf("somme des diviseurs de N est : %d \n",somme_div(n));
    printf("le factoriel de N est : %d \n",fact(n));

    return 0;
}
