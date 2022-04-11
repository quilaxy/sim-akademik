#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		system("CLS || clear"); 
		cout << "================================================" << endl;
		cout << "Selamat datang di Universitas X" << endl;
		cout << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tendik" << endl << endl;
		cout << "================================================" << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		cout << endl;
		cout << "================================================" << endl;

		switch (menu_terpilih) {
			case 1:
				{
					cout << "Input Data Mahasiswa" << endl << endl;
					string nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					cout << "Nama		: ";
					cin.ignore();
					getline(cin, nama);
					cout << "Tanggal Lahir	: ";
					cin >> dd;
					cout << "Bulan Lahir	: ";
					cin >> mm;
					cout << "Tahun Lahir	: ";
					cin >> yy;
					cout << "NRP		: ";
					cin >> nrp;
					cout << "Departemen	: ";
					cin.ignore();
					getline(cin, departemen);
					cout << "Tahun Masuk	: ";
					cin >> tahunmasuk;

					mahasiswa mhs(to_string(recMhs.size() + 1), nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					cout << "Input Data Dosen" << endl << endl;
					string nama, npp, departemen;
					int dd, mm, yy;
					cout << "Nama		: ";
					cin.ignore();
					getline(cin, nama);
					cout << "Tanggal Lahir	: ";
					cin >> dd;
					cout << "Bulan Lahir	: ";
					cin >> mm;
					cout << "Tahun Lahir	: ";
					cin >> yy;
					cout << "NPP		: ";
					cin >> npp;
					cout << "Departemen	: ";
					cin.ignore();
					getline(cin, departemen);

					dosen dsn(to_string(recDosen.size() + 1), nama, dd, mm, yy, npp, departemen);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					cout << "Input Data Tenaga Kependidikan" << endl << endl;
					string nama, npp, unit;
					int dd, mm, yy;
					cout << "Nama		: ";
					cin.ignore();
					getline(cin, nama);
					cout << "Tanggal Lahir	: ";
					cin >> dd;
					cout << "Bulan Lahir	: ";
					cin >> mm;
					cout << "Tahun Lahir	: ";
					cin >> yy;
					cout << "NPP		: ";
					cin >> npp;
					cout << "Unit		: ";
					cin.ignore();
					getline(cin, unit);

					tendik tndk(to_string(recTendik.size() + 1), nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tndk);
				}
				break;
			case 4:
				{
					cout << "Daftar Mahasiswa" << endl << endl;
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Id		: " << recMhs[i].getId() << endl;
						cout << "Nama		: " << recMhs[i].getNama() << endl;
						cout << "Tanggal Lahir	: " << recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP		: " << recMhs[i].GetNRP() << endl;
						cout << "Departemen	: " << recMhs[i].GetDepartemen() << endl;
						cout << "Tahun Masuk	: " << recMhs[i].GetTahunMasuk() << endl;
						cout << endl;
					}
					cout << "================================================" << endl;
					cout << "Enter untuk kembali ke Menu Utama";
					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
			case 5:
				{
					cout << "Daftar Dosen" << endl << endl;
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Id		: " << recDosen[i].getId() << endl;
						cout << "Nama		: " << recDosen[i].getNama() << endl;
						cout << "Tanggal Lahir	: " << recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-" << recDosen[i].getTahunLahir() << endl;
						cout << "NRP		: " << recDosen[i].getNPP() << endl;
						cout << "Departemen	: " << recDosen[i].GetDepartemen() << endl;
						cout << endl;
					}
					cout << "================================================" << endl;
					cout << "Enter untuk kembali ke Menu Utama";
					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
			case 6:
				{
					cout << "Daftar Tenaga Kependidikan" << endl << endl;
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Id		: " << recTendik[i].getId() << endl;
						cout << "Nama		: " << recTendik[i].getNama() << endl;
						cout << "Tanggal Lahir	: " << recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-" << recTendik[i].getTahunLahir() << endl;
						cout << "NRP		: " << recTendik[i].getNPP() << endl;
						cout << "Unit		: " << recTendik[i].getUnit() << endl;
						cout << endl;
					}
					cout << "================================================" << endl;
					cout << "Tekan Enter untuk kembali ke Menu Utama";
					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
		}
	}

	return 0;
}
