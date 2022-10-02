// programlama-odevi4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Tukish");
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



