#include <stdio.h> 

int main(void) {

	//Bài 4: nhập 3 số nguyên a, b, c. In ra số lớn nhất trong 3 số đó.
	//int a, b, c;
	//int max;

	//// nhap so nguyen a, b, c
	//printf("Nhap vao so nguyen a: ");
	//scanf_s("%d", &a);
	//printf("Nhap vao so nguyen b: ");
	//scanf_s("%d", &b);
	//printf("Nhap vao so nguyen c: ");
	//scanf_s("%d", &c);

	//// tim so lon nhat
	//max = a;
	//if (b > max) {
	//	max = b;
	//}
	//if (c > max) {
	//	max = c;
	//}

	//// in ra so lon nhat
	//printf("So lon nhat trong 3 so la: %d\n", max);	


	//Bài 5. Nhập vào chỉ số điện tiêu thụ trong tháng.Tính tiền điện theo quy tắc :

	//0–50 kWh : 1.800đ / kWh
	//	51–100 kWh : 2.000đ / kWh
	//	101–200 kWh : 2.500đ / kWh
	//	Trên 200 kWh : 3.000đ / kWh

	//int so_dien;
	//int tien_dien;
	//printf("Nhap vao so dien tieu thu trong thang: ");
	//scanf("%d", &so_dien);
	//if (so_dien < 0)
	//{
	//	printf("so dien khong hop le! \n");
	//}
	//else
	//{
	//	if (so_dien <= 50)
	//	{
	//		tien_dien = so_dien * 1800;
	//	}
	//	else if (so_dien <=100) {
	//		tien_dien = 50 * 1800 + (so_dien - 50) * 2000;
	//	}
	//	else if (so_dien <= 200) {
	//		tien_dien = 50 * 1800 + 50 * 2000 + (so_dien - 100) * 2500;
	//	}
	//	else {
	//		tien_dien = 50 * 1800 + 50 * 2000 + 100 * 2500 + (so_dien - 200) * 3000;
	//	}
	//	printf("So tien dien phai tra la: %d \n", tien_dien);
	//	printf("So tien dien phai tra la: %d VND \n", tien_dien);
	//	
	//}

	//Bài 6 — Menu bằng switch

	//	Tạo menu :
	//==== = MENU ==== =

	//	1. Cong
	//	2. Tru
	//	3. Nhan
	//	4. Chia
	//	yêu cầu người dung nhập 2 só a, b
	//	sau đó yêu cầu Người dùng nhập lựa chọn và in ra kết quả tương ứng
	//int a, b;
	//int luachon;
	//printf("Nhap vao so nguyen a: ");
	//scanf_s("%d", &a);
	//printf("Nhap vao so nguyen b: ");
	//scanf_s("%d", &b);
	//printf("==== = MENU ==== = \n");
	//printf("1. Cong \n");
	//printf("2. Tru \n");
	//printf("3. Nhan \n");
	//printf("4. Chia \n");
	//printf("Nhap vao lua chon cua ban: ");
	//scanf_s("%d", &luachon);
	//switch (luachon)
	//{
	//case 1:
	//	printf("Ket qua phep cong: %d\n", a + b);
	//	break;
	//case 2:
	//	printf("Ket qua phep tru: %d\n", a - b);
	//	break;
	//case 3:
	//	printf("Ket qua phep nhan: %d\n", a * b);
	//	break;
	//case 4:
	//	if (b != 0)
	//		printf("Ket qua phep chia: %d\n", a / b);
	//	else
	//		printf("Khong the chia cho 0!\n");
	//	break;
	//default:
	//	printf("Lua chon khong hop le!\n");
	//}
	
	//Bài 7 — In số chẵn
	//Yêu cầu người dùng nhập n và in ra tất cả số chẵn trong khoảng từ 1 đến n
	//Nhập : n
	//In tất cả số chẵn : 1 → n
	//Ví dụ :
	//n = 10
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf_s("%d", &n);
	if (n < 1)
	{
		printf("Vui long nhap n >= 1!\n");
	}
	else {
		printf("Cac so chan trong khoang tu 1 den %d la: ", n);
		for (int i = 2; i <= n; i += 2) {
			printf("%d ", i);
		}
		printf("\n");

	}

	
	return 0;
}