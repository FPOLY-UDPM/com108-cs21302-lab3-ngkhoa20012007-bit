/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49649]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
float soDien, tienDien;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu: ");
    scanf("%f", &soDien);     
    printf("So dien tieu thu: %.2f kWh\n", soDien); 
    scanf("%f", &soDien);  

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (soDien <= 50)
    {
        tienDien = soDien * 1000;
    }
    else if (soDien <= 100)
    {
        tienDien = 50 * 1000 + (soDien - 50) * 1200;
    }
    else
    {
        tienDien = 50 * 1000 + 50 * 1200 + (soDien - 100) * 1500;
    }

    printf("So tien dien phai tra: %.2f VND\n", tienDien);
    return 0;   
}