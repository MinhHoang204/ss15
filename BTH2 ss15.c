#include <stdio.h>

// �?nh nghia c?u tr�c DiemThi
struct DiemThi {
    int maSV;
    float diemToan;
    float diemVan;
};

int main() {
    // Khai b�o v� kh?i t?o m?t danh s�ch di?m thi
    struct DiemThi dsDiemThi[5];

    // Nh?p th�ng tin di?m thi cho 5 sinh vi�n
    for (int i = 0; i < 5; i++) {
        printf("Nhap ma sinh vien: ");
        scanf("%d", &dsDiemThi[i].maSV);
        printf("Nhap diem toan: ");
        scanf("%f", &dsDiemThi[i].diemToan);
        printf("Nhap diem van: ");
        scanf("%f", &dsDiemThi[i].diemVan);
    }

    // In th�ng tin di?m thi
    printf("\nDanh sach diem thi:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ma sinh vien: %d, Diem toan: %.2f, Diem van: %.2f\n",
               dsDiemThi[i].maSV, dsDiemThi[i].diemToan, dsDiemThi[i].diemVan);
    }

    return 0;
}
