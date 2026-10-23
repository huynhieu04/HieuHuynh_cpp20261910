
#include <stdio.h>  // Thư viện hỗ trợ printf() và scanf()

int main(void) {    // Hàm main: chương trình bắt đầu chạy từ đây

    // unsigned char: kiểu số nguyên không dấu, thường có phạm vi 0 đến 255
    unsigned char x = 1234;

    // %d dùng để in số nguyên kiểu int.
    // Với unsigned char, dùng %hhu để in đúng kiểu dữ liệu.
    printf("Gia tri x: %hhu\n", x);

    // Khai báo biến mssv kiểu int, giá trị ban đầu là 0
    int mssv = 0;

    // Khai báo biến diem kiểu float, giá trị ban đầu là 0
    float diem = 0;

    // Yêu cầu người dùng nhập mã số sinh viên
    printf("Nhap vao MSSV: ");

    // %d đọc dữ liệu số nguyên và lưu vào địa chỉ của biến mssv
    scanf_s("%d", &mssv);

    // Yêu cầu người dùng nhập điểm
    printf("Nhap diem: ");

    // %f đọc dữ liệu số thực kiểu float
    scanf_s("%f", &diem);

    // In MSSV dạng số nguyên, điểm với 2 chữ số sau dấu thập phân
    printf("MSSV: %d, diem: %.2f\n", mssv, diem);

    // bài 1 : yêu cầu user nhập vào 1 kí tự bất kì
    // in ra màn hình console kí tự đó hệ 10
    // in ra màn hình console kí tự đó hệ 16

    char kytu;

    printf("nhap vap 1 ky tu bat ky:  ");

    scanf_s("%c \n", &kytu, 1);

    printf("Ma ky tu he 10:  %d \n", (unsigned char)kytu);

    printf("Ma ky tu he 16: %x \n", (unsigned char)kytu);

    for (int i = 1; i <= 6; i++)
    {
        char kytu;

        printf("nhap vap 1 ky tu bat ky:  ");

        scanf_s("%c \n", &kytu, 1);

        printf("Ma ky tu he 10:  %d \n", (unsigned char)kytu);

        printf("Ma ky tu he 16: %x \n", (unsigned char)kytu);

    }

    //bài 2: yêu cầu nhập vào 2 số nguyên a,b
    // in ra tổng hiệu tích thương cho mỗi dòng
    // + - * /

    float a;
    float b;

    for (int i = 1; i <= 3; i++)
    {
        printf("Nhap vao so nguyen a:   ");
        scanf_s("%f", &a);

        printf("Nhap vao so nguyen b:  ");
        scanf_s("%f", &b);

        printf("Phep tinh cong:  %f \n", (a + b));
        printf("Phep tinh hieu:  %f \n", (a - b));
        printf("Phep tinh tich:  %f \n", (a * b));
        printf("Phep tinh thuong:  %f \n", (a / b));




    }

    return 0;  // Kết thúc chương trình thành công
}
