// programlamaa-odev1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

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
	{
		cout << "Kac yasindasiniz?\n";
		cin >> yas;

		cout << "calisiyor musunuz?\n";
		cin >> is;
		if (yas == "19" && is == "hayır")
	    if (yas =="19"&& is == "evet")
		{
			cout << "Sonuç:saat:09.00,bu kurallarda 10:00-16.00arası çıkabilirsin.1saat sonra çıkabilirsin.\n";
			
		}
		else
		{
			cout << "otur oturdugun yere.\n";

		}
		cout << "Devam edilsin mi?e/h";
		cin >> cevap;
		{
		
			

		
		}
	}

  {cout << "kontrol\n";
    string gel, kal, git;

    cout << "Kac yasindasiniz?\n";
    cin >> gel;

    cout << "calisiyor musunuz?\n";
    cin >> kal;
    if (gel == "11" && kal == "hayır")
    {
        cout << "cıkabilirsin\n";
    }
    else
    {
        cout << "Sonuc:saat:15:30,bu kurallarda 10:00_16:00 arasi cikabilirsin.30 dk kaldi\n";
        
    }
    cout<< "Devam etmek istiyor musun?(e/h)";
    cin >> git;
  

	    cout << "kontrol\n";
    string gel, kal, git;
    
    cout << "Kac yasindasiniz?\n";
    cin >> gel;

    cout << "calisiyor musunuz?\n";
    cin >> kal;
    if (gel == "11" && kal == "hayır")
    {
        cout << "cıkabilirsin\n";
    }
    else
    {
        cout << "Sonuc:saat:15:30,bu kurallarda 10:00_16:00 arasi cikabilirsin.30 dk kaldi\n";

    }
    cout << "Devam etmek istiyor musun?(e/h)";
    cin >> git;


    {
        while (git == 'e' || git == 'h');


    }

}