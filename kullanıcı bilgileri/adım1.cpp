#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "TURKISH");


	cout << "karar\n";
	string yas, is, kac, yap;
	string cevap;

	cout << "Kaç yaşındasınız\n";
	cin >> yas;

	cout << "Çalışıyor musunuz?\n";
	cin >> is;
	if (yas == "18" && is == "evet")
	{
		cout << "Tüm gün serbest.\n";
	}
	else
	{
		cout << "Serbest değil.\n";
		cout << "devam edilsin mi?e/h";


		{


		}
	}
}
