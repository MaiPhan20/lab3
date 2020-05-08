#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float banKinh;
	float dienTich;
	float chuVi;
    printf("Nhap vao ban kinh = ");
    scanf("%f", &banKinh);
    chuVi=3.14*2*banKinh;
      printf("\nchu vi la = %f", chuVi);
    dienTich=3.14*banKinh*banKinh;
     printf("\ndienTich = %f", dienTich);
	return 0;
	

}
