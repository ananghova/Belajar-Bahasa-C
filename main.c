#include <stdio.h>
#include <stdlib.h>

enum Studio { REGULAR = 1, PREMIUM = 2, IMAX = 3 };

int main() {
    enum Studio studio;
    int pilihan;
    int jumlah;
    int harga = 0;
    int total;
    int diskon = 0;

    printf("=== TIKET BIOSKOP ===\n");

    printf("Pilih studio:\n");
    printf("1. Regular - Rp 40000\n");
    printf("2. Premium - Rp 65000\n");
    printf("3. IMAX    - Rp 85000\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    if (pilihan < 1 || pilihan > 3) {
        printf("Pilihan salah!\n");
        return 0;
    }

    studio = (enum Studio)pilihan;

    switch (studio) {
        case REGULAR:
            harga = 40000;
            printf("Anda memilih studio Regular\n");
            break;
        case PREMIUM:
            harga = 65000;
            printf("Anda memilih studio Premium\n");
            break;
        case IMAX:
            harga = 85000;
            printf("Anda memilih studio IMAX\n");
            break;
    }

    printf("Jumlah tiket: ");
    scanf("%d", &jumlah);

    if (jumlah <= 0) {
        printf("Jumlah tidak valid!\n");
        return 0;
    }

    total = harga * jumlah;

    if (jumlah >= 5) {
        diskon = total / 10;
    } else if (jumlah >= 3) {
        diskon = total / 20;
    } else {
        diskon = 0;
    }

    total = total - diskon;

    printf("\n=== STRUK ===\n");
    printf("Harga per tiket : Rp %d\n", harga);
    printf("Jumlah tiket    : %d\n", jumlah);
    printf("Diskon          : Rp %d\n", diskon);
    printf("Total bayar     : Rp %d\n", total);
    printf("Terima kasih!\n");

    system("pause");
    return 0;
}
