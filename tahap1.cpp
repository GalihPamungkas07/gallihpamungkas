#include <iostream>
#include <string>
using namespace std;

class AC{
	public:
		void unggul1 (string unggul1);
		void unggul2 (string unggul2);
		void unggul3 (string unggul3);
		string tipe;
		int harga;
};

int main(){
		AC PANASONIC, SHARP, LG;
	
	PANASONIC.tipe="PANASONIC Alowa";
	SHARP.tipe="SHARP Plasmacluster";
	LG.tipe="LG Dual Cool Series";
	PANASONIC.harga=2700000;
	SHARP.harga=3300000;
	LG.harga=2900000;
	
	cout<<"Harga "<<(PANASONIC.tipe)<< "     : Rp. "<<(PANASONIC.harga)<<endl;
	cout<<"Harga "<<(SHARP.tipe)<< " : Rp. "<<(SHARP.harga)<<endl;
	cout<<"Harga "<<(LG.tipe)<< " : Rp. "<<(LG.harga)<<endl;
	
	PANASONIC.unggul1("1. Menggunakan sistem Nano-G \n2. Dilengkapi dengan mode Powerful \n3. Menggunakan sistem Econavi \n");
	SHARP.unggul2("1. Memiliki 2 Blade \n2. Menggunakan Turbo Cooling \n3. Memiliki fitur Filter Sign \n");
}

void AC::unggul1(string unggul1){
	cout<<endl<<"Keunggulan PANASONIC Alowa     : "<<endl<<unggul1;
}
void AC::unggul2(string unggul2){
	cout<<endl<<"Keunggulan SHARP Plasmacluster : "<<endl<<unggul2;
}
