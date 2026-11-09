
#include <stdio.h>  // Thư viện hỗ trợ printf() và scanf()
#include <math.h>
#include <stdlib.h> // Thư viện hỗ trợ rand() và srand()>
#include <time.h>  // Thư viện hỗ trợ time()>

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

    ////bài 2: yêu cầu nhập vào 2 số nguyên a,b
    //// in ra tổng hiệu tích thương cho mỗi dòng
    //// + - * /

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



    ////KẾT HỢP CÁC CÂU LỆNH WHILE, FOR AND IF TRONG MỘT BÀI TOÁN
    
    int a, b;

    char continues = 'y';

    while (continues == 'y' || continues == 'Y') {

        for (int i = 1; i <=3; i++)
        {

            printf("**** Program Is Run ******  \n");

            //hiển thị lần tính toán thứ mấy
            printf("******* The Calculator Number: %d *******\n", i);

            //nhập số nguyên a và b
            printf("Input An Integer a:  \n");
            scanf_s("%d", &a);
             
            printf("Input An Integer b:  \n");
            scanf_s("%d", &b);
            // nhập các phép tính + - * /

            printf("*** Calculation addition: %d \n", a + b);
            printf("*** Calculation subtraction: %d  \n", a - b);
            printf("*** Calculation multiplication: %d \n", a * b);

            // kiểm tra b có đủ điều kiện tính toán không
            if (b!=0)
            {
                printf("*** Calculation division: %.2f\n", (float)a / b);

            }
            else {
                printf("*** Can't divide by 0 ! ");
            }

        }
        // hỏi người dùng có muốn tiếp tục chương trình tính toán
        printf("**** Would Like You To Continue To The Program ? (Y/N) \n");
        scanf_s(" %c", &continues, 1);

    }


    printf("Finish Program");



    int diem = 10;
    if (diem >10)
    {
        printf("diem khong hop le \n");
    }
    else if (diem >= 8 )
    {
        printf("loai gioi \n");

    }
    else if (diem >= 6.5 )
    {
        printf("loai kha \n");

    }
    else if (diem >= 5 )
    {
        printf("loai trung binh \n");

    }
    else {
        printf("loai yeu \n");

    }


    //bài 1
    // viết chương trình pt bậc 2: ax^2 + bx + c= 0 với a,b,c nhập từ bàn phím
    // tính delta = b*2 -4ac
    // nếu delta > 0 thì phương trình có 2 nghiệm x1=(-b+sqrt(delta))/2a, x2 =(-b-sqrt(delta))/2a
    // nếu delta = 0 thì pt có 1 nghiệm kép x1 = x2 = -b /2a
    // nếu delta < 0 thì pt vô nghiệm
    //cần #include <math.h>

    int a, b, c;
    int delta;

    printf("giai phuong trinh bac 2 ax^2 + bx + c= 0 \n");
    printf("nhap a:   \n");
    scanf_s("%d", &a);
    printf("nhap b:   \n");
    scanf_s("%d", &b);
    printf("nhap c:   \n");
    scanf_s("%d", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / 2*a;
        float x2 = (-b - sqrt(delta)) / 2 * a;
        printf("phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 =%.2f \n", x1, x2);

    }
    else if (delta == 0) {

        float x = -b / (2 * a);
        printf("phuong trinh co 1 nghiem kep x1=x2=%.2f \n", x);

    }
    else
    {
        printf("phuong trinh vo nghiem");
    }


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

    //// vd: in bảng cửu chương
    for (int i = 1; i <= 10;i++) {
        printf("2 * %d = %d \n", i, 2 * i);
    }


    //// in bảng cửu chương từ bảng cửu chương 2 đến bảng cửu chương 9
    //

    for (int i = 2; i <= 9; i++)
    {
        // Vòng for bên ngoài:
        // i = 2: Bắt đầu bảng cửu chương 2
        // i = 3: Chuyển sang bảng cửu chương 3
        // ...
        // i = 9: Bảng cửu chương cuối cùng

        printf("Bang cuu chuong %d\n", i);

        // Vòng for bên trong:
        // j bắt đầu từ 1 và chạy đến 10
        // Mỗi lần j tăng thêm 1 đơn vị

        for (int j = 1; j <= 10; j++)
        {
            // In phép nhân:
            // i: Số của bảng cửu chương hiện tại
            // j: Số nhân từ 1 đến 10
            // i * j: Kết quả phép nhân

            printf("%d x %d = %d\n", i, j, i * j);
        }

        // Sau khi vòng for bên trong chạy đủ 10 lần,
        // in thêm một dòng trống để phân cách các bảng cửu chương.

        // Sau đó vòng for bên ngoài mới tăng i lên 1
        // và bắt đầu bảng cửu chương tiếp theo.
        printf("\n");
    }


    //yc: người dùng nhập từ bàn phím số tự nhiên n
    // tinhs  và in ra giai thừa của n (n!)

     // B1: Khai bao bien n de luu so nguoi dung nhap
    // B2: Khai bao bien gt de luu ket qua giai thua
    int n = 0;
    int gt = 1;

    // B3: Yeu cau nguoi dung nhap so tu nhien n
    printf("Nhap n: ");
    scanf_s("%d", &n);

    // B4: Kiem tra n co phai so tu nhien khong
    if (n < 0)
    {
        printf("Vui long nhap so tu nhien!\n");
    }
    else
    {
        // B5: Su dung vong lap for de tinh giai thua
        // i bat dau tu 1 va tang dan den n
        for (int i = 1; i <= n; i++)
        {
            // Nhan ket qua hien tai voi i
            gt = gt * i;
        }

        // B6: In ket qua giai thua
        printf("%d! = %d\n", n, gt);
    }


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

    //Bài 8 — Tổng từ 1 đến n
    //Yêu cầu người dùng nhập n và in ra kết quả là tổng từ 1 đến n
    //    Ví dụ :
    //n = 5
    //    Output : 15
    int n;
	printf("Nhap vao so nguyen n: ");
	scanf_s("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
	{
		sum += i;

    }
	printf("Tong tu 1 den %d la: %d\n", n, sum);


    /*

    # Bài 16: Trò chơi đoán số

    B

    Chương trình sinh ra một số bí mật trong khoảng 0-99. Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng.

    Sau mỗi lần nhập:

    Nếu số nhập nhỏ hơn số bí mật → thông báo "Lort hon"

    Nếu số nhập lớn hơn → thông báo "Nho hon"

    Nếu đúng → thông báo số lần đoán.
    
    */
	srand(time(NULL));  // Khởi tạo seed cho hàm rand() dựa trên thời gian hiện tại
	int x = rand() % 100;  // Sinh số ngẫu nhiên trong khoảng từ 0 đến 99
	printf("Chuong trinh da sinh ra mot so bi mat trong khoang 0-99. Hay doan so do!\n");
	int n = 0;  // Biến đếm số lần đoán
    int count = 0; // Biến đếm số lần đoán
    do
    {
		printf("Nhap so du doan cua ban (0-99): ");
		scanf_s("%d", &n);
        count++;
        if (n > x)
        {
            printf("Nho hon \n");
        }
        else {
            if (n < x)
            {
                printf("Lon hon \n");
			}
			else
			{
				printf("Chuc mung ban da doan dung so bi mat %d sau %d lan doan! \n", x, count);
			}
        }

    } while (n != x);

    //giả lập atm
    int step = 1;
    int mat_khau_user;
    int mat_khau_sys = 123456;
    int so_tien_rut = 0;
    int so_du_atm = 10000000;
    char tieptuc = 'y';
    int so_lan_sai = 0;
    // Vong lap giao dich
    while (tieptuc == 'y' || tieptuc == 'Y')
    {
        // Khoi tao lai trang thai cho giao dich moi
        step = 1;
        so_lan_sai = 0;

        while (step != 5)
        {
            switch (step)
            {
                // Buoc 1: Nhap mat khau
            case 1:
                printf("Nhap mat khau: ");
                scanf_s("%d", &mat_khau_user);

                if (mat_khau_user == mat_khau_sys)
                {
                    printf("Dang nhap thanh cong!\n");
                    step = 2;
                }
                else
                {
                    so_lan_sai++;

                    printf("Mat khau khong dung!\n");

                    if (so_lan_sai >= 3)
                    {
                        printf("Ban da nhap sai mat khau 3 lan!\n");
                        step = 5;
                    }
                    else
                    {
                        printf("Ban con %d lan thu.\n", 3 - so_lan_sai);
                    }
                }

                break;

                // Buoc 2: Nhap so tien muon rut
            case 2:
                printf("Nhap so tien can rut: ");
                scanf_s("%d", &so_tien_rut);

                step = 3;
                break;

                // Buoc 3: Kiem tra so du ATM
            case 3:
                if (so_tien_rut <= 0)
                {
                    printf("So tien rut khong hop le!\n");
                    step = 2;
                }
                else if (so_tien_rut > so_du_atm)
                {
                    printf("So tien rut vuot qua so du ATM!\n");
                    step = 2;
                }
                else
                {
                    step = 4;
                }

                break;

                // Buoc 4: Thuc hien giao dich
            case 4:
                so_du_atm -= so_tien_rut;

                printf("Rut tien thanh cong: %d VND\n", so_tien_rut);
                printf("So du ATM con lai: %d VND\n", so_du_atm);

                step = 5;
                break;
            }
        }

        // Neu nhap sai mat khau 3 lan thi ket thuc
        if (so_lan_sai >= 3)
        {
            break;
        }

        // Buoc 5: Hoi co muon tiep tuc khong
        printf("\nBan co muon tiep tuc rut tien khong? (y/n): ");
        scanf_s(" %c", &tieptuc, 1);
    }

    printf("\nKet thuc chuong trinh!\n");

    ////6. Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên
    //    Đề bài : Nhập vào 2 số nguyên A, B.in ra màn hình ước số chung lớn nhất của A và B
    //    * /

        int a, b;
        int du;

        printf("Nhap so nguyen A: ");
        scanf_s("%d", &a);
        printf("Nhap so nguyen B: ");
        scanf_s("%d", &b);

        if (a < 0 || b < 0) {
        	printf("Vui long nhap so nguyen duong \n");
        }
        else {
        	while (b != 0) {
        		du = a % b;
        		a = b;
        		b = du;
        	}
        	printf("Uoc so chung lon nhat la: %d \n", a);
        }
        return 0;

        /*
        * 68 Viết chương trình tìm bội chung nhỏ nhất của 2 số nguyên
    Đề bài: Nhập vào 2 số nguyên A, B. in ra màn hình bội chung nhỏ nhất của A và B
        */

        int a, b;
        int du;
        printf("Nhap so nguyen A: ");
        scanf_s("%d", &a);
        printf("Nhap so nguyen B: ");
        scanf_s("%d", &b);
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        if (a == 0 || b == 0) {
        	printf("Khong co boi chung nho nhat \n");
        }
        else {
        	int ucln = a;
        	int bcnn = b;
        	while (bcnn != 0) {
        		du = ucln % bcnn;
        		ucln = bcnn;
        		bcnn = du;
        	}
        	bcnn = (a * b) / ucln;
        	printf("Boi chung nho nhat la: %d \n", bcnn);
        }
        return 0;

        /*

    9. Viết chương trình mô phỏng việc trả tiền của máy ATM.
    số tiền nhập vào phải là bội số của 50000. số tiền phải trả về đầy đủ các mệnh giá từ 50000 đến 500000
    In ra số lượng tờ tiền được rút.
    VD: người dùng nhập vào 1000000.
    In ra:
    2 x 50000
    2 x 100000
    1 x 200000
    1 x 500000*/

     int tienrut;

    // Mang luu cac menh gia tien, sap xep tu lon den nho
    int menhgia[] = { 500000, 200000, 100000, 50000 };

    int conlai;

    //  Nhap so tien can rut
    printf("Nhap so tien can rut (boi so cua 50000): ");
    scanf_s("%d", &tienrut);

    //  Kiem tra so tien
    if (tienrut <= 0)
    {
        printf("So tien rut phai lon hon 0!\n");
    }
    else if (tienrut % 50000 != 0)
    {
        printf("So tien rut phai la boi so cua 50000!\n");
    }
    else
    {
        printf("So tien rut: %d\n", tienrut);

        //  Duyet tung menh gia trong mang
        for (int i = 0; i < 4; i++)
        {
            // Tinh so to tien cua menh gia hien tai
            int soluong = tienrut / menhgia[i];

            // Neu so luong lon hon 0 thi in ra
            if (soluong > 0)
            {
                printf("%d x %d\n", soluong, menhgia[i]);

                // Cap nhat so tien con lai
                tienrut -= soluong * menhgia[i];
            }
        }
    }




    
    return 0;  // Kết thúc chương trình thành công
}