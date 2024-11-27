#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "nombres.h"


// FONCTION QUI DETECTE LE TYPE DE NOMBRE
char * Type_Nombre(char ch[]) {
  int i = 0, k = 0;

  while (ch[i] != '\0') {
    if (ch[i++] == '.') {
      k++;
    }
  }
  if (k == 0) {
    return "entier";
  } else {
    return "reel";
  }

}

char * Pos_Neg(char ch1[]) {
  if (ch1[0] == '-')
    return "negative";
  else
    return "positive";

}

// PROCEDURE POUR LES ENTIERS
void entier_to_lettre(char ch2[]) {
  char * z = Pos_Neg(ch2);
  char ch1[100];
  if (z == "negative") {
    int e = 0, f = 0;

    while (ch2[e] != '\0') {
      ch1[f++] = ch2[e + 1];
      e++;
    }
  } else {
    int e = 0, f = 0;

    while (ch2[e] != '\0') {
      ch1[f++] = ch2[e++];
    }
  }

  int i;

  // L3ACHARAT
  if (strlen(ch1) == 1) {
    for (i = 0; i < strlen(ch1); i++) {
      if (chiffre[(int) ch1[i] - 48] == "zero")
        continue;

      printf(" %s", chiffre[(int) ch1[i] - 48]);

    }
  }
  if (strlen(ch1) < 3) {
    char w[1234];
    int j = 0;
    for (i = 0; i < strlen(ch1); i++) {
      w[j++] = ch1[i];
    }
    w[j] = '\0';
    int nombre = atoi(w);

    printf(" %s", chiffre[nombre]);
  }

  // CENTELLE
  else
  if (strlen(ch1) == 3) {
    int nombre = atoi(ch1);
    printf(" %s", chiffre[nombre]);
  }
  // MILLLLLLLLE
  else
  if (strlen(ch1) > 3 && strlen(ch1) < 6) {
    char cent[3], mille[3];
    int i, j = 0, k = 0;
    int a = strlen(ch1) % 3;
    for (i = 0; i < a; i++) {
      mille[j++] = ch1[i];

    }
    mille[j] = '\0';
    int nombre = atoi(mille);
    printf(" %s", chiffre[nombre]);
    printf(" mille");

    for (i = a; i < strlen(ch1); i++) {
      cent[k++] = ch1[i];
    }
    cent[k] = '\0';
    int nombre2 = atoi(cent);

    printf(" %s ", chiffre[nombre2]);
  }
  // MILLLLLLLLEEEE EXACTE 6 NOMBRES
  else
  if (strlen(ch1) == 6) {
    if (ch1[0] == '-') {
      printf("moin-");
    }
    char mille[3], cent[3];
    int i = 0, j = 0, a = 0;
    for (i = 0; i < strlen(ch1) - 3; i++) {
      mille[j++] = ch1[i];
    }
    mille[j] = '\0';
    int nombre = atoi(mille);
    printf(" %s", chiffre[nombre]);
    printf(" mille");
    for (i = 3; i < strlen(ch1); i++) {
      cent[a++] = ch1[i];
    }
    cent[a] = '\0';
    int nombre2 = atoi(cent);
    printf(" %s", chiffre[nombre2]);
  }
  // MILLLLLLLIONNNNN
  else
  if (strlen(ch1) > 6 && strlen(ch1) < 9) {
    char cent[3], mille[3], million[3];
    int i = 0, j = 0, k = 0, a = 0;
    int b = strlen(ch1) % 3;
    for (i = 0; i < b; i++) {
      million[j++] = ch1[i];
    }
    million[j] = '\0';
    int nombre = atoi(million);
    printf(" %s ", chiffre[nombre]);
    printf(" million ");
    for (i = b; i < strlen(ch1) - 3; i++) {
      mille[k++] = ch1[i];
    }
    mille[k] = '\0';
    int nombre2 = atoi(mille);
    printf(" %s", chiffre[nombre2]);
    printf(" mille ");
    for (i = strlen(ch1) - 3; i < strlen(ch1); i++) {
      cent[a++] = ch1[i];
    }
    cent[a] = '\0';
    int nombre3 = atoi(cent);
    printf(" %s", chiffre[nombre3]);
  }
  // MILLLLLLLLLLLIONNNNNN EXACTE 9 NOMBRES
  else
  if (strlen(ch1) == 9) {
    char cent[3], mille[3], million[3];
    int i = 0, j = 0, k = 0, a = 0;
    for (i = 0; i < strlen(ch1) - 6; i++) {
      million[j++] = ch1[i];
    }
    mille[j] = '\0';
    int nombre = atoi(million);
    printf(" %s", chiffre[nombre]);
    printf(" million ");
    for (i = strlen(ch1) - 6; i < strlen(ch1) - 3; i++) {
      mille[k++] = ch1[i];
    }
    mille[k] = '\0';
    int nombre2 = atoi(mille);
    printf(" %s", chiffre[nombre2]);
    printf(" mille ");
    for (i = strlen(ch1) - 3; i < strlen(ch1); i++) {
      cent[a++] = ch1[i];
    }
    cent[a] = '\0';
    int nombre3 = atoi(cent);
    printf(" %s", chiffre[nombre3]);

  }
  // MILLLLLLLLLLIARRRRDDDD
  else
  if (strlen(ch1) > 9 && strlen(ch1) < 12) {
    char cent[3], mille[3], million[3], milliard[3];
    int i = 0, j = 0, k = 0, a = 0, b = 0;
    int c = strlen(ch1) % 3;
    for (i = 0; i < c; i++) {
      milliard[j++] = ch1[i];
    }
    milliard[j] = '\0';
    int nombre = atoi(milliard);
    printf(" %s", chiffre[nombre]);
    printf(" milliard ");
    for (i = c; i < strlen(ch1) - 6; i++) {
      million[k++] = ch1[i];
    }
    million[k] = '\0';
    int nombre2 = atoi(million);
    printf(" %s", chiffre[nombre2]);
    printf(" million ");
    for (i = strlen(ch1) - 6; i < strlen(ch1) - 3; i++) {
      mille[a++] = ch1[i];
    }
    mille[a] = '\0';
    int nombre3 = atoi(mille);
    printf(" %s", chiffre[nombre3]);
    printf(" mille ");
    for (i = strlen(ch1) - 3; i < strlen(ch1); i++) {
      cent[b++] = ch1[i];
    }
    cent[b] = '\0';
    int nombre4 = atoi(cent);
    printf(" %s", chiffre[nombre4]);

  }
  // MILLLLLLLLIAAAAARRRRRD EXACTE 12 NOMBRES
  else {
    char cent[3], mille[3], million[3], milliard[3];
    int i = 0, j = 0, k = 0, a = 0, b = 0;
    for (i = 0; i < strlen(ch1) - 9; i++) {
      milliard[j++] = ch1[i];
    }
    milliard[j] = '\0';
    int nombre = atoi(milliard);
    printf(" %s", chiffre[nombre]);
    printf(" milliard ");
    for (i = strlen(ch1) - 9; i < strlen(ch1) - 6; i++) {
      million[k++] = ch1[i];
    }
    million[k] = '\0';
    int nombre2 = atoi(million);
    printf(" %s", chiffre[nombre2]);
    printf(" million ");
    for (i = strlen(ch1) - 6; i < strlen(ch1) - 3; i++) {
      mille[a++] = ch1[i];
    }
    mille[a] = '\0';
    int nombre3 = atoi(mille);
    printf(" %s", chiffre[nombre3]);
    printf(" mille ");
    for (i = strlen(ch1) - 3; i < strlen(ch1); i++) {
      cent[b++] = ch1[i];
    }
    cent[b] = '\0';
    int nombre4 = atoi(cent);
    printf(" %s", chiffre[nombre4]);
  }

}

// PROCEDURE POUR LES REELS
void reel_to_lettre(char ch[]) {
  int i = 0, j = 0;
  char ent[100000], reel[100000];
  while (ch[i] != '.') {
    ent[j++] = ch[i];
    i++;
  }
  int n = i, k = 0;
  entier_to_lettre(ent);
  printf(" 'vergule'");
  //printf(" \n i = %d  n=%d  \n ",i,n);
  while (ch[n++] != '\0') {
    reel[k++] = ch[n];

  }
  entier_to_lettre(reel);
  //printf(" \n i = %d  n=%d k= %d \n ",i,n,k);

}

int main() {
  char str[111], str_moin[1234];
  do {
    printf(" donner un nombre n tel que la taille de n <12 : \n");
    scanf("%s", str);
  } while (strlen(str) > 13);

  char * k;
  char * z;
  k = Type_Nombre(str);
  if (k == "entier") {
    if (str[0] == '-') {
      printf(" moin_");
      entier_to_lettre(str);
    } else
      entier_to_lettre(str);
  }
  if (k == "reel") {

    if (str[0] == '-') {
      printf(" moin_");
      reel_to_lettre(str);
    } else
      reel_to_lettre(str);
  }
}
