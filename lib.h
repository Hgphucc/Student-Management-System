#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct SinhVien
{
    char hoTen[50];
    char mssv[20];
    char lopHoc[20];
    float GPA;
    struct SinhVien* next;
} SinhVien;

extern SinhVien* head;  // Danh sach sinh vien goc

void xoa_xuong_dong(char x[]);//Ham xoa ky tu /n
const char* layTen(const char* hoTen);//Ham loai bo ho va ten dem,

void ghi_file(const char* tenFile);
void doc_file(const char* tenFile);

void nhap_mot_sinh_vien(SinhVien* sv);
void them_sinh_vien(SinhVien svMoi);
void hien_thi_danh_sach(SinhVien* head);
void xoa_sinh_vien(char mssv[]);
void sua_thong_tin(char mssv[]);
void thong_ke(SinhVien* danh_sach);

SinhVien* tim_theo_mssv(char mssv[]);
void hien_thi_diem_cao_nhat(SinhVien* head);
void tim_theo_khoang_diem(float min, float max);

void sap_xep_theo_ten(SinhVien* head);
void sap_xep_theo_gpa(SinhVien* head);

void menu_sap_xep();// Ham menu con: Tim kiem
void menu_tim_kiem();// Ham menu con: Sap xep
int menu();// Ham de in cac chuc nang va lay lua chon