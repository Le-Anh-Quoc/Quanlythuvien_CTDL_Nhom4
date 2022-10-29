#pragma once
#include<iostream>
#include<string>     //sử dụng để đọc kiểu dữ liệu chuỗi (có khoảng trắng)
#include<fstream>	 //sử dụng để nhập xuất dữ liệu từ file
#include<iomanip>	//su dung cho setw
using namespace std;

// khai báo đối tượng sách
class Sach {
	string masach, tensach, tacgia, nhaxuatban, giaban, namphathanh, sotrang, ngaynhapkho, tinhtrangsach;
public:

	Sach(string _masach = "", string _tensach = "", string _tacgia = "", string _nhaxuatban = "", string _giaban = "", string _namphathanh = "", string _sotrang = "", string _ngaynhapkho = "", string _tinhtrangsach = "");
	Sach(const Sach& s);
	~Sach();

	void themSach(Sach& s);
	void cap_nhat_sach(Sach arr[1000], int& n, bool f);
	void xoaSach(Sach arr[1000], int& n);
	int timSach(Sach arr[1000], int sl, string id);

	void xuatTieuDe();
	void xuat();
	void layThongTinDSSach(Sach arr[1000], int& sl);
	void tinhTrangSach(Sach arr[1000], int sl, string id, string cd);

};