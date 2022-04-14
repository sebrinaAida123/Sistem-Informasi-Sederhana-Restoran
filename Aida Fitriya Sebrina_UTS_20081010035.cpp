#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std; 

void line(){
	for(int i=0; i<50; i++){
		cout << "="; 
	}cout<< endl; 
}

class Menu{
	public: 
	int a; //makan
	int b; //minum
	int c; //porsi
	int tot; //total keseluruhan pesanan
	int tot1; //menghitung ppn
	int x; //jumlah uang yang dibayarkan
	int z; //kembalian
	int d; //total harga makanan
	int f; //total minuman
	string byr; //jenis pembayaran 
	
	void head(){
		 
		line(); 
		cout << "  SELAMAT DATANG DI RESTORAN AIDA" << endl;
		cout << "	   Surabaya-Indonesia " << endl; 
		cout << "   Jam Kerja 08.00-22.00 " << endl; 
		line(); 
		cout << "\n"; 
	}
	
	void makanan(){
		line(); 
		cout << "	   DAFTAR MENU MAKANAN " << endl; 
		line(); 
		cout << "1. Soto Ayam + Nasi   : Rp. 12.000"<< endl; 
		cout << "2. Soto Daging + Nasi : Rp. 18.000"<<endl;
		cout << "Pilih menu makanan (1-2) : "; cin >> a; 
		cout << "\n"; 
	}
	
	void minuman(){
		line();  
		cout << "	    DAFTAR MINUMAN " <<endl; 
		line();  
		cout << "1. Es Teh Manis/Tawar : Rp. 3000"<<endl; 
		cout << "2. Es Jeruk Manis     : Rp. 4000"<<endl; 
		cout << "Pilih minuman (1-2) : " ; cin >> b; 
		cout << "\n"; 
	}
	
	void DafPesan(){
		 
		cout << "Daftar Pesanan anda " << endl; 
		if(a==1){
			cout << "1. Soto Ayam + Nasi = Rp.12.000" << endl;
			cout << "Masukan Jumlah Pesanan : " ; cin >> c; 
			int a=12000; 
			d= a*c; 
			cout << "Total Makanan : " << d << endl; 
			cout << "\n";  
		}else if(a==2){
			cout << "2. Soto Daging + Nasi = Rp.18.000" <<endl;
			cout << "Masukkan Jumlah Pesanan : "; cin >> c; 
			int a=18000; 
			d=a*c; 
			cout << "Total Makanan : " << d << endl; 
			cout << "\n"; 
		} else {
			cout << "Pesanan Tidak Dapat Diproses" << endl; 
			cout << "Harap Masukkan Angka dengan Benar" << endl;
			cout << "\n";  
		}
		
		if(b==1){
			cout << "1. Es Teh Manis/Tawar : Rp.3000" << endl; 
			cout << "Masukkan Jumlah Pesanan : "; cin >> c; 
			int b=3000; 
			f=b*c; 
			cout << "Total Minuman : " << f << endl; 
			cout << "\n";
		}else if(b==2){
			cout << "2. Es Jeruk Manis : Rp.4000" << endl;
			cout << "Masukkan Jumlah Pesanan : "; cin >> c; 
			int b=3000; 
			f=b*c; 
			cout << "Total Minuman : " << f << endl; 
			cout << "\n";  
		}else {
			cout << "Pesanan Tidak Dapat DiProses" << endl; 
			cout << "Harap Masukkan Angka dengan Benar" << endl;
			cout << "\n"; 
		} 
		tot1 = (d+f)*0.1;
		tot = d+f+tot1;   
		cout << "Biaya PPN 10% : Rp." << tot1 << endl; 
		cout << "Total Pesanan Anda(sudah termasuk PPN) : Rp." << tot << endl;
		cout << "\n";   
	}
	
	void pembayaran(){
		line(); 
		cout << "Jumlah Uang yang Anda Bayarkan : Rp."; 
		cin >> x;
		line(); 
		cout << "	   Rincian Pembayaran" << endl;
		cout << "Jenis Pembayaran Anda(cash/lainnya) : "; 
		cin >> byr; 
		if(byr=="cash"){
			cout << " " << endl; 
		} else {
			cout << "Lainnya(gopay/ovo/dana/debit" << endl; 
		}
		z=x-tot;   
		cout << "Total yang harus anda bayarkan :  Rp. " << tot << endl;
		cout << "Uang yang anda bayarkan : Rp. " << x << endl;  
		cout << "Kembalian : Rp. " << z << endl; 
		 
	}
	void nota(){
		cout << "####### NOTA PEMBELIAN #######" << endl; 
		cout << " Kasir : Jurupah " << endl; 
		
		if(a==1){
			cout << "1. Soto Ayam + Nasi = Rp.12.000" << endl;
			cout << "Jumlah Item Pesanan : " << c << endl; 
			cout << "Total Makanan: Rp. " << d << endl; 
			 
		}else if(a==2){
			cout << "2. Soto Daging + Nasi = Rp.18.000" <<endl;
			cout << "Jumlah Item Pesanan : " << c << endl; 
			cout << "Total : Rp. " << d << endl; 
		} else {
			cout << "Terima Kasih atas kunjungan anda" << endl;   
		}
		cout << "\n"; 
		
		if(b==1){
			cout << "1. Es Teh Manis/Tawar : Rp.3000" << endl; 
			cout << "Jumlah Pesanan : " << c << endl; ; 
			cout << "Total Item Minuman : " << f << endl; 
			cout << "\n";
		}else if(b==2){
			cout << "2. Es Jeruk Manis : Rp.4000" << endl;
			cout << "Jumlah Pesanan : " << c << endl; 
			cout << "Total Item Minuman : " << f << endl; 
			cout << "\n";  
		}else {
			cout << "Terima Kasih atas Kunjungan Anda " << endl; 
		} 
		int jml; 
		jml=d+f; 
		cout << "Jumlah Biaya Pesanan : Rp." <<  jml << endl; 
		cout << "Biaya PPN 10% : Rp." << tot1 << endl; 
		cout << "Total Pesanan Anda(sudah termasuk PPN) : Rp." << tot << endl;
		cout << "Jenis Pembayaran : " << byr << endl; 
		cout << "\n";   

	}
	void manajemenStok(){
		cout << "Menu Utama Manajemen Stok"<< endl; 
		line(); 
		cout << "(I) Tampilkan Data Inventory" << endl; 
		cout << "(P) Tampilkan Pengambilan Barang" << endl; 
		cout << "(E) Exit " << endl; 
		cout << "Pilihan(I/P/E) ?";  
	}
};

