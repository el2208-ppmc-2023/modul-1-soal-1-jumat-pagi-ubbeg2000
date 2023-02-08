/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, n;

    // input banyaknya deret
    printf("Masukkan panjang deret: ");
    scanf("%d", &n);

    //cek
    if (n==0)
    {
        printf("Tidak ada deret");
        exit(0);
    }

    int awal, akhir;
    printf("Masukkan awal interval: ");
    scanf("%d", &awal);

    //cek
    if (awal>n)
    {
        printf("Tidak bisa! karena awal interval melewati panjang deret");
        exit(0);
    }

    printf("Masukkan akhir interval: ");
    scanf("%d", &akhir);

    //cek
    if (akhir>n)
    {
        printf("Tidak bisa! karena akhir interval melewati panjang deret");
        exit(0);
    }
    if (awal>akhir)
    {
        printf("Tidak bisa! karena awal interval lebih besar dari akhir interval");
        exit(0);
    }

    // inisialisasi baris pertama dan kedua
    int b1 = 1, b2 = 1;

    // baris selanjutnya
    int nextTerm = b1 + b2;

    // inisialisasi variabel banyaknya bilangan ganjil
    int genap = 0;

    if (awal==1)
    {
        if (akhir==1){
            printf("Deret Fibonacci dari baris %d sampai %d adalah 1",awal,akhir);
        }
        else{
            printf("Deret Fibonacci dari baris %d sampai %d adalah 1 1",awal,akhir);
        }
    }
    else if (awal==2)
    {
        printf("Deret Fibonacci dari baris %d sampai %d adalah 1",awal,akhir);
    }
    else if (awal>2)
    {
        printf("Deret Fibonacci dari baris %d sampai %d adalah ",awal,akhir);
    }

    // output baris selanjutnya
    for (i = 3; i <= n; ++i) {
        if (i>=awal && i<=akhir)
        {
            printf("%d ", nextTerm);
            if (nextTerm%2==0)
            {
                genap += 1;
            }
        }
        b1 = b2;
        b2 = nextTerm;
        nextTerm = b1 + b2;
    }
    printf("\nBanyaknya bilangan genap pada deret Fibonacci dari %d sampai %d adalah %d",awal,akhir,genap);

  return 0;
}
