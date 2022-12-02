/****************************************************************************
										**					        SAKARYA ÜNİVERSİTESİ                           **
										**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ             **
										**				         BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ                    **
										**				          PROGRAMLAMAYA GİRİŞİ DERSİ                       **
										**																		   **
										**				ÖDEV NUMARASI…...:   1									   **
										**				ÖĞRENCİ ADI SOYADI:..............: EREN CAN ŞAHİN		   **
										**				ÖĞRENCİ NUMARASI:....g211210088							   **
										**				DERS GRUBU:....2. ÖĞRETİM C GRUBU						   **
										****************************************************************************/
#include <iostream>
#include <string.h>               //	programda gerekli kütüphaneleri ekledim.
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

struct Student
{
	string name, surname;    //Ögrenciye ait degiskenlerini atadım.
	int no, quiz1, quiz2, homework1, homework2, project, vize, final, average, yilici, ortalama, age;
};
struct Date
{
	int gun, ay, yil;  //Tarihin degiskenlerini atadım.
};
int quiz1, quiz2, homework1, homework2, project, vize, final;
int Age[] = { 18,19,20,21,22,23 };   //yaş arrayini oluşturdum.
Student student[100];
string IsimHavuzu[30] = { "Can","Yagmur","Melih","Fatih","Berkay","Muratcan","Burak","Eyup","Mehmet","Enes" //30 adet isim olusturdum.
						  ,"Semih","Eren","Semiha","Dilara","Hamza","Elif","Irem"
						  ,"Ebru","Yunus","Hilal","Talha","Merve","Aylin","Ayse","Bunyamin","Sumeyra","Sude","Nihal","Berfin","Gozde" };
string SoyisimHavuzu[30] = { "Sahin","Kaftar","Sengun","Yildiz","Susoglu","Deniz","Kurt",
							 "Dugal","Cengiz","Algan","Sikdag","Satar","Koz","Simsek","Ozturk","Dereli","Yayli", //30 adet soyadi olusturdum.
							 "Gundes","Kar","Agtoprak","Duman","Benekli","Ozsoy","Gelir","Gider",
							 "Kosar","Topcu","Kaya","Susukizi","Pýnar" };


void HarfeCevir(float average)  //Ögrencilerin 100’lük notunu harfe çeviren bir fonksiyon yazdım.

