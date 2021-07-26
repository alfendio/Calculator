#include <stdio.h>
#include <stdlib.h>

typedef int Var1;
typedef float Var2;
typedef void Var3;

Var2 Tambah(Var2 nilai1, Var2 nilai2){
    return nilai1+nilai2;
}

Var2 Kurang(Var2 nilai1, Var2 nilai2){
    return nilai1-nilai2;
}

Var2 Bagi(Var2 nilai1, Var2 nilai2){
    return nilai1/nilai2;
}

Var2 Kali(Var2 nilai1, Var2 nilai2){
    return nilai1*nilai2;
}

Var3 Kuadrat(Var2 nilai1){
    printf("%.2f", nilai1*nilai1);
}

Var2 Faktorial(Var2 num) {
  if(num == 0){
    return 1;
  }
  return num * Faktorial(num-1);
}

int main()

{
 Var1 c, menu;
 Var2 a, b, hasil;
 do{
 printf("672019222\n");
 printf("Program Kalkulator\n\n");
 printf("Menu :\n");
 printf("1. Penjumlahan\n");
 printf("2. Pengurangan\n");
 printf("3. Pembagian\n");
 printf("4. Perkalian\n");
 printf("5. Pangkat 2\n");
 printf("6. Faktorial\n");
 printf("7. Keluar\n");
 printf("Pilihan : ");
 scanf("%d",&menu);
 printf("-------------------------------\n");

 switch (menu){
        case 1:
        printf("Penjumlahan :\n");
        printf("Masukan angka pertama : ");
        scanf("%f", &a);
        printf("Masukan angka kedua   : ");
        scanf("%f", &b);
        hasil = a + b;
        printf("Hasil dari %.2f + %.2f adalah %.2f\n", a, b, Tambah(a,b));
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        break;

        case 2:
        printf("Pengurangan :\n");
        printf("Masukan angka pertama : ");
        scanf("%f", &a);
        printf("Masukan angka kedua   : ");
        scanf("%f", &b);
        hasil = a - b;
        printf("Hasil dari %.2f - %.2f adalah %.2f\n", a, b, Kurang(a,b));
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        break;

        case 3:
        printf("Pembagian :\n");
        printf("Masukan angka pertama : ");
        scanf("%f", &a);
        printf("Masukan angka kedua   : ");
        scanf("%f", &b);
        hasil = a / b;
        printf("Hasil dari %.2f : %.2f adalah %.2f\n", a, b, Bagi(a,b));
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        break;

        case 4:
        printf("Perkalian :\n");
        printf("Masukan angka pertama : ");
        scanf("%f", &a);
        printf("Masukan angka kedua   : ");
        scanf("%f", &b);
        hasil = a * b;
        printf("Hasil dari %.2f x %.2f adalah %.2f\n", a, b, Kali(a,b));
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        break;

        case 5:
        printf("Pangkat 2 :\n");
        printf("Masukan angka : ");
        scanf("%f", &a);
        hasil = a * a;
        printf("Hasil pangkat 2 dari %.2f adalah ", a);
        Kuadrat(a);
        printf("\n");
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        break;

        case 6:
        printf("Faktorial :\n");
        printf("Masukkan angka : ");
        scanf("%d", &c);
        hasil = Faktorial(c);
        printf("Hasil faktorial dari %d adalah %.2f\n", c, hasil);
        system("pause >nul | echo Klik terserah untuk lanjut");
        system("cls");
        }
        }while(menu!=7);
        printf("Terima Kasih\n");
        printf("-------------------------------\n");
    return 0;
}
