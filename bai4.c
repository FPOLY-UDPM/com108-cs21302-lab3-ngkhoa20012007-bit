/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49649]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    
    // Khai báo biến

float choice;
    // Nhập dữ liệu
    printf("Menu chuong trinh:\n"); 
    printf("1. Giai phuong trinh bac 1\n");
    printf("2. Giai phuong trinh bac 2\n");
    printf("3. Tinh tien dien\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%f", &choice);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch ((int)choice)
    {
        case 1:
            // Gọi hàm giải phương trình bậc 1
            break;
        case 2:
            // Gọi hàm giải phương trình bậc 2
            break;
        case 3:
            // Gọi hàm tính tiền điện
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
    return 0;   
}