{
	if (average >= 90)
	{
		cout << "AA";
		cout << endl;
	}
	else if (average >= 85 && average <= 89)
	{
		cout << "BA";
		cout << endl;
	}
	else if (average >= 80 && average <= 84)
	{
		cout << "BB";
		cout << endl;
	}
	else if (average >= 75 && average <= 79)
	{
		cout << "CB";
		cout << endl;
	}
	else if (average >= 65 && average <= 74)
	{
		cout << "CC";
		cout << endl;
	}
	else if (average >= 58 && average <= 64)
	{
		cout << "DC";
		cout << endl;
	}
	else if (average >= 50 && average <= 57)
	{
		cout << "DD";
		cout << endl;
	}
	else if (average >= 40 && average <= 49)
	{
		cout << "FD";
		cout << endl;
	}
	else if (average < 40)
	{
		cout << "FF";
		cout << endl;
	}
}
void Yildiz() //satır aralarını belirlemek icin fonksiyon olusturuldu.
{

	for (int j = 0; j < 35; j++)
		cout << "*";
	cout << endl;
}
void StudentAverage(Student* student)  //öğrencilere rastgele atanan notların ortalamasını bulan bir fonksiyon yazdım.
{
	for (int i = 0; i < 100; i++)
	{
		student[i].name = IsimHavuzu[rand() % 30]; cout << "Name is : " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 30];  cout << "Surname is : " << student[i].surname<< endl;
		student[i].quiz1 = rand() % 100;  cout << "Quiz 1 mark : " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100;  cout << "Quiz 2 mark : " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100;   cout << "Homework1 mark : " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100;   cout << "Homework2 mark: " << student[i].homework2 << endl;
		student[i].project = rand() % 100;   cout << "Project mark: " << student[i].project << endl;
		student[i].vize = rand() % 100;   cout << "Vize1 mark: " << student[i].vize<< endl;
		student[i].final = rand() % 100;   cout << "Final is: " << student[i].final << endl;
		student[i].yilici = student[i].quiz1 * 0.07 + student[i].quiz2 * 0.07 + student[i].homework1 * 0.1 + student[i].homework2 * 0.1 + student[i].project * 0.16 + student[i].vize * 0.5;
		student[i].average = student[i].yilici * 0.55 + student[i].final * 0.45;
		cout << "Average: " << student[i].average << endl;
		Yildiz();
	}
}
void Yazdir(Student* student) //menu seceneği icin her basışta 20 tane listelenecek bir fonksiyon yazdım
{
	srand(time(0));
	for (int i = 0; i < 20; i++)
	{
		student[i].name = IsimHavuzu[rand() % 20]; cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 20]; cout << "Surname is: " << student[i].surname << endl;
		student[i].age = Age[rand() % 5]; cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100; cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100; cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 100; cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 100; cout << "Final is: " << student[i].final << endl;
		student[i].yilici = (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16) + (student[i].vize * 0.5);
		student[i].average = (student[i].yilici * 0.55) + (student[i].final * 0.45);
		cout << student[i].average << "\n";
		HarfeCevir(student[i].average);
		Yildiz();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = IsimHavuzu[rand() % 20]; cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 20]; cout << "Surname is: " << student[i].surname << endl;
		student[i].age = Age[rand() % 5]; cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100; cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100; cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 100; cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 100; cout << "Final is: " << student[i].final << endl;
		student[i].yilici = (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16) + (student[i].vize * 0.5);
		student[i].average = (student[i].yilici * 0.55) + (student[i].final * 0.45);
		cout << student[i].average << "\n";
		HarfeCevir(student[i].average);
		Yildiz();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = IsimHavuzu[rand() % 20]; cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 20]; cout << "Surname is: " << student[i].surname << endl;
		student[i].age = Age[rand() % 5]; cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100; cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100; cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 100; cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 100; cout << "Final is: " << student[i].final << endl;
		student[i].yilici = (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16) + (student[i].vize * 0.5);
		student[i].average = (student[i].yilici * 0.55) + (student[i].final * 0.45);
		cout << student[i].average << "\n";
		HarfeCevir(student[i].average);
		Yildiz();
	} system("PAUSE");
	for (int i = 0; i < 20; i++)
	{
		student[i].name = IsimHavuzu[rand() % 20]; cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 20]; cout << "Surname is: " << student[i].surname << endl;
		student[i].age = Age[rand() % 5]; cout << "Age: " << student[i].age << endl;
		student[i].quiz1 = rand() % 100; cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 100; cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 100; cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 100; cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 100; cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 100; cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 100; cout << "Final is: " << student[i].final << endl;
		student[i].yilici = (student[i].quiz1 * 0.07) + (student[i].quiz2 * 0.07) + (student[i].homework1 * 0.10) + (student[i].homework2 * 0.10) + (student[i].project * 0.16) + (student[i].vize * 0.5);
		student[i].average = (student[i].yilici * 0.55) + (student[i].final * 0.45);
		cout << student[i].average << "\n";
		HarfeCevir(student[i].average);
		Yildiz();
	} system("PAUSE");
}
int SınıfOrtalama(Student* student) //Sınıfın ortalama başarı notunu hesaplattırdım
{
	StudentAverage(student);
	int toplam = 0;
	int ortalama = 0;
	for (int i = 0; i < 100; i++)
	{
		toplam += student[i].average;
	}
	ortalama = toplam / 100;
	cout << ortalama;
	return ortalama;
};
void rastgele() //seçenek1 için rastgele değerler atayacak şekilde ve sınıfın yüzdelik kısmının notunu belirleyecek kod bloğu yazdım
{
	Student student[100];
	cout << "Rastgele ataniyor.." << endl;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		student[i].name = IsimHavuzu[rand() % 30]; cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 30];  cout << "Surname is: " << student[i].surname << endl;
		student[i].quiz1 = rand() % 40;  cout << "Quiz 1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 40;  cout << "Quiz 2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 40;   cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 40;   cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 40;   cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 40;   cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 40;   cout << "Final is: " << student[i].final << endl;
		student[i].yilici = student[i].quiz1 * 0.07 + student[i].quiz2 * 0.07 + student[i].homework1 * 0.1 + student[i].homework2 * 0.1 + student[i].project * 0.16 + student[i].vize * 0.5;
		student[i].average = student[i].yilici * 0.55 + student[i].final * 0.45;
		cout << "Average: " << student[i].average << endl;
		cout << "*********************************" << endl;
	}

	for (int i = 10; i < 60; i++)
	{

		student[i].name = IsimHavuzu[rand() % 30];  cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 30];  cout << "Surname is: " << student[i].surname << endl;
		student[i].quiz1 = rand() % 30 + 40;  cout << "Quiz 1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 30 + 40;  cout << "Quiz 2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 30 + 40;  cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 30 + 40;   cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 30 + 40;   cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 30 + 40;   cout << "Vize1 is: " << student[i].vize<< endl;
		student[i].final = rand() % 30 + 40;   cout << "Final is: " << student[i].final << endl;
		student[i].yilici = student[i].quiz1 * 0.07 + student[i].quiz2 * 0.07 + student[i].homework1 * 0.1 + student[i].homework2 * 0.1 + student[i].project * 0.16 + student[i].vize * 0.5;
		student[i].average = student[i].yilici * 0.55 + student[i].final * 0.45;
		cout << "Average: " << student[i].average << endl;
		cout << "*********************************" << endl;

	}
	srand(time(0));
	for (int i = 60; i < 75; i++)
	{

		student[i].name = IsimHavuzu[rand() % 15];   cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 15];   cout << "Surname is: " << student[i].surname << endl;
		student[i].quiz1 = rand() % 10 + 70;   cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 10 + 70;   cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 10 + 70;	cout << "Homework1 is: " << student[i].homework1 << endl;
		student[i].homework2 = rand() % 10 + 70;	cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 10 + 70;   cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 10 + 70;	cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 10 + 70;	cout << "Final is: " << student[i].final << endl;
		student[i].yilici = student[i].quiz1 * 0.07 + student[i].quiz2 * 0.07 + student[i].homework1 * 0.1 + student[i].homework2 * 0.1 + student[i].project * 0.16 + student[i].vize * 0.5;
		student[i].average = student[i].yilici * 0.55 + student[i].final * 0.45;
		cout << "Average: " << student[i].average << endl;
		cout << "*********************************" << endl;

	}
	srand(time(0));
	for (int i = 75; i < 100; i++)
	{

		student[i].name = IsimHavuzu[rand() % 25];	cout << "Name is: " << student[i].name << endl;
		student[i].surname = SoyisimHavuzu[rand() % 25];	cout << "Surname is: " << student[i].surname << endl;
		student[i].quiz1 = rand() % 20 + 80;	cout << "Quiz1 is: " << student[i].quiz1 << endl;
		student[i].quiz2 = rand() % 20 + 80;	cout << "Quiz2 is: " << student[i].quiz2 << endl;
		student[i].homework1 = rand() % 20 + 80;	cout << "Homework1 is:" << student[i].homework1 << endl;
		student[i].homework2 = rand() % 20 + 80;	cout << "Homework2 is: " << student[i].homework2 << endl;
		student[i].project = rand() % 20 + 80;   cout << "Project is: " << student[i].project << endl;
		student[i].vize = rand() % 20 + 80;	cout << "Vize1 is: " << student[i].vize << endl;
		student[i].final = rand() % 20 + 80;	cout << "Final is: " << student[i].final << endl;
		student[i].yilici = student[i].quiz1 * 0.07 + student[i].quiz2 * 0.07 + student[i].homework1 * 0.1 + student[i].homework2 * 0.1 + student[i].project * 0.16 + student[i].vize * 0.5;
		student[i].average = student[i].yilici * 0.55 + student[i].final * 0.45;
		cout << "Average: " << student[i].average << endl;
		cout << "*********************************" << endl;

	}
}
void calculateStandart(Student* student)   //Sınıfın standart sapmasını hesaplayan fonksiyonu tanımladım.
{
	StudentAverage(student);
	float sum = 0.0, mean, standardDeviation = 0.0;

	for (int i = 0; i < 2; ++i)
	{
		sum += student[i].average;
	}

	mean = sum / 2;

	for (int i = 0; i < 2; i++)
		standardDeviation += pow(student[i].average - mean, 2);

	sqrt(standardDeviation / 2);

	cout << "The standard deviation is: " << standardDeviation << endl;

}
void Between(Student* student)
{
	StudentAverage(student);
	int sayi1, sayi2;
	cout << "Enter the max limit: "; cin >> sayi1;
	cout << "Enter the low limit: "; cin >> sayi2;
	for (int i = 0; i < 100; i++)
	{
		if (sayi1 >= student[i].average && sayi2 <= student[i].average)
		{
			cout << student[i].name << " " << student[i].surname << " " << student[i].average << endl;
		}
	}
}
int MaxMark(Student* student)
{
	StudentAverage(student);
	int enbuyuk = student[0].average;
	for (int i = 0; i < 100; i++)
	{
		if (student[i].average > enbuyuk)
		{
			enbuyuk = student[i].average;
		}
	}
	cout << "The biggest mark in class: " << enbuyuk;
	return enbuyuk;
}
int MinMark(Student* student)
{
	StudentAverage(student);
	int enkucuk = student[0].average;
	for (int i = 0; i < 100; i++)
	{
		if (student[i].average < enkucuk)
		{
			enkucuk = student[i].average;
		}
	}
	cout << "The lowest mark in class: " << enkucuk;
	return enkucuk;
}
void UnderValue(Student* student) //	Basari notu belirtilen bir değerin altında olan öğrencilerin listesinin alınabildigi fonksiyon tanımlandi.
{
	StudentAverage(student);
	int number;

	cout << "Enter a number to see success grades below the number you entered"; cin >> number;

	cout << "These are the success grades below the number: " << endl;
	cout << "\n\n";

	for (int i = 0; i < 100; i++)
	{
		if (number > student[i].ortalama)
		{
			cout << student[i].name << " " << student[i].surname << " " << student[i].ortalama << endl;
		}
	}
}
void UpToValue(Student* student) //Basari notu belirtilen bir değerin üstünde olan öğrencilerin listesinin alınabildigi fonksiyonu tanımlandm.
{
	StudentAverage(student);
	int number;

	cout << "Enter a number to see success grades above the number you entered"; cin >> number;

	cout << "These are the success grades above the number: " << endl;
	cout << "\n\n";

	for (int i = 0; i < 100; i++)
	{
		if (number < student[i].ortalama)
		{
			cout << student[i].name << " " << student[i].surname << " " << student[i].ortalama << endl;
		}
	}

}
int main()
{
	int secenek;
	cout << "Choice 1: Automatically select student names and values.\n" << endl;   //Kullanıcıdan iki secenegi secmesi istendi.
	cout << "Choice 2: Manually select student names and values.\n" << endl;
	cout << " Please make your choice. (1 or 2) : "; cin >> secenek;

	if (secenek == 1) {                   //kullanıcıya sunulacak 2 secenek icin if-else blogu olusturuldu.
		rastgele();
	}
	if (secenek == 2) {
		char ch = 'y';
		int yilici, average;
		do
		{
			cout << "Quiz 1(0-100)= "; cin >> quiz1;                     //2. secenegi secen kullanıcıdan bilgileri manel olarak almaya yarayan kod yazıldı.
			cout << "Quiz 2(0-100)= "; cin >> quiz2;
			cout << "Homework 1(0-100)= "; cin >> homework1;
			cout << "Homework 2(0-100)= "; cin >> homework2;
			cout << "project(0-100)= "; cin >> project;
			cout << "Midterm(0-100)= "; cin >> vize;
			cout << "Final(0-100)= "; cin >> final; cout << "\n";

			yilici = (quiz1 * 0.07) + (quiz2 * 0.07) + (homework1 * 0.1) + (homework2 * 0.1) + (project * 0.16) + (vize * 0.5);
			cout << "End of year mark :" << yilici << "\n" << endl;
			average = (yilici * 0.55) + (final * 0.45);
			HarfeCevir(average);   //ortalaması ve yılici hesaplanıp notu harfe cevrildi.
			cout << "\nDo you want to continue? (y/n) ?"; cin >> ch;
		} while (ch != 'n');
		EXIT_SUCCESS;
	}
	char ch = 'y';
	do
	{
		int choice;
		cout << "Please choose one of them..\n";            //kullanıcıya menü sunuldu.
		Yildiz(); cout << "\n";
		cout << "If you want to print list of class partly press '1'. \n";
		cout << "If you want to print the max mark in the class press '2'\n";
		cout << "If you want to find the lowest mark in the class press '3'\n";
		cout << "If you want to see the average of class press '4'\n";
		cout << "If you want to find the standard deviation of class press '5'\n";
		cout << "If you want to see the students who's mark between 50 to 80 press '6'\n";
		cout << "If you want to see the students who's mark under for example 50 '7'\n";
		cout << "If you want to see the students who's mark high from 40 '8'\n";
		cin >> choice;

		switch (choice)   //secilen secenege göre durumları ekrana yazdıracak kod blogu olusturuldu.
		{
		case 1:
			cout << "Partly class list: \n";
			Yazdir(student);
			break;
		case 2:
			MaxMark(student);
			break;
		case 3:
			MinMark(student);
			break;
		case 4:
			SınıfOrtalama(student);
			break;
		case 5:
			calculateStandart(student);
			break;
		case 6:
			Between(student);
			break;
		case 7:
			UnderValue(student);
			break;
		case 8:
			UpToValue(student);
			break;
		default:
			cout << "Please check the number you entered." << endl;

		}
		cout << "\nDo you want to continue? (y/n) ?"; cin >> ch;

	} while(ch!= 'n');

}