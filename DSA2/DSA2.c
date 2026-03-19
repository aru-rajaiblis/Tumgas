#include <stdio.h>
#include <string.h>

int main() {
    
    // 1. Deklarasi Variabel
    int i, N;
    int jml_valid = 0, jml_tidak_valid = 0, jml_lulus = 0;
    float total_nilai = 0.0, rata_rata = 0.0;
    float max1 = -1.0, max2 = -1.0;

    char nama[][20] = {
        "Andi", "Bunga", "Citra", "Dimas", "Eka", "Farhan", 
        "Gita", "Hendra", "Intan", "Joko", "Karin", "Luthfi"
    };
    float tes_tulis[] = {82, 90, 70, 85, 92, 68, 88, 76, 95, 60, 89, 73};
    float wawancara[] = {78, 88, 75, 60, 95, 72, 84, 70, 90, 65, 91, 80};

    N = sizeof(tes_tulis) / sizeof(tes_tulis[0]);

    float nilai_akhir[12]; 
    char status[12][20]; 

    // 2. Proses Data
    for (i = 0; i < N; i++) {
        // Validasi data: Rentang 0 - 100
        if ((tes_tulis[i] < 0 || tes_tulis[i] > 100) || (wawancara[i] < 0 || wawancara[i] > 100)) {
            strcpy(status[i], "DATA TIDAK VALID");
            nilai_akhir[i] = 0.0;
            jml_tidak_valid++;
        } else {
            // Kalau Data Valid
            jml_valid++;
            nilai_akhir[i] = (0.6 * tes_tulis[i]) + (0.4 * wawancara[i]);
            total_nilai += nilai_akhir[i];

            // Penentuan Status Kelulusan
            if (nilai_akhir[i] >= 75.0) {
                strcpy(status[i], "LULUS");
                jml_lulus++;

                if (nilai_akhir[i] > max1) {
                    max2 = max1;
                    max1 = nilai_akhir[i];
                } else if (nilai_akhir[i] < max1 && nilai_akhir[i] > max2) {
                    max2 = nilai_akhir[i];
                }
            } else {
                strcpy(status[i], "TIDAK LULUS");
            }
        }
    }

    // 3. Menghitung Rata-rata Nilai Akhir dengan data yang valid
    if (jml_valid > 0) {
        rata_rata = total_nilai / jml_valid;
    } else {
        rata_rata = 0.0;
    }

    // 4. Output Hasil
    printf("=== DAFTAR HASIL PELAMAR ===\n");
    for (i = 0; i < N; i++) {
        // Cek jika statusnya "DATA TIDAK VALID"
        if (strcmp(status[i], "DATA TIDAK VALID") == 0) {
            printf("%-10s | Nilai Akhir: -       | Status: %s\n", nama[i], status[i]);
        } else {
            printf("%-10s | Nilai Akhir: %-6.2f | Status: %s\n", nama[i], nilai_akhir[i], status[i]);
        }
    }

    printf("\n=== STATISTIK ===\n");
    printf("Jumlah Data Valid        : %d\n", jml_valid);
    printf("Jumlah Data Tidak Valid  : %d\n", jml_tidak_valid);
    printf("Jumlah Pelamar Lulus     : %d\n", jml_lulus);
    printf("Rata-rata Nilai Akhir    : %.2f\n", rata_rata);

    // Output dua nilai tertinggi
    if (jml_lulus >= 2) {
        printf("Dua Nilai Tertinggi      : %.2f dan %.2f\n", max1, max2);
    } else if (jml_lulus == 1) {
        printf("Dua Nilai Tertinggi      : Hanya 1 yang lulus dengan nilai %.2f\n", max1);
    } else {
        printf("Dua Nilai Tertinggi      : Tidak ada pelamar yang lulus.\n");
    }

    return 0;
}