#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char abc;
	int xyz;
	float length;
	double area;
	long liteyrs;
	short arm ;
	printf("\nNhap vao abc = ");
    scanf("%c", &abc);
    printf("\nNhap vao xyz = ");
    scanf("%i", &xyz);
    printf("\nNhap vao length = ");
    scanf("%f", &length);
    printf("\nNhap vao area = ");
    scanf("%lf", &area);
    printf("\nNhap vao liteyrs = ");
    scanf("%ld", &liteyrs);
	printf("\nNhap vao arm= ");
    scanf("%d", &arm);
    printf("\nSo ban vua nhap la:%c",abc);
    printf("\nSo ban vua nhap la:%i",xyz);
     printf("\nSo ban vua nhap la:%f",length);
    printf("\nSo ban vua nhap la:%lf",area);
    printf("\nSo ban vua nhap la:%ld",liteyrs);
    printf("\nSo ban vua nhap la:%d",arm);
	return 0;
}