struct users{
	string user_id="pegawai"; //username 
	string password="pegawai123"; //pasword 
	string namaUser="username"; 
}; users usernamee; 

struct barang{
	string namaBarang; 
	string kodeBarang; 
	int jumlahStok; 
}; 
int jumlahBarang; 

int main(){
	cout << "NAMA  : AIDA FITRIYA SEBRINA" << endl; 
	cout << "NPM   : 20081010035" << endl; 
	cout << "KELAS : PBO C081" << endl; 
	cout << "--------------TUGAS UTS---------------" << endl; 
	cout << "\n"; 
	
	cout << "  SISTEM INFORMASI RESTORAN "<< endl; 
	cout << "\n";
	
	int user; 
	string jwb; 
	cout << "Masuk Sebagai : " << endl; 
	cout << "1. Pelanggan(Melakukan Pemesanan) " <<  endl; 
	cout << "2. Pegawai(Update Manajemen Stok Bahan)" << endl; 
	cout << "Jawaban Anda(1/2):  " << endl; 
	cin >> user;  
	cout << "\n"; 
	
	if(user==1){	
		cout << "\n"; 
		Menu soto1; 
		soto1.head(); 
		soto1.makanan(); 
		soto1.minuman(); 
		soto1.DafPesan(); 
		soto1.pembayaran(); 
		cout << "\n"; 
		cout << "Apakah Anda Ingin Mencetak Struk Pembelian?(ya/tidak) " << endl; 
		cin >> jwb; 
		if(jwb=="ya"){
			cout << "\n"; 
			soto1.head(); 
			soto1.nota(); 
		} else if(jwb=="tidak"){
			cout << "Terimakasih Atas Kunjungan Anda" << endl; 
			cout << "Kritik & saran : 08556963251" << endl; 
		} else {
			cout << "Terimakasih Atas Kunjungan Anda" << endl; 
			cout << "Kritik & saran : 08556963251" << endl; 
			cout << "Mohon Menggunakan Angka" << endl;
		}
	cout << "\n"; 
	
	}else if(user==2){ 
		string user_id; 
		string password; 
		char pilih; 
		string ambilKode; 
		int jumlahAmbil; 
		int j; 
		int coba=0; 
	
	do{
		cout << " Data Aktivitas Pegawai " << endl; 
		cout << "-----------Login---------" << endl; 
		cout << "Masukkan User id : "; cin >> user_id; 
		cout << "Masukkan Password : "; cin >> password; 
		cout << "\n"; 
		if(user_id==usernamee.user_id && password==usernamee.password){
			coba=100; 
		}else{
			coba++; 
		}
		
		if(coba==3){
			exit(0); 
		}
	}while(coba<3); 
	line(); 
	cout << "Jumlah Barang yang Diinput : "; 
	cin >> jumlahBarang; 
	barang barangDagang[jumlahBarang]; 
	cout << "\n"; 
	cout << "--------Input Data--------" << endl; 
	for(int i=0; i<jumlahBarang;i++){
		cout << "Barang ke- " << i+1<< endl; 
		cout << "Kode Barang : "; cin>>barangDagang[i].kodeBarang; 
		cout << "Nama Barang : "; cin.ignore();getline(cin,barangDagang[i].namaBarang); 
		cout << "Input Stok : "; cin >> barangDagang[i].jumlahStok; 
		cout << "\n"; 
	}
	
	do{
		Menu soto1; 
		soto1.manajemenStok(); 
		cin>>pilih; 
		switch(pilih){
			case 'I': 
			cout<<setiosflags(ios::left); 
			cout<<setw(5)<<"No"<<setw(20)<<"Kode barang"<<setw(20)<<"Nama Barang"<<setw(10)<<"Stok"<<endl;
			line(); 
			for(int i=0; i<jumlahBarang;i++){
				cout<<setw(5)<<i+1<<setw(20)<<barangDagang[i].kodeBarang<<setw(20)<<barangDagang[i].namaBarang<<setw(10)<<barangDagang[i].jumlahStok<<endl; 
			} 
			break; 
			
			case 'P': 
			line(); 
			cout << "Kode Barang : "; cin>> ambilKode; 
			cout << "Jumlah yang Diambil : "; cin>>jumlahAmbil; 
			for(j=0; j<jumlahBarang;j++){
				if(ambilKode==barangDagang[j].kodeBarang){
					barangDagang[j].jumlahStok -= jumlahAmbil;
					break; 	
				}
			}
			cout << "Sisa " << barangDagang[j].namaBarang << " : " << barangDagang[j].jumlahStok<< " item" << endl; 
			line(); 
			break; 
			
			case 'E': 
			exit(0); 
			break; 
			
			default: 
			break; 
		}
		cout<< "Kembali Ke Menu Utama ? (Y/T) : "; cin>>pilih; 
	}while(pilih=='Y'); 
	cout << "\n"; 	
}
}
