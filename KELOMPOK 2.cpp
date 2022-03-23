#include <iostream>
#include <conio.h>
using namespace std;

class kedai{
	private:
		int m, jml, harga, total, kembalian, bayar;
	public:
		void pilih();
		void menu();
		void nota();
};

void kedai::menu(){
	cout<<"Menu: "<<endl;
	cout<<"1. Ayam Goreng  (Rp. 17.000)"<<endl;
	cout<<"2. Ayam Bakar   (Rp. 21.000)"<<endl;
}

void kedai::pilih(){
	cout<<"Pilih Menu : ";cin>>m;
	if(m==1){
		cout<<"Masukkan Jumlah : ";cin>>jml;
		harga=jml*17000;
		if (harga>=45000){
			cout<<endl;
			total=harga-(0.1*(jml*17000));
			cout<<"-------------------------------------------------"<<endl;
			cout<<"                     KEDAI AYAM                  "<<endl;
			cout<<"-------------------------------------------------"<<endl<<endl;
			cout<<"   Menu      ||     Jumlah    ||   Total"<<endl;
			cout<<"Ayam Goreng  ||       "<<jml<<"       ||  Rp. "<<total<<endl;
			cout<<"                   Total Bayar :  Rp. ";cin>>bayar;
			kembalian=bayar-total;
			cout<<"                   Kembalian   :  Rp. "<<kembalian<<endl;
		}
		else{
			cout<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<"                     KEDAI AYAM                  "<<endl;
			cout<<"-------------------------------------------------"<<endl<<endl;
			cout<<"Menu         ||     Jumlah    ||   Total"<<endl;
			cout<<"Ayam Goreng  ||       "<<jml<<"       ||  Rp. "<<harga<<endl;
			cout<<"                   Total Bayar :  Rp. ";cin>>bayar;
			kembalian=bayar-harga;
			cout<<"                   Kembalian   :  Rp. "<<kembalian<<endl;
		}
	}
	else if(m==2){
		cout<<"Masukkan Jumlah : ";cin>>jml;
		harga=jml*21000;
		if (harga>=45000){
			cout<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<"                      KEDAI AYAM                  "<<endl;
			cout<<"-------------------------------------------------"<<endl<<endl;
			total=harga-(0.1*(jml*21000));
			cout<<"   Menu      ||     Jumlah    ||   Total"<<endl;
			cout<<"Ayam Bakar   ||       "<<jml<<"       ||  Rp. "<<total<<endl;
			cout<<"                   Total Bayar :  Rp. ";cin>>bayar;
			kembalian=bayar-total;
			cout<<"                   Kembalian   :  Rp. "<<kembalian<<endl;
		}
		else{
			cout<<endl;
			cout<<"-------------------------------------------------"<<endl;
			cout<<"                     KEDAI AYAM                  "<<endl;
			cout<<"-------------------------------------------------"<<endl<<endl;
			cout<<"Menu         ||     Jumlah    ||   Total"<<endl;
			cout<<"Ayam Bakar   ||       "<<jml<<"       ||  Rp. "<<harga<<endl;
			cout<<"                   Total Bayar :  Rp. ";cin>>bayar;
			kembalian=bayar-harga;
			cout<<"                   Kembalian   :  Rp. "<<kembalian<<endl;
		}
	}
	else{
		cout<<"Menu Tidak Terdaftar"<<endl;
	}
}

void kedai::nota(){
	
}

int main(){
	kedai x;
	x.menu();
	x.pilih();
	getch();
}
