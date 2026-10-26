
#include <stdio.h>  // Thư viện hỗ trợ printf() và scanf()
#include <math.h>

int main(void) {    // Hàm main: chương trình bắt đầu chạy từ đây

    //// unsigned char: kiểu số nguyên không dấu, thường có phạm vi 0 đến 255
    //unsigned char x = 1234;

    //// %d dùng để in số nguyên kiểu int.
    //// Với unsigned char, dùng %hhu để in đúng kiểu dữ liệu. 
    //printf("Gia tri x: %hhu\n", x);

    //// Khai báo biến mssv kiểu int, giá trị ban đầu là 0
    //int mssv = 0;

    //// Khai báo biến diem kiểu float, giá trị ban đầu là 0
    //float diem = 0;

    //// Yêu cầu người dùng nhập mã số sinh viên
    //printf("Nhap vao MSSV: ");

    //// %d đọc dữ liệu số nguyên và lưu vào địa chỉ của biến mssv
    //scanf_s("%d", &mssv);

    //// Yêu cầu người dùng nhập điểm
    //printf("Nhap diem: ");

    //// %f đọc dữ liệu số thực kiểu float
    //scanf_s("%f", &diem);

    //// In MSSV dạng số nguyên, điểm với 2 chữ số sau dấu thập phân
    //printf("MSSV: %d, diem: %.2f\n", mssv, diem);

    ////// bài 1 : yêu cầu user nhập vào 1 kí tự bất kì
    ////// in ra màn hình console kí tự đó hệ 10
    ////// in ra màn hình console kí tự đó hệ 16

    //char kytu;

    //printf("nhap vap 1 ky tu bat ky:  ");

    //scanf_s("%c \n", &kytu, 1);

    //printf("Ma ky tu he 10:  %d \n", (unsigned char)kytu);

    //printf("Ma ky tu he 16: %x \n", (unsigned char)kytu);

    //for (int i = 1; i <= 6; i++)
    //{
    //    char kytu;

    //    printf("nhap vap 1 ky tu bat ky:  ");

    //    scanf_s("%c \n", &kytu, 1);

    //    printf("Ma ky tu he 10:  %d \n", (unsigned char)kytu);

    //    printf("Ma ky tu he 16: %x \n", (unsigned char)kytu);

    //}

    ////bài 2: yêu cầu nhập vào 2 số nguyên a,b
    //// in ra tổng hiệu tích thương cho mỗi dòng
    //// + - * /

    //float a;
    //float b;

    //for (int i = 1; i <= 3; i++)
    //{
    //    printf("Nhap vao so nguyen a:   ");
    //    scanf_s("%f", &a);

    //    printf("Nhap vao so nguyen b:  ");
    //    scanf_s("%f", &b);

    //    printf("Phep tinh cong:  %f \n", (a + b));
    //    printf("Phep tinh hieu:  %f \n", (a - b));
    //    printf("Phep tinh tich:  %f \n", (a * b));
    //    printf("Phep tinh thuong:  %f \n", (a / b));

    //}



    ////KẾT HỢP CÁC CÂU LỆNH WHILE, FOR AND IF TRONG MỘT BÀI TOÁN
    //
    //int a, b;

    //char continues = 'y';

    //while (continues == 'y' || continues == 'Y') {

    //    for (int i = 1; i <=3; i++)
    //    {

    //        printf("**** Program Is Run ******  \n");

    //        //hiển thị lần tính toán thứ mấy
    //        printf("******* The Calculator Number: %d *******\n", i);

    //        //nhập số nguyên a và b
    //        printf("Input An Integer a:  \n");
    //        scanf_s("%d", &a);
    //         
    //        printf("Input An Integer b:  \n");
    //        scanf_s("%d", &b);
    //        // nhập các phép tính + - * /

    //        printf("*** Calculation addition: %d \n", a + b);
    //        printf("*** Calculation subtraction: %d  \n", a - b);
    //        printf("*** Calculation multiplication: %d \n", a * b);

    //        // kiểm tra b có đủ điều kiện tính toán không
    //        if (b!=0)
    //        {
    //            printf("*** Calculation division: %.2f\n", (float)a / b);

    //        }
    //        else {
    //            printf("*** Can't divide by 0 ! ");
    //        }

    //    }
    //    // hỏi người dùng có muốn tiếp tục chương trình tính toán
    //    printf("**** Would Like You To Continue To The Program ? (Y/N) \n");
    //    scanf_s(" %c", &continues, 1);

    //}


    //printf("Finish Program");



    //int diem = 10;
    //if (diem >10)
    //{
    //    printf("diem khong hop le \n");
    //}
    //else if (diem >= 8 )
    //{
    //    printf("loai gioi \n");

    //}
    //else if (diem >= 6.5 )
    //{
    //    printf("loai kha \n");

    //}
    //else if (diem >= 5 )
    //{
    //    printf("loai trung binh \n");

    //}
    //else {
    //    printf("loai yeu \n");

    //}


    //bài 1
    // viết chương trình pt bậc 2: ax^2 + bx + c= 0 với a,b,c nhập từ bàn phím
    // tính delta = b*2 -4ac
    // nếu delta > 0 thì phương trình có 2 nghiệm x1=(-b+sqrt(delta))/2a, x2 =(-b-sqrt(delta))/2a
    // nếu delta = 0 thì pt có 1 nghiệm kép x1 = x2 = -b /2a
    // nếu delta < 0 thì pt vô nghiệm
    //cần #include <math.h>

    int a, b, c;
    double delta;
    char again = 'y';
    while(again == 'y' || again == 'Y') {
        for (int i = 1; i < 3; i++)
        {
            printf("*** chuong trinh giai phuong trinh bat hai \n");
            printf("***** lan chay phuong trinh thu:   %d \n", i);
            //nhập hệ số a , b, c
            printf("nhap he so a:  ");
            scanf_s("%d", &a);
            printf("nhap he so b:  ");
            scanf_s("%d", &b);
            printf("nhap he so c:  ");
            scanf_s("%d", &c);

            // kiểm tra hệ số a
            if (a == 0)
            {
                printf("day khong phai la phuong trinh bac hai");
                if (b != 0)
                {
                    printf("Phuong trinh co mot nghiem x = %.2f\n",
                        -c / b);
                }
                else if (c == 0)
                {
                    printf("Phuong trinh co vo so nghiem.\n");
                }
                else
                {
                    printf("Phuong trinh vo nghiem.\n");
                }
            }
            else
            {
                // Tính Delta = b^2 - 4ac
                delta = b * b - 4 * a * c;

                printf("Delta = %.2f\n", delta);

                //xet truong hop co 2 nghiem phan biet 
                if (delta > 0) {
                    double x1 = (-b + sqrt(delta)) / (2 * a);
                    double x2 = (-b - sqrt(delta)) / (2 * a);

                    printf("Phuong trinh co 2 nghiem phan biet:\n");
                    printf("Nghiem x1 = %.2f\n", x1);
                    printf("Nghiem x2 = %.2f\n", x2);
                }
                else if (delta == 0)
                {
                    // Phương trình có 1 nghiệm kép
                    double x = -b / (2 * a);

                    printf("Phuong trinh co nghiem kep x = %.2f\n", x);
                }
                else
                {
                    // Delta < 0: vô nghiệm thực
                    printf("Phuong trinh vo nghiem thuc.\n");
                }

            }

        }
        // co muon tiep tuc chuong trinh khong
        printf("\nBan co muon tiep tuc khong? (y/n): ");
        scanf_s(" %c", &again, 1);

    }
    printf("Ket thuc chuong trinh");
    return 0;  // Kết thúc chương trình thành công
}