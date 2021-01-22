#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
#include<ctime>
#include<MMSystem.h>
#include <stdio.h>

using namespace std;

int sudokuacilis()
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << " \t\t\t Latifli Mehraj                                   Baku - 2020 " << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t\t      " << char(218) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(191) << endl;
	cout << " \t\t\t\t      " << char(179) << " 1 "; cout << char(179);
	SetConsoleTextAttribute(color, 4);
	cout << " 4 ";
	SetConsoleTextAttribute(color, 7);
	cout << char(179) << " 8 " << char(179) << "\t S ";
	SetConsoleTextAttribute(color, 4);
	cout << " U ";
	SetConsoleTextAttribute(color, 7);
	cout << " D ";
	SetConsoleTextAttribute(color, 4);
	cout << " O ";
	SetConsoleTextAttribute(color, 7);
	cout << " K ";
	SetConsoleTextAttribute(color, 4);
	cout << " U " << endl;
	SetConsoleTextAttribute(color, 7);
	cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
	cout << " \t\t\t\t      " << char(179);

	SetConsoleTextAttribute(color, 4);
	cout << " 2 ";
	SetConsoleTextAttribute(color, 7);
	cout << char(179) << " 5 " << char(179);
	SetConsoleTextAttribute(color, 4);
	cout << " 7 ";
	SetConsoleTextAttribute(color, 7);
	cout << char(179) << endl;
	cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
	cout << " \t\t\t\t      " << char(179);
	SetConsoleTextAttribute(color, 4);
	cout << " 6 ";
	SetConsoleTextAttribute(color, 7);
	cout << char(179) << " 3 " << char(179) << " 9 " << char(179);
	SetConsoleTextAttribute(color, 4);
	cout << " \t 3 ";
	SetConsoleTextAttribute(color, 7);
	cout << "x";
	SetConsoleTextAttribute(color, 4);
	cout << " 3 ";
	SetConsoleTextAttribute(color, 7);
	cout << "   ";
	SetConsoleTextAttribute(color, 4);
	cout << "  9 ";
	SetConsoleTextAttribute(color, 7);
	cout << "x";
	SetConsoleTextAttribute(color, 4);
	cout << " 9 " << endl;
	SetConsoleTextAttribute(color, 7);
	cout << " \t\t\t\t      " << char(192) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(217) << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << " \t\t\t Step Academy                               Qrup: FBE_2914_AZ " << endl;
	cout << " \t\t\t ============================================================ " << endl;
	cout << endl;
	return 0;
}

void sudokuqeydiyyat()
{
	char yas[50];
	char ad[50];
	char cins[50];
	char symbol1 = 'K';
	char symbol2 = 'i';
	char symbol3 = 's';
	char symbol4 = 'i';
	char symbol5 = 'Q';
	char symbol6 = 'a';
	char symbol7 = 'd';
	char symbol8 = 'i';
	char symbol9 = 'n';
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << "\t\t\t Adinizi daxil edin: \t";
	SetConsoleTextAttribute(color, 4);
	gets_s(ad);
	SetConsoleTextAttribute(color, 7);
	PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Sleep(1000);
	cout << endl;
	cout << "\t\t\t Cinsinizi daxil edin: \t";
	cin.clear();
	SetConsoleTextAttribute(color, 4);
	gets_s(cins);
	SetConsoleTextAttribute(color, 7);
	PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Sleep(1000);
	cout << endl;
	cout << "\t\t\t Yasinizi daxil edin: \t";
	SetConsoleTextAttribute(color, 4);
	gets_s(yas);
	SetConsoleTextAttribute(color, 7);
	PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Sleep(1000);
	cout << endl;
	cout << endl;
	system("color 7");
	Sleep(500);
	system("cls");
	cout << endl;
	char a = sizeof(cins);
	for (int i = 0; i < a; i++)
	{
		if (cins[i] == symbol1 || cins[i] == symbol2 || cins[i] == symbol3 || cins[i] == symbol4)
			cout << " " << yas << " yasli " << ad << " bey, oyuna xos geldiniz. " << endl;
		if (cins[i] == symbol5 || cins[i] == symbol6 || cins[i] == symbol7 || cins[i] == symbol8 || cins[i] == symbol9)
			cout << " " << yas << " yasli " << ad << " xanim, oyuna xos geldiniz. " << endl;
		break;
	}
	cout << endl;

	cout << " Oyunun qaydalari: " << endl;

	cout << " \n 1) Bos xananlara 1 -den 9 -can olan ededlerden birini yazin. " << endl;
	cout << " \n 2) Daxil etdiyiniz reqem setir uzre tekrarlanmasin. " << endl;
	cout << " \n 3) Daxil etdiyiniz reqem sutun uzre tekrarlanmasin. " << endl;
	cout << " \n 4) Daxil etdiyiniz reqem aid olduqu 3x3 xana uzre tekrarlanmasin. " << endl;
	cout << " \n 5) Xanalarin doldurulma ardicilligi " << endl;
	cout << endl;
	cout << " \n   5.1) " << endl;
	cout << " \t | 1 | 2 | 3 | " << endl;
	cout << " \t ------------- " << endl;
	cout << " \t | 4 | 5 | 6 | " << endl;
	cout << " \t ------------- " << endl;
	cout << " \t | 7 | 8 | 9 | " << endl;
	cout << " \n   5.2) " << endl;
	cout << " \t 9x9 seciminde ise setiri secerken reqem daxil edilir. " << endl;
	cout << " \t Sutunu secerken ise herif daxil edilir. " << endl;

	cout << endl;
	system("color 7");
	Sleep(10000);
	system("cls");

	FILE* file;
	fopen_s(&file, "yeni.txt", "w");
	if (file != NULL)
	{
		fputs(ad, file);
		fputs(" ", file);
		fputs(cins, file);
		fputs(" ", file);
		fputs(yas, file);
		fputs("\n", file);
		fclose(file);


	}
		char yas2[50];
		char ad2[50];
		char cins2[50];
		fopen_s(&file, "yeni.txt", "r");
		if (file != NULL)
		{
			fgets(ad2, 50, file);
			cout << " ";
			fgets(cins2, 50, file);
			cout << " ";
			fgets(yas2, 50, file);
			cout << "\n";
			fclose(file);
		}

		fopen_s(&file, "umumi.txt", "a");
		if (file != NULL)
		{
			fputs(ad, file);
			fputs(" ", file);
			fputs(cins, file);
			fputs(" ", file);
			fputs(yas, file);
			fputs("\n", file);
			fclose(file);

		}


}


void sudoku(int nov, int seviyye)
{
	int xananomresi = 0;
	int massiv[3][3];
	
	system("cls");
	cout << " " << " \n\n Oyunu novunu ( 3x3 -> 1; 9x9 -> 2 ) secin: \t";
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 4);
	cin >> nov;
	SetConsoleTextAttribute(color, 7);
	PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Sleep(1000);

	if (nov == 1)
	{
		cout << " \n\n Cetinnlik seviyyesini (Asan -> 1; Orta ->2; Cetin ->3) secin: \t";
		SetConsoleTextAttribute(color, 4);
		cin >> seviyye;
		SetConsoleTextAttribute(color, 7);
		PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(1000);
		system("cls");

		// 3X3 - Çətin səviyyədə çətinlik


		if (seviyye == 3)
		{
		srand(time(0));
	
		int random;
		bool unique = true;
		const int ROW = 3;
		const int COLUMN = 3;

		int array[ROW][COLUMN];

		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COLUMN; j++)
			{
				do
				{
					random = rand() % 9 + 1;
					for (int x = 0; x < ROW; x++)
					{
						for (int y = 0; y < COLUMN; y++)
						{
							unique = true;
							if (array[x][y] == random)
							{
								unique = false;
								y = COLUMN;
								x = ROW;
							}

						}
					}
				} while (!unique);
				array[i][j] = random;


				massiv[i][j] = random;


			}
		}




		int xana[3][3]{ {},{},{} };



			


				for (int i = 0; i < 100; i++)
				{



					cout << endl;
					cout << " \t\t\t\t      " << char(218) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(191) << endl;
					cout << " \t\t\t\t      " << char(179) << " " << massiv[0][0] << " " << char(179);
					HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][1] << " ";
					SetConsoleTextAttribute(color, 7);

					cout << char(179) << " " << massiv[0][2] << " " << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[1][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << " " << massiv[1][1] << " " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[1][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << " " << massiv[2][1] << " " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(192) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(217) << endl;
					cout << endl;


					if (

						(
							xana[0][1] != xana[1][0] &&
							xana[0][1] != xana[1][2] &&
							xana[0][1] != xana[2][0] &&
							xana[0][1] != xana[2][2] &&
							xana[0][1] != massiv[0][0] &&
							xana[0][1] != massiv[0][2] &&
							xana[0][1] != massiv[1][1] &&
							xana[0][1] != massiv[2][1] &&
							xana[0][1] != 0
							)

						&&

						(
							xana[1][0] != xana[0][1] &&
							xana[1][0] != xana[1][2] &&
							xana[1][0] != xana[2][0] &&
							xana[1][0] != xana[2][2] &&
							xana[1][0] != massiv[0][0] &&
							xana[1][0] != massiv[0][2] &&
							xana[1][0] != massiv[1][1] &&
							xana[1][0] != massiv[2][1] &&
							xana[1][0] != 0
							)


						&&

						(
							xana[1][2] != xana[0][1] &&
							xana[1][2] != xana[1][0] &&
							xana[1][2] != xana[2][0] &&
							xana[1][2] != xana[2][2] &&
							xana[1][2] != massiv[0][0] &&
							xana[1][2] != massiv[0][2] &&
							xana[1][2] != massiv[1][1] &&
							xana[1][2] != massiv[2][1] &&
							xana[1][2] != 0

							)

						&&

						(
							xana[2][0] != xana[0][1] &&
							xana[2][0] != xana[1][0] &&
							xana[2][0] != xana[1][2] &&
							xana[2][0] != xana[2][2] &&
							xana[2][0] != massiv[0][0] &&
							xana[2][0] != massiv[0][2] &&
							xana[2][0] != massiv[1][1] &&
							xana[2][0] != massiv[2][1] &&
							xana[2][0] != 0

							)

						&&

						(

							xana[2][2] != xana[0][1] &&
							xana[2][2] != xana[1][0] &&
							xana[2][2] != xana[1][2] &&
							xana[2][2] != xana[2][0] &&
							xana[2][2] != massiv[0][0] &&
							xana[2][2] != massiv[0][2] &&
							xana[2][2] != massiv[1][1] &&
							xana[2][2] != massiv[2][1] &&
							xana[2][2] != 0
							)

						)
					{

						cout << " Uddunuz " << endl;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(5000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("cls");
						break;

					}


					cout << " Xanani secin: ";

					SetConsoleTextAttribute(color, 4);
					cin >> xananomresi;
					SetConsoleTextAttribute(color, 7);
					if (xananomresi == 2)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 4)
					{

						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[1][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 6)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[1][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 7)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 9)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						

					}

					cout << endl;




				}


			
		}



		// 3X3 - Orta səviyyədə çətinlik


		if (seviyye == 2)
		{
		srand(time(0));

		

		int random;
		bool unique = true;
		const int ROW = 3;
		const int COLUMN = 3;

		int array[ROW][COLUMN];

		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COLUMN; j++)
			{
				do
				{
					random = rand() % 9 + 1;
					for (int x = 0; x < ROW; x++)
					{
						for (int y = 0; y < COLUMN; y++)
						{
							unique = true;
							if (array[x][y] == random)
							{
								unique = false;
								y = COLUMN;
								x = ROW;
							}

						}
					}
				} while (!unique);
				array[i][j] = random;

			
				massiv[i][j] = random;
				
			
			}
		}



		
		int xana[3][3]{ {},{},{} };


			





				for (int i = 0; i < 100; i++)
				{



					HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
					cout << endl;
					cout << " \t\t\t\t      " << char(218) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(191) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][1] << " ";
					SetConsoleTextAttribute(color, 7);

					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179) << " " << massiv[1][0] << " ";
					
					cout << char(179) << " " << massiv[1][1] << " " << char(179) << " " << massiv[1][2] << " ";
					
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][1] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(192) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(217) << endl;
					cout << endl;


					if (
						(
							xana[0][0] != xana[0][1] &&
							xana[0][0] != xana[0][2] &&
							xana[0][0] != xana[2][0] &&
							xana[0][0] != xana[2][1] &&
							xana[0][0] != xana[2][2] &&
							xana[0][0] != massiv[1][0] &&
							xana[0][0] != massiv[1][1] &&
							xana[0][0] != massiv[1][2] &&
							xana[0][0] != 0
							)

						&&
						(
							xana[0][1] != xana[0][0] &&
							xana[0][1] != xana[0][2] &&
							xana[0][1] != xana[2][0] &&
							xana[0][1] != xana[2][1] &&
							xana[0][1] != xana[2][2] &&
							xana[0][1] != massiv[1][0] &&
							xana[0][1] != massiv[1][1] &&
							xana[0][1] != massiv[1][2] &&
							xana[0][1] != 0
							)

						&&

						(
							xana[0][2] != xana[0][0] &&
							xana[0][2] != xana[0][1] &&
							xana[0][2] != xana[2][0] &&
							xana[0][2] != xana[2][1] &&
							xana[0][2] != xana[2][2] &&
							xana[0][2] != massiv[1][0] &&
							xana[0][2] != massiv[1][1] &&
							xana[0][2] != massiv[1][2] &&
							xana[0][2] != 0
							)


						&&

						(
							xana[2][0] != xana[0][0] &&
							xana[2][0] != xana[0][1] &&
							xana[2][0] != xana[0][2] &&
							xana[2][0] != xana[2][1] &&
							xana[2][0] != xana[2][2] &&
							xana[2][0] != massiv[1][0] &&
							xana[2][0] != massiv[1][1] &&
							xana[2][0] != massiv[1][2] &&
							xana[2][0] != 0

							)

						&&

						(
							xana[2][1] != xana[0][0] &&
							xana[2][1] != xana[0][1] &&
							xana[2][1] != xana[0][2] &&
							xana[2][1] != xana[2][0] &&
							xana[2][1] != xana[2][2] &&
							xana[2][1] != massiv[1][0] &&
							xana[2][1] != massiv[1][1] &&
							xana[2][1] != massiv[1][2] &&
							xana[2][1] != 0

							)

						&&

						(

							xana[2][2] != xana[0][0] &&
							xana[2][2] != xana[0][1] &&
							xana[2][2] != xana[0][2] &&
							xana[2][2] != xana[2][0] &&
							xana[2][2] != xana[2][1] &&
							xana[2][2] != massiv[1][0] &&
							xana[2][2] != massiv[1][1] &&
							xana[2][2] != massiv[1][2] &&
							xana[2][2] != 0
							)

						)
					{

						cout << " Uddunuz " << endl;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(5000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("cls");
						break;
						

					}


					cout << " Xanani secin: ";

					SetConsoleTextAttribute(color, 4);
					cin >> xananomresi;
					SetConsoleTextAttribute(color, 7);

					if (xananomresi == 1)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}

					if (xananomresi == 2)
					{
					
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 3)
					{

							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 7)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 8)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 9)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						

					}

					cout << endl;







				}
			
		}





		// 3X3 - Asan səviyyədə çətinlik


		if (seviyye == 1)
		{
			srand(time(0));

		

			int random;
			bool unique = true;
			const int ROW = 3;
			const int COLUMN = 3;

			int array[ROW][COLUMN];

			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COLUMN; j++)
				{
					do
					{
						random = rand() % 9 + 1;
						for (int x = 0; x < ROW; x++)
						{
							for (int y = 0; y < COLUMN; y++)
							{
								unique = true;
								if (array[x][y] == random)
								{
									unique = false;
									y = COLUMN;
									x = ROW;
								}

							}
						}
					} while (!unique);
					array[i][j] = random;


					massiv[i][j] = random;


				}
			}




			int xana[3][3]{ {},{},{} };



				for (int i = 0; i < 100; i++)
				{



					HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
					cout << endl;
					cout << " \t\t\t\t      " << char(218) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(194) << char(196) << char(196) << char(196) << char(191) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][1] << " ";
					SetConsoleTextAttribute(color, 7);

					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[0][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179); 
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[1][0] << " ";
					SetConsoleTextAttribute(color, 7);

					cout << char(179); 
					cout << " " << massiv[1][1] << " "; 
					cout << char(179); 
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[1][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(195) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(197) << char(196) << char(196) << char(196) << char(180) << endl;
					cout << " \t\t\t\t      " << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][0] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][1] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179);
					SetConsoleTextAttribute(color, 4);
					cout << " " << xana[2][2] << " ";
					SetConsoleTextAttribute(color, 7);
					cout << char(179) << endl;
					cout << " \t\t\t\t      " << char(192) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(193) << char(196) << char(196) << char(196) << char(217) << endl;
					cout << endl;


					if (
						(
							xana[0][0] != xana[0][1] &&
							xana[0][0] != xana[0][2] &&
							xana[0][0] != xana[1][0] &&
							xana[0][0] != xana[1][2] &&
							xana[0][0] != xana[2][0] &&
							xana[0][0] != xana[2][1] &&
							xana[0][0] != xana[2][2] &&
							xana[0][0] != massiv[1][1] &&
							xana[0][0] != 0
							)

						&&
						(
							xana[0][1] != xana[0][0] &&
							xana[0][1] != xana[0][2] &&
							xana[0][1] != xana[1][0] &&
							xana[0][1] != xana[1][2] &&
							xana[0][1] != xana[2][0] &&
							xana[0][1] != xana[2][1] &&
							xana[0][1] != xana[2][2] &&
							xana[0][1] != massiv[1][1] &&
							xana[0][1] != 0
							)

						&&

						(
							xana[0][2] != xana[0][0] &&
							xana[0][2] != xana[0][1] &&
							xana[0][2] != xana[1][0] &&
							xana[0][2] != xana[1][2] &&
							xana[0][2] != xana[2][0] &&
							xana[0][2] != xana[2][1] &&
							xana[0][2] != xana[2][2] &&
							xana[0][2] != massiv[1][1] &&
							xana[0][2] != 0
							)


						&&

						(
							xana[1][0] != xana[0][0] &&
							xana[1][0] != xana[0][1] &&
							xana[1][0] != xana[0][2] &&
							xana[1][0] != xana[1][2] &&
							xana[1][0] != xana[2][0] &&
							xana[1][0] != xana[2][1] &&
							xana[1][0] != xana[2][2] &&
							xana[1][0] != massiv[1][1] &&
							xana[1][0] != 0

							)

						&&

						(
							xana[1][2] != xana[0][0] &&
							xana[1][2] != xana[0][1] &&
							xana[1][2] != xana[0][2] &&
							xana[1][2] != xana[1][0] &&
							xana[1][2] != xana[2][0] &&
							xana[1][2] != xana[2][1] &&
							xana[1][2] != xana[2][2] &&
							xana[1][2] != massiv[1][1] &&
							xana[1][2] != 0

							)

						&&

						(
							xana[2][0] != xana[0][0] &&
							xana[2][0] != xana[0][1] &&
							xana[2][0] != xana[0][2] &&
							xana[2][0] != xana[1][0] &&
							xana[2][0] != xana[1][2] &&
							xana[2][0] != xana[2][1] &&
							xana[2][0] != xana[2][2] &&
							xana[2][0] != massiv[1][1] &&
							xana[2][0] != 0
							)

						&&

						(
							xana[2][1] != xana[0][0] &&
							xana[2][1] != xana[0][1] &&
							xana[2][1] != xana[0][2] &&
							xana[2][1] != xana[1][0] &&
							xana[2][1] != xana[1][2] &&
							xana[2][1] != xana[2][0] &&
							xana[2][1] != xana[2][2] &&
							xana[2][1] != massiv[1][1] &&
							xana[2][1] != 0
							)

						&&

						(
							xana[2][2] != xana[0][0] &&
							xana[2][2] != xana[0][1] &&
							xana[2][2] != xana[0][2] &&
							xana[2][2] != xana[1][0] &&
							xana[2][2] != xana[1][2] &&
							xana[2][2] != xana[2][0] &&
							xana[2][2] != xana[2][1] &&
							xana[2][2] != massiv[1][1] &&
							xana[2][2] != 0
							)

						)
					{

						cout << " Uddunuz " << endl;
						PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(5000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("color 7");
						Sleep(1000);
						system("color 9");
						Sleep(1000);
						system("cls");
						break;


					}


					cout << " Xanani secin: ";

					SetConsoleTextAttribute(color, 4);
					cin >> xananomresi;
					SetConsoleTextAttribute(color, 7);

					if (xananomresi == 1)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}

					if (xananomresi == 2)
					{
					

						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 3)
					{

						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[0][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 4)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[1][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 6)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[1][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						
					}
					if (xananomresi == 7)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						

					}

					if (xananomresi == 8)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						

					}

					if (xananomresi == 9)
					{
						
							cout << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana[2][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						

					}


					cout << endl;


			
		        }

        }

    }





	if (nov == 2)
	{
		int massiv2[3][3];
		
		cout << " \n\n Cetinnlik seviyyesini (Asan -> 1; Orta ->2; Cetin ->3) secin: \t";
		SetConsoleTextAttribute(color, 4);
		cin >> seviyye;
		SetConsoleTextAttribute(color, 7);
		PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(1000);
		system("cls");



		// 9X9 - Təsadüfi Sudoku cedveli

		srand(time(0));
		int tesaduficedvel[2];
		int n = 0;
		while (n < 2)
		{
			int r = rand() % 2 + 1;
			bool check = true;
			for (int i = 0; i < n; i++)
			{
				if (tesaduficedvel[i] == r)
				{
					check = false;
				}
			}
			if (check)
			{
				tesaduficedvel[n] = r;
				n++;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << endl;
			cout << tesaduficedvel[i] << "\t";
			cout << endl;
		}




		// 9X9 - Asan səviyyədə çətinlik
		if (seviyye == 1)
		{

			// 9X9 - Asan səviyyədə çətinlik =2

			if (tesaduficedvel[0] == 2) {


				srand(time(0));

				int random;
				bool unique = true;
				const int ROW = 3;
				const int COLUMN = 3;

				int array[ROW][COLUMN];

				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COLUMN; j++)
					{
						do
						{
							random = rand() % 9 + 1;
							for (int x = 0; x < ROW; x++)
							{
								for (int y = 0; y < COLUMN; y++)
								{
									unique = true;
									if (array[x][y] == random)
									{
										unique = false;
										y = COLUMN;
										x = ROW;
									}

								}
							}
						} while (!unique);
						array[i][j] = random;


						massiv2[i][j] = random;

						cout << endl;

						cout << endl;



					}
				}


				int xana2[9][9]{ {},{},{} };
				int setir = 0;
				char sutun;



				for (int i = 0; i < 1000; i++)
				{
					system("CLS");
					cout << endl;
					cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 1 -> " << " \t " << " | ";
					cout << massiv2[0][0] << " | " << massiv2[0][1] << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[1][1] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[2][1] << " | " << massiv2[2][2] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 2 -> " << " \t " << " | ";
					cout << massiv2[2][0] << " | " << massiv2[1][0] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | " << massiv2[0][1] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | " << massiv2[0][2] << " | " << massiv2[0][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 3 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[1][2] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][3];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][0] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 4 -> " << " \t " << " | ";
					cout << massiv2[0][1] << " | " << massiv2[0][0] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | " << massiv2[2][2] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[2][0] << " | " << massiv2[1][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 5 -> " << " \t " << " | ";
					cout << massiv2[2][2] << " | " << massiv2[2][0] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[2][1] << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | " << massiv2[1][0] << " | " << massiv2[0][2] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 6 -> " << " \t " << " | ";
					cout << massiv2[1][1] << " | " << massiv2[0][2] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[1][2] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | " << massiv2[0][1] << " | " << massiv2[2][1] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 7 -> " << " \t " << " | ";
					cout << massiv2[0][2] << " | " << massiv2[1][1] << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | " << massiv2[1][0] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[0][0] << " | " << massiv2[2][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 8 -> " << " \t " << " | " << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][7];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][1];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | " << massiv2[1][2] << " | " << massiv2[0][1] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 9 -> " << " \t " << " | " << massiv2[1][2] << " | " << massiv2[2][1] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | " << massiv2[0][2] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[2][2] << " | " << massiv2[1][1] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << endl;
					



					if (
						(
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[1][1] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != xana2[0][2] &&
							xana2[0][1] != xana2[0][3] &&

							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != xana2[0][4] &&
							xana2[0][1] != xana2[0][5] &&
							xana2[0][1] != massiv2[1][0] &&

							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[1][1] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != xana2[0][8] &&
							xana2[0][1] != massiv2[0][1] &&
				

							xana2[0][1] != 0

							)

						&&

						(
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[1][1] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != xana2[0][1] &&
							xana2[0][2] != xana2[0][3] &&

							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != xana2[0][4] &&
							xana2[0][2] != xana2[0][5] &&
							xana2[0][2] != massiv2[1][0] &&

							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != xana2[1][0] &&
							xana2[0][2] != massiv2[0][2] &&


							xana2[0][2] != 0

							)

						&&

						(
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[1][1] &&
							xana2[0][3] != massiv2[1][2] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != xana2[0][1] &&
							xana2[0][3] != xana2[0][2] &&

							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != massiv2[1][2] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != xana2[0][4] &&
							xana2[0][3] != xana2[0][5] &&
							xana2[0][3] != massiv2[1][0] &&

							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != xana2[1][1] &&
							xana2[0][3] != massiv2[2][0] &&


							xana2[0][3] != 0

							)

						&&

						(
							xana2[0][4] != massiv2[2][0] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != massiv2[2][2] &&
							xana2[0][4] != massiv2[1][2] &&
							xana2[0][4] != massiv2[0][2] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[1][0] &&
							xana2[0][4] != xana2[0][5] &&
		
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != massiv2[1][2] &&
							xana2[0][4] != massiv2[2][2] &&
							xana2[0][4] != xana2[0][1] &&
							xana2[0][4] != xana2[0][2] &&
							xana2[0][4] != xana2[0][3] &&

							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[2][2] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != massiv2[0][2] &&
							xana2[0][4] != massiv2[1][0] &&

							xana2[0][4] != 0

							)


								&&

								(
									xana2[0][5] != massiv2[2][0] &&
									xana2[0][5] != massiv2[2][1] &&
									xana2[0][5] != massiv2[2][2] &&
									xana2[0][5] != massiv2[1][2] &&
									xana2[0][5] != massiv2[0][2] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != xana2[0][4] &&

									xana2[0][4] != massiv2[2][1] &&
									xana2[0][4] != massiv2[1][2] &&
									xana2[0][4] != massiv2[2][2] &&
									xana2[0][4] != xana2[0][1] &&
									xana2[0][4] != xana2[0][2] &&
									xana2[0][4] != xana2[0][3] &&

									xana2[0][5] != massiv2[2][0] &&
									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != massiv2[0][1] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[1][2] &&
									xana2[0][5] != massiv2[2][2] &&
				

									xana2[0][5] != 0

									)

								&&

								(
									xana2[0][6] != massiv2[0][2] &&
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[2][1] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != xana2[0][7] &&

									xana2[0][6] != xana2[0][8] &&
									xana2[0][6] != xana2[1][0] &&
									xana2[0][6] != xana2[1][1] &&
									xana2[0][6] != massiv2[0][2] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[0][1] &&

									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != massiv2[0][2] &&

									xana2[0][6] != 0

									)

								&&

								(
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != massiv2[1][0] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != xana2[0][6] &&

									xana2[0][7] != xana2[0][8] &&
									xana2[0][7] != xana2[1][0] &&
									xana2[0][7] != xana2[1][1] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[0][1] &&

									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[1][0] &&


									xana2[0][7] != 0

									)

								&&

								(
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != xana2[1][0] &&
									xana2[0][8] != xana2[1][1] &&
									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[2][0] &&

									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != xana2[0][6] &&
									xana2[0][8] != xana2[0][7] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != massiv2[0][1] &&

									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != xana2[0][1] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != massiv2[2][0] &&

									xana2[0][8] != 0

									)

										&&

										(
											xana2[1][0] != massiv2[1][2] &&
											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != xana2[0][8] &&
											xana2[1][0] != xana2[1][1] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[2][0] &&

											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != xana2[0][6] &&
											xana2[1][0] != xana2[0][7] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[1][2] &&
											xana2[1][0] != massiv2[0][1] &&

											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != xana2[0][2] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[1][2] &&

											xana2[1][0] != 0

											)
										&&

										(
											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[2][2] &&
											xana2[1][1] != xana2[0][8] &&
											xana2[1][1] != xana2[1][0] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[2][0] &&

											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != xana2[0][6] &&
											xana2[1][1] != xana2[0][7] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != massiv2[0][1] &&

											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != xana2[0][3] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][0] &&

											xana2[1][1] != 0

											))

											{

											cout << " \t\t\t\t " << " Uddunuz " << endl;
											PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
											Sleep(5000);
											system("color 7");
											Sleep(1000);
											system("color 9");
											Sleep(1000);
											system("color 7");
											Sleep(1000);
											system("color 9");
											Sleep(1000);
											system("cls");
											break;

											}


									cout << endl;
									cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
									SetConsoleTextAttribute(color, 4);
									cin >> setir;
									SetConsoleTextAttribute(color, 7);
									cout << endl;
									cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
									SetConsoleTextAttribute(color, 4);
									cin >> sutun;
									SetConsoleTextAttribute(color, 7);
									cout << endl;

									if (setir == 3 && sutun == 'D')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][1];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 3 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][2];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 3 && sutun == 'F')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][3];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 3 && sutun == 'G')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][4];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 3 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][5];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 8 && sutun == 'B')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][6];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 8 && sutun == 'C')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][7];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


									if (setir == 8 && sutun == 'D')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][8];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


									if (setir == 8 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[1][0];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 8 && sutun == 'F')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[1][1];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


				}









			}









			// 9X9 - Asan səviyyədə çətinlik =1

			if (tesaduficedvel[0] == 1) {


				srand(time(0));

				int random;
				bool unique = true;
				const int ROW = 3;
				const int COLUMN = 3;

				int array[ROW][COLUMN];

				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COLUMN; j++)
					{
						do
						{
							random = rand() % 9 + 1;
							for (int x = 0; x < ROW; x++)
							{
								for (int y = 0; y < COLUMN; y++)
								{
									unique = true;
									if (array[x][y] == random)
									{
										unique = false;
										y = COLUMN;
										x = ROW;
									}

								}
							}
						} while (!unique);
						array[i][j] = random;


						massiv2[i][j] = random;

						cout << endl;

						cout << endl;



					}
				}


				int xana2[9][9]{ {},{},{} };
				int setir = 0;
				char sutun;




				for (int i = 0; i < 1000; i++)
				{
					system("CLS");
					cout << endl;
					cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 1 -> " << " \t " << " | ";
					cout << massiv2[0][0] << " | " << massiv2[0][1] << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[2][1] << " | " << massiv2[2][2] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 2 -> " << " \t " << " | ";
					cout << massiv2[2][0] << " | " << massiv2[1][0] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | " << massiv2[0][2] << " | " << massiv2[0][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 3 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[1][2] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0];
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | " << massiv2[1][1] << " | " << massiv2[1][0] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 4 -> " << " \t " << " | ";
					cout << massiv2[0][1] << " | " << massiv2[0][0] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[2][0] << " | " << massiv2[1][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 5 -> " << " \t " << " | ";
					cout << massiv2[2][2] << " | " << massiv2[2][0] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 6 -> " << " \t " << " | ";
					cout << massiv2[1][1] << " | " << massiv2[0][2] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[1][2] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][1] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 7 -> " << " \t " << " | ";
					cout << massiv2[0][2] << " | " << massiv2[1][1] << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | " << massiv2[1][0] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 8 -> " << " \t " << " | " << massiv2[1][0] << " | " << massiv2[2][2] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[0][0] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 9 -> " << " \t " << " | " << massiv2[1][2] << " | " << massiv2[2][1] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | " << massiv2[0][2] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[1][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << endl;




					if (
						(
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != xana2[0][2] &&
							xana2[0][1] != xana2[0][3] &&

							xana2[0][1] != xana2[0][4] &&
							xana2[0][1] != xana2[0][5] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][2] &&

							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != massiv2[2][2] &&

							xana2[0][1] != 0

							)
						
						&&

						(
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != xana2[0][1] &&
							xana2[0][2] != xana2[0][3] &&

							xana2[0][2] != xana2[0][4] &&
							xana2[0][2] != xana2[0][5] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][2] &&

							xana2[0][2] != massiv2[2][0] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[1][1] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != massiv2[0][0] &&

							xana2[0][2] != 0

							)


						&&

						(
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[1][2] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[0][2] &&
							xana2[0][3] != xana2[0][1] &&
							xana2[0][3] != xana2[0][2] &&

							xana2[0][2] != xana2[0][4] &&
							xana2[0][2] != xana2[0][5] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][2] &&

							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != massiv2[1][2] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[1][1] &&
							xana2[0][3] != massiv2[1][0] &&

							xana2[0][3] != 0

							)

						&&

						(
							xana2[0][4] != massiv2[0][2] &&
							xana2[0][4] != massiv2[1][0] &&
							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != massiv2[2][0] &&
							xana2[0][4] != massiv2[1][2] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != xana2[0][5] &&

							xana2[0][4] != xana2[0][1] &&
							xana2[0][4] != xana2[0][2] &&
							xana2[0][4] != xana2[0][3] &&
							xana2[0][4] != massiv2[1][0] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[0][2] &&

							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != massiv2[2][0] &&
							xana2[0][4] != massiv2[1][2] &&

							xana2[0][4] != 0

							)
								&&

								(
									xana2[0][5] != massiv2[0][2] &&
									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != massiv2[1][1] &&
									xana2[0][5] != massiv2[0][1] &&
									xana2[0][5] != massiv2[2][0] &&
									xana2[0][5] != massiv2[1][2] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != xana2[0][4] &&

									xana2[0][5] != xana2[0][1] &&
									xana2[0][5] != xana2[0][2] &&
									xana2[0][5] != xana2[0][3] &&
									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[0][2] &&

									xana2[0][5] != massiv2[2][2] &&
									xana2[0][5] != massiv2[2][0] &&
									xana2[0][5] != massiv2[1][2] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != xana2[0][6] &&
									xana2[0][5] != massiv2[0][2] &&

									xana2[0][5] != 0

									)


								&&

								(
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != massiv2[0][2] &&
									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != massiv2[2][1] &&
									xana2[0][6] != xana2[0][7] &&

									xana2[0][6] != massiv2[2][1] &&
									xana2[0][6] != massiv2[0][2] &&
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != xana2[0][8] &&
									xana2[0][6] != xana2[1][0] &&
									xana2[0][6] != xana2[1][1] &&

									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != xana2[0][5] &&

									xana2[0][6] != 0

									)

								&&

								(
									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != xana2[0][6] &&

									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != xana2[0][8] &&
									xana2[0][7] != xana2[1][0] &&
									xana2[0][7] != xana2[1][1] &&


									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][0] &&
									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[0][0] &&

									xana2[0][7] != 0

									)

								&&

								(
									xana2[0][8] != massiv2[2][1] &&
									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != xana2[1][0] &&
									xana2[0][8] != xana2[1][1] &&

									xana2[0][8] != massiv2[2][1] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != xana2[0][6] &&
									xana2[0][8] != xana2[0][7] &&


									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != massiv2[2][2] &&

									xana2[0][8] != 0

									)

										&&

										(
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != xana2[0][8] &&
											xana2[1][0] != xana2[1][1] &&

											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != xana2[0][6] &&
											xana2[1][0] != xana2[0][7] &&


											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != massiv2[1][1] &&

											xana2[1][0] != 0

											)

										&&

										(
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != massiv2[2][0] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[1][1] &&
											xana2[1][1] != xana2[0][8] &&
											xana2[1][1] != xana2[1][0] &&

											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[1][1] &&
											xana2[1][1] != massiv2[2][0] &&
											xana2[1][1] != xana2[0][6] &&
											xana2[1][1] != xana2[0][7] &&

											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[2][0] &&

											xana2[1][1] != 0

											))

											{

											cout << " \t\t\t\t " << " Uddunuz " << endl;
											PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
											Sleep(5000);
											system("color 7");
											Sleep(1000);
											system("color 9");
											Sleep(1000);
											system("color 7");
											Sleep(1000);
											system("color 9");
											Sleep(1000);
											system("cls");
											break;

					                        }


									cout << endl;
									cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
									SetConsoleTextAttribute(color, 4);
									cin >> setir;
									SetConsoleTextAttribute(color, 7);
									cout << endl;
									cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
									SetConsoleTextAttribute(color, 4);
									cin >> sutun;
									SetConsoleTextAttribute(color, 7);
									cout << endl;

									if (setir == 1 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][1];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 1 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][1];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


									if (setir == 2 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][2];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


									if (setir == 3 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][3];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 4 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][4];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 5 && sutun == 'E')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][5];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 5 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][6];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}


									if (setir == 6 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][7];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 7 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[0][8];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 8 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[1][0];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

									if (setir == 9 && sutun == 'H')
									{

										cout << " \t\t\t\t " << " Reqemi yazin: ";
										SetConsoleTextAttribute(color, 4);
										cin >> xana2[1][1];
										SetConsoleTextAttribute(color, 7);
										PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
										Sleep(1000);
										system("cls");

									}

								


				}







			}
		}














		// 9X9 - Orta səviyyədə çətinlik
		if (seviyye == 2)
		{
			// 9X9 - Orta səviyyədə çətinlik =2

			if (tesaduficedvel[0] == 2) {


				srand(time(0));

				int random;
				bool unique = true;
				const int ROW = 3;
				const int COLUMN = 3;

				int array[ROW][COLUMN];

				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COLUMN; j++)
					{
						do
						{
							random = rand() % 9 + 1;
							for (int x = 0; x < ROW; x++)
							{
								for (int y = 0; y < COLUMN; y++)
								{
									unique = true;
									if (array[x][y] == random)
									{
										unique = false;
										y = COLUMN;
										x = ROW;
									}

								}
							}
						} while (!unique);
						array[i][j] = random;


						massiv2[i][j] = random;

						cout << endl;

						cout << endl;



					}
				}


				int xana2[9][9]{ {},{},{} };
				int setir = 0;
				char sutun;



				for (int i = 0; i < 1000; i++)
				{
					system("CLS");
					cout << endl;
					cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 1 -> " << " \t " << " | ";
					cout << massiv2[0][0] << " | " << massiv2[0][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][1];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][4];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][0] << " | " << massiv2[1][1] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 2 -> " << " \t " << " | ";
					cout << massiv2[1][2] << " | " << massiv2[2][0] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[0][1] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | " << massiv2[0][2] << " | " << massiv2[0][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 3 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[2][2] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0];
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | " << massiv2[2][1] << " | " << massiv2[2][0] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 4 -> " << " \t " << " | ";
					cout << massiv2[0][1] << " | " << massiv2[0][0] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[1][2] << " | " << massiv2[2][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 5 -> " << " \t " << " | ";
					cout << massiv2[1][1] << " | " << massiv2[1][2] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | " << massiv2[2][0] << " | " << massiv2[0][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 6 -> " << " \t " << " | ";
					cout << massiv2[2][1] << " | " << massiv2[0][2] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[0][1] << " | " << massiv2[1][0];
					cout << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 7 -> " << " \t " << " | ";
					cout << massiv2[0][2] << " | " << massiv2[2][1] << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[0][0] << " | " << massiv2[1][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 8 -> " << " \t " << " | " << massiv2[2][0] << " | " << massiv2[1][1] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[0][0] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | " << massiv2[2][2] << " | " << massiv2[0][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 9 -> " << " \t " << " | " << massiv2[2][2] << " | " << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][2];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][5];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[1][1] << " | " << massiv2[2][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << endl;

					if (
						(
							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != massiv2[1][1] &&

							xana2[0][1] != xana2[0][2] &&
							xana2[0][1] != xana2[0][3] &&
							xana2[0][1] != xana2[0][4] &&
							xana2[0][1] != xana2[0][5] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[1][1] &&

							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != xana2[1][2] &&

							xana2[0][1] != 0
							)
						&&
						(

							xana2[0][2] != xana2[0][3] &&
							xana2[0][2] != xana2[0][4] &&
							xana2[0][2] != massiv2[1][1] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != xana2[0][6] &&
							xana2[0][2] != massiv2[0][2] &&

							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != xana2[0][1] &&
							xana2[0][2] != xana2[0][5] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[1][1] &&

							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[1][2] &&
							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != xana2[1][3] &&

							xana2[0][2] != 0
							)
						&&
						(

							xana2[0][3] != xana2[0][2] &&
							xana2[0][3] != xana2[0][4] &&
							xana2[0][3] != massiv2[1][1] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != xana2[0][6] &&
							xana2[0][3] != massiv2[0][2] &&

							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != xana2[0][1] &&
							xana2[0][3] != xana2[0][5] &&
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[1][1] &&

							xana2[0][3] != xana2[0][7] &&
							xana2[0][3] != xana2[0][8] &&
							xana2[0][3] != xana2[1][0] &&
							xana2[0][3] != xana2[1][1] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != xana2[1][4] &&

							xana2[0][3] != 0
							)
						&&
						(

							xana2[0][4] != xana2[0][2] &&
							xana2[0][4] != xana2[0][3] &&
							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != massiv2[1][0] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != xana2[0][6] &&
							xana2[0][4] != massiv2[0][2] &&

							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != xana2[0][1] &&
							xana2[0][4] != xana2[0][5] &&
							xana2[0][4] != massiv2[1][0] &&
							xana2[0][4] != massiv2[1][1] &&

							xana2[0][4] != massiv2[2][0] &&
							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != xana2[1][5] &&

							xana2[0][4] != 0
							)
								&&
								(

									xana2[0][6] != xana2[0][2] &&
									xana2[0][6] != xana2[0][3] &&
									xana2[0][6] != xana2[0][4] &&
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != massiv2[0][2] &&

									xana2[0][6] != xana2[0][7] &&
									xana2[0][6] != xana2[0][8] &&
									xana2[0][6] != xana2[1][0] &&
									xana2[0][6] != xana2[1][1] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != xana2[1][4] &&

									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != massiv2[1][1] &&
									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != massiv2[2][1] &&
									xana2[0][6] != massiv2[2][0] &&

									xana2[0][6] != 0
									)
								&&
								(


									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != massiv2[1][1] &&
									xana2[0][5] != massiv2[2][2] &&
									xana2[0][5] != massiv2[0][2] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[0][1] &&
									xana2[0][5] != massiv2[2][1] &&
									xana2[0][5] != massiv2[2][0] &&

									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[0][1] &&
									xana2[0][5] != xana2[0][1] &&
									xana2[0][5] != xana2[0][2] &&
									xana2[0][5] != xana2[0][3] &&
									xana2[0][5] != xana2[0][4] &&

									xana2[0][5] != massiv2[2][1] &&
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[1][1] &&
									xana2[0][5] != massiv2[1][0] &&
									xana2[0][5] != massiv2[0][2] &&
									xana2[0][5] != xana2[1][6] &&

									xana2[0][5] != 0
									)
								&&
								(


									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != xana2[0][8] &&
									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != xana2[1][0] &&
									xana2[0][7] != massiv2[0][0] &&
						
									xana2[0][7] != xana2[0][3] &&
									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != xana2[0][6] &&
									xana2[0][7] != xana2[1][1] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != xana2[1][4] &&

									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != massiv2[1][0] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[2][2] &&

									xana2[0][7] != 0
									)

								&&
								(


									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != massiv2[2][1] &&
									xana2[0][8] != xana2[0][7] &&
									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != xana2[1][0] &&
									xana2[0][8] != massiv2[0][0] &&

									xana2[0][8] != xana2[0][3] &&
									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != xana2[0][6] &&
									xana2[0][8] != xana2[1][1] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != xana2[1][4] &&

									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != massiv2[0][2] &&

									xana2[0][8] != 0
									)

										&&
										(


											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != xana2[0][7] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != massiv2[1][2] &&
											xana2[1][0] != xana2[0][8] &&
											xana2[1][0] != massiv2[0][0] &&

											xana2[1][0] != xana2[0][3] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != xana2[0][6] &&
											xana2[1][0] != xana2[1][1] &&
											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != xana2[1][4] &&

											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != massiv2[1][0] &&

						

											xana2[1][0] != 0
											)

										&&
										(


											xana2[1][1] != massiv2[2][2] &&
											xana2[1][1] != massiv2[1][1] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != xana2[1][3] &&
											xana2[1][1] != xana2[1][4] &&
											xana2[1][1] != xana2[1][5] &&

											xana2[1][1] != xana2[0][3] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != xana2[0][6] &&
											xana2[1][1] != xana2[0][7] &&
											xana2[1][1] != xana2[0][8] &&
											xana2[1][1] != xana2[1][0] &&

											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != massiv2[1][2] &&

											xana2[1][1] != 0
											)


										&&
										(

											xana2[1][4] != massiv2[2][2] &&
											xana2[1][4] != massiv2[1][1] &&
											xana2[1][4] != massiv2[1][0] &&
											xana2[1][4] != massiv2[0][0] &&
											xana2[1][4] != massiv2[2][1] &&
											xana2[1][4] != xana2[1][3] &&
											xana2[1][4] != xana2[1][1] &&
											xana2[1][4] != xana2[1][5] &&

											xana2[1][4] != xana2[0][3] &&
											xana2[1][4] != massiv2[0][1] &&
											xana2[1][4] != xana2[0][6] &&
											xana2[1][4] != xana2[0][7] &&
											xana2[1][4] != xana2[0][8] &&
											xana2[1][4] != xana2[1][0] &&

											xana2[1][4] != massiv2[2][2] &&
											xana2[1][4] != massiv2[1][0] &&
											xana2[1][4] != xana2[1][2] &&
											xana2[1][4] != xana2[1][6] &&
											xana2[1][4] != massiv2[1][1] &&
											xana2[1][4] != massiv2[2][1] &&

											xana2[1][4] != 0
											)

										&&
										(

											xana2[1][3] != massiv2[2][2] &&
											xana2[1][3] != massiv2[1][1] &&
											xana2[1][3] != massiv2[1][0] &&
											xana2[1][3] != massiv2[0][0] &&
											xana2[1][3] != massiv2[2][1] &&
											xana2[1][3] != xana2[1][4] &&
											xana2[1][3] != xana2[1][1] &&
											xana2[1][3] != xana2[1][5] &&

											xana2[1][3] != massiv2[2][2] &&
											xana2[1][3] != massiv2[1][0] &&
											xana2[1][3] != xana2[1][2] &&
											xana2[1][3] != xana2[1][6] &&
											xana2[1][3] != massiv2[1][1] &&
											xana2[1][3] != massiv2[2][1] &&

											xana2[1][3] != xana2[0][2] &&
											xana2[1][3] != massiv2[1][1] &&
											xana2[1][3] != massiv2[0][0] &&
											xana2[1][3] != massiv2[0][2] &&
											xana2[1][3] != massiv2[2][1] &&
											xana2[1][3] != massiv2[1][2] &&
										

											xana2[1][3] != 0
											)

												&&
												(

													xana2[1][5] != massiv2[2][2] &&
													xana2[1][5] != massiv2[1][1] &&
													xana2[1][5] != massiv2[1][0] &&
													xana2[1][5] != massiv2[0][0] &&
													xana2[1][5] != massiv2[2][1] &&
													xana2[1][5] != xana2[1][3] &&
													xana2[1][5] != xana2[1][4] &&
													xana2[1][5] != xana2[1][1] &&

													xana2[1][5] != massiv2[2][2] &&
													xana2[1][5] != massiv2[1][0] &&
													xana2[1][5] != xana2[1][2] &&
													xana2[1][5] != xana2[1][6] &&
													xana2[1][5] != massiv2[1][1] &&
													xana2[1][5] != massiv2[2][1] &&

													xana2[1][5] != xana2[0][4] &&
													xana2[1][5] != massiv2[1][0] &&
													xana2[1][5] != massiv2[0][2] &&
													xana2[1][5] != massiv2[2][0] &&
													xana2[1][5] != massiv2[0][1] &&
													xana2[1][5] != massiv2[0][0] &&

													xana2[1][5] != 0
													)

												&&
												(

													xana2[1][2] != massiv2[0][2] &&
													xana2[1][2] != massiv2[2][1] &&
													xana2[1][2] != massiv2[0][1] &&
													xana2[1][2] != massiv2[2][0] &&
													xana2[1][2] != massiv2[1][1] &&
													xana2[1][2] != massiv2[1][2] &&
													xana2[1][2] != massiv2[2][2] &&
													xana2[1][2] != massiv2[1][0] &&

													xana2[1][2] != xana2[1][3] &&
													xana2[1][2] != xana2[1][4] &&
													xana2[1][2] != xana2[1][5] &&
													xana2[1][2] != xana2[1][6] &&
													xana2[1][2] != massiv2[1][1] &&
													xana2[1][2] != massiv2[2][1] &&

													xana2[1][2] != xana2[0][1] &&
													xana2[1][2] != massiv2[2][1] &&
													xana2[1][2] != massiv2[1][1] &&
													xana2[1][2] != massiv2[1][0] &&
													xana2[1][2] != massiv2[2][2] &&
													xana2[1][2] != massiv2[2][0] &&

													xana2[1][2] != 0

													)
												&&
												(

													xana2[1][6] != massiv2[1][0] &&
													xana2[1][6] != massiv2[0][0] &&
													xana2[1][6] != massiv2[1][2] &&
													xana2[1][6] != massiv2[0][2] &&
													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[0][1] &&
													xana2[1][6] != massiv2[1][1] &&
													xana2[1][6] != massiv2[2][1] &&

													xana2[1][6] != xana2[0][5] &&
													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[0][1] &&
													xana2[1][6] != massiv2[2][1] &&
													xana2[1][6] != massiv2[0][0] &&
													xana2[1][6] != massiv2[1][1] &&

													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[1][0] &&
													xana2[1][6] != xana2[1][2] &&
													xana2[1][6] != xana2[1][3] &&
													xana2[1][6] != xana2[1][4] &&
													xana2[1][6] != xana2[1][5] &&

													xana2[1][6] != 0

													))
					{ 


					cout << " \t\t\t\t " << " Uddunuz " << endl;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
					Sleep(5000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("cls");
					break;
					
                    }


											cout << endl;
											cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
											SetConsoleTextAttribute(color, 4);
											cin >> setir;
											SetConsoleTextAttribute(color, 7);
											cout << endl;
											cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
											SetConsoleTextAttribute(color, 4);
											cin >> sutun;
											SetConsoleTextAttribute(color, 7);
											cout << endl;
											if (setir == 1 && sutun == 'C')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][1];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 1 && sutun == 'D')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][2];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 1 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][3];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 1 && sutun == 'F')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][4];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}
											if (setir == 1 && sutun == 'G')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][5];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 3 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][6];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 4 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][7];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 5 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][8];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 6 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][0];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 7 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][1];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 9 && sutun == 'C')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][2];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 9 && sutun == 'D')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][3];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}


											if (setir == 9 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][4];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 9 && sutun == 'F')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][5];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 9 && sutun == 'G')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][6];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}
				}
			}










			// 9X9 - Orta səviyyədə çətinlik =1

			if (tesaduficedvel[0] == 1) {


				srand(time(0));

				int random;
				bool unique = true;
				const int ROW = 3;
				const int COLUMN = 3;

				int array[ROW][COLUMN];

				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COLUMN; j++)
					{
						do
						{
							random = rand() % 9 + 1;
							for (int x = 0; x < ROW; x++)
							{
								for (int y = 0; y < COLUMN; y++)
								{
									unique = true;
									if (array[x][y] == random)
									{
										unique = false;
										y = COLUMN;
										x = ROW;
									}

								}
							}
						} while (!unique);
						array[i][j] = random;


						massiv2[i][j] = random;

						cout << endl;

						cout << endl;



					}
				}


				int xana2[9][9]{ {},{},{} };
				int setir = 0;
				char sutun;




				for (int i = 0; i < 1000; i++)
				{
					system("CLS");
					cout << endl;
					cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 1 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][0] << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | " << massiv2[1][0] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | " << massiv2[2][0] << " | " << massiv2[2][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 2 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][2] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[0][0] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | " << massiv2[0][1] << " | " << massiv2[2][2] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 3 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][1] << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2];
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | " << massiv2[1][0] << " | " << massiv2[0][2] << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 4 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[2][2] << " | " << massiv2[2][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[1][2] << " | " << massiv2[1][1];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 5 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][2] << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | " << massiv2[0][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 6 -> " << " \t " << " | ";
					cout << massiv2[1][0] << " | " << massiv2[0][1] << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | " << massiv2[0][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 7 -> " << " \t " << " | ";
					cout << massiv2[0][1] << " | " << massiv2[1][0] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 8 -> " << " \t " << " | " << massiv2[0][2] << " | " << massiv2[2][1] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[2][2] << " | " << massiv2[1][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][1] << " | " << massiv2[1][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 9 -> " << " \t " << " | " << massiv2[1][1] << " | " << massiv2[2][0] << " | " << massiv2[2][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | " << massiv2[0][1] << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][2] << " | " << massiv2[2][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << endl;
					





					if (
						(
							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != xana2[0][2] &&
							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != xana2[0][3] &&
							xana2[0][1] != massiv2[1][1] &&
							xana2[0][1] != massiv2[2][1] &&

							xana2[0][1] != xana2[0][5] &&
							xana2[0][1] != xana2[0][7] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[1][1] &&

							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[1][0] &&
							xana2[0][1] != massiv2[1][1] &&
							xana2[0][1] != massiv2[1][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[2][1] &&

							xana2[0][1] != 0
							)
						&&

						(
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != xana2[0][1] &&
							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != xana2[0][3] &&
							xana2[0][2] != massiv2[1][1] &&
							xana2[0][2] != massiv2[2][1] &&

							xana2[0][2] != xana2[0][5] &&
							xana2[0][2] != xana2[0][7] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != massiv2[1][1] &&

							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[2][0] &&
							xana2[0][2] != massiv2[1][1] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != massiv2[2][2] &&

							xana2[0][2] != 0
							)
						&&


						(
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != xana2[0][1] &&
							xana2[0][3] != massiv2[0][2] &&
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != xana2[0][2] &&
							xana2[0][3] != massiv2[1][1] &&
							xana2[0][3] != massiv2[2][1] &&

							xana2[0][3] != xana2[0][5] &&
							xana2[0][3] != xana2[0][7] &&
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[0][2] &&
							xana2[0][3] != massiv2[1][1] &&

							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != xana2[0][4] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[1][0] &&
							xana2[0][3] != massiv2[0][2] &&

							xana2[0][3] != 0
							)
						&&


						(
							xana2[0][5] != massiv2[2][2] &&
							xana2[0][5] != massiv2[2][0] &&
							xana2[0][5] != xana2[0][7] &&
							xana2[0][5] != massiv2[1][2] &&
							xana2[0][5] != massiv2[1][1] &&
							xana2[0][5] != massiv2[1][0] &&
							xana2[0][5] != massiv2[0][1] &&
							xana2[0][5] != massiv2[0][2] &&
		
							xana2[0][5] != xana2[0][1] &&
							xana2[0][5] != xana2[0][2] &&
							xana2[0][5] != xana2[0][3] &&
							xana2[0][5] != massiv2[0][1] &&
							xana2[0][5] != massiv2[0][2] &&
							xana2[0][5] != massiv2[1][1] &&

							xana2[0][5] != massiv2[0][1] &&
							xana2[0][5] != xana2[0][6] &&
							xana2[0][5] != massiv2[0][2] &&
							xana2[0][5] != massiv2[1][0] &&
							xana2[0][5] != massiv2[1][2] &&
							xana2[0][5] != massiv2[1][1] &&

							xana2[0][5] != 0
							)
						&&
								(
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != xana2[0][5] &&
									xana2[0][7] != massiv2[1][2] &&
									xana2[0][7] != massiv2[1][1] &&
									xana2[0][7] != massiv2[1][0] &&
									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != massiv2[0][2] &&

									xana2[0][7] != xana2[0][1] &&
									xana2[0][7] != xana2[0][2] &&
									xana2[0][7] != xana2[0][3] &&
									xana2[0][7] != massiv2[0][1] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != massiv2[1][1] &&

									xana2[0][7] != massiv2[1][0] &&
									xana2[0][7] != xana2[0][8] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != massiv2[0][2] &&
									xana2[0][7] != xana2[1][0] &&

									xana2[0][7] != 0
									)
								&&
								(
						
									xana2[0][4] != massiv2[0][2] &&
									xana2[0][4] != massiv2[1][0] &&
									xana2[0][4] != massiv2[1][1] &&
									xana2[0][4] != massiv2[2][1] &&
									xana2[0][4] != massiv2[0][0] &&
									xana2[0][4] != massiv2[2][0] &&
									xana2[0][4] != massiv2[2][2] &&
									xana2[0][4] != massiv2[0][1] &&
									
									xana2[0][4] != xana2[0][3] &&
									xana2[0][4] != massiv2[1][1] &&
									xana2[0][4] != massiv2[2][1] &&
									xana2[0][4] != massiv2[2][2] &&
									xana2[0][4] != massiv2[0][1] &&
									xana2[0][4] != massiv2[0][0] &&
									xana2[0][4] != massiv2[1][0] &&
									xana2[0][4] != massiv2[0][2] &&

									xana2[0][4] != massiv2[1][0] &&
									xana2[0][4] != massiv2[0][0] &&
									xana2[0][4] != xana2[0][6] &&
									xana2[0][4] != xana2[0][8] &&
									xana2[0][4] != xana2[1][1] &&
									xana2[0][4] != xana2[1][3] &&
									xana2[0][4] != massiv2[2][2] &&
									xana2[0][4] != massiv2[0][1] &&

									xana2[0][4] != 0
									)
								&&
								(

									xana2[0][6] != massiv2[0][1] &&
									xana2[0][6] != massiv2[0][2] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != xana2[0][8] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != xana2[1][1] &&
									xana2[0][6] != massiv2[2][2] &&

									xana2[0][6] != xana2[0][5] &&
									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[1][2] &&
									xana2[0][6] != massiv2[1][1] &&
							
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != massiv2[0][0] &&
									xana2[0][6] != xana2[0][4] &&
									xana2[0][6] != xana2[1][3] &&
									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != massiv2[0][1] &&

									xana2[0][6] != 0
									)
								&&
								(

									xana2[0][8] != massiv2[0][1] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != xana2[0][6] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != xana2[1][1] &&
									xana2[0][8] != massiv2[2][2] &&

									xana2[0][8] != massiv2[1][0] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != xana2[0][4] &&
									xana2[0][8] != xana2[1][3] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != massiv2[0][1] &&
	
									xana2[0][8] != xana2[0][7] &&
									xana2[0][8] != massiv2[1][2] &&
									xana2[0][8] != massiv2[1][1] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != massiv2[0][2] &&
									xana2[0][8] != xana2[1][0] &&

									xana2[0][8] != 0
									)
								&&

										(

											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != xana2[0][6] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != xana2[0][8] &&
											xana2[1][1] != massiv2[2][2] &&

											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != xana2[0][4] &&
											xana2[1][1] != xana2[1][3] &&
											xana2[1][1] != massiv2[2][2] &&
											xana2[1][1] != massiv2[0][1] &&

											xana2[1][1] != massiv2[1][0] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != xana2[1][2] &&
										
											xana2[1][1] != 0
											)
										&&

										(

											xana2[1][3] != massiv2[1][1] &&
											xana2[1][3] != massiv2[2][1] &&
											xana2[1][3] != massiv2[2][0] &&
											xana2[1][3] != massiv2[2][2] &&
											xana2[1][3] != massiv2[1][0] &&
											xana2[1][3] != massiv2[0][0] &&
											xana2[1][3] != massiv2[0][1] &&
											xana2[1][3] != massiv2[1][2] &&

											xana2[1][3] != massiv2[0][1] &&
											xana2[1][3] != massiv2[1][0] &&
											xana2[1][3] != massiv2[0][0] &&
											xana2[1][3] != massiv2[2][0] &&
											xana2[1][3] != massiv2[2][2] &&
											xana2[1][3] != xana2[1][4] &&

											xana2[1][3] != massiv2[1][0] &&
											xana2[1][3] != massiv2[0][0] &&
											xana2[1][3] != xana2[0][4] &&
											xana2[1][3] != xana2[0][6] &&
											xana2[1][3] != xana2[0][8] &&
											xana2[1][3] != xana2[1][1] &&
											xana2[1][3] != massiv2[2][2] &&
											xana2[1][3] != massiv2[0][1] &&

											xana2[1][3] != 0
											)
										&&

										(
											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != massiv2[1][2] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != xana2[1][2] &&

											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != xana2[1][4] &&
											xana2[1][0] != xana2[1][5] &&
											xana2[1][0] != xana2[1][6] &&

											xana2[1][0] != xana2[0][7] &&
											xana2[1][0] != massiv2[1][2] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != massiv2[1][0] &&
											xana2[1][0] != xana2[0][8] &&
											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != massiv2[2][2] &&
											xana2[1][0] != massiv2[0][2] &&

											
									

											xana2[1][0] != 0
											)
										&&

										(
											xana2[1][2] != massiv2[1][0] &&
											xana2[1][2] != massiv2[1][2] &&
											xana2[1][2] != massiv2[1][1] &&
											xana2[1][2] != massiv2[2][2] &&
											xana2[1][2] != massiv2[0][2] &&
											xana2[1][2] != massiv2[2][1] &&
											xana2[1][2] != massiv2[0][0] &&
											xana2[1][2] != xana2[1][0] &&

											xana2[1][2] != massiv2[2][1] &&
											xana2[1][2] != massiv2[2][2] &&
											xana2[1][2] != massiv2[0][2] &&
											xana2[1][2] != xana2[1][4] &&
											xana2[1][2] != xana2[1][5] &&
											xana2[1][2] != xana2[1][6] &&

											xana2[1][2] != massiv2[1][0] &&
											xana2[1][2] != massiv2[0][1] &&
											xana2[1][2] != massiv2[0][2] &&
											xana2[1][2] != massiv2[1][2] &&
											xana2[1][2] != xana2[1][1] &&
											xana2[1][2] != massiv2[2][2] &&
										
											xana2[1][2] != 0
											)
										&&

												(

													xana2[1][4] != massiv2[2][0] &&
													xana2[1][4] != massiv2[2][2] &&
													xana2[1][4] != massiv2[0][1] &&
													xana2[1][4] != massiv2[1][1] &&
													xana2[1][4] != xana2[1][5] &&
													xana2[1][4] != massiv2[0][2] &&
													xana2[1][4] != massiv2[2][1] &&
													xana2[1][4] != xana2[1][6] &&

													xana2[1][4] != massiv2[2][1] &&
													xana2[1][4] != massiv2[2][2] &&
													xana2[1][4] != massiv2[0][2] &&
													xana2[1][4] != massiv2[1][1] &&
													xana2[1][4] != xana2[1][0] &&
													xana2[1][4] != xana2[1][2] &&

													xana2[1][4] != massiv2[0][1] &&
													xana2[1][4] != massiv2[1][0] &&
													xana2[1][4] != massiv2[0][0] &&
													xana2[1][4] != massiv2[1][1] &&
													xana2[1][4] != xana2[1][3] &&
													xana2[1][4] != massiv2[2][1] &&
											
													xana2[1][4] != 0
													)
												&&
												(

													xana2[1][5] != massiv2[2][0] &&
													xana2[1][5] != massiv2[2][2] &&
													xana2[1][5] != massiv2[0][1] &&
													xana2[1][5] != massiv2[1][1] &&
													xana2[1][5] != xana2[1][4] &&
													xana2[1][5] != massiv2[0][2] &&
													xana2[1][5] != massiv2[2][1] &&
													xana2[1][5] != xana2[1][6] &&

													xana2[1][5] != massiv2[2][1] &&
													xana2[1][5] != massiv2[2][2] &&
													xana2[1][5] != massiv2[0][2] &&
													xana2[1][5] != massiv2[1][1] &&
													xana2[1][5] != xana2[1][0] &&
													xana2[1][5] != xana2[1][2] &&


													xana2[1][5] != massiv2[0][2] &&
													xana2[1][5] != massiv2[2][1] &&
													xana2[1][5] != massiv2[1][2] &&
													xana2[1][5] != massiv2[2][0] &&
													xana2[1][5] != massiv2[2][2] &&
													xana2[1][5] != massiv2[1][0] &&

													xana2[1][5] != 0
													)
												&&

												(

													xana2[1][6] != massiv2[2][0] &&
													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[0][1] &&
													xana2[1][6] != massiv2[1][1] &&
													xana2[1][6] != xana2[1][4] &&
													xana2[1][6] != massiv2[0][2] &&
													xana2[1][6] != massiv2[2][1] &&
													xana2[1][6] != xana2[1][5] &&

													xana2[1][6] != massiv2[2][1] &&
													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[0][2] &&
													xana2[1][6] != massiv2[1][1] &&
													xana2[1][6] != xana2[1][0] &&
													xana2[1][6] != xana2[1][2] &&

													xana2[1][6] != massiv2[1][1] &&
													xana2[1][6] != massiv2[2][0] &&
													xana2[1][6] != massiv2[2][2] &&
													xana2[1][6] != massiv2[0][0] &&
													xana2[1][6] != massiv2[0][1] &&
													xana2[1][6] != massiv2[1][2] &&
													xana2[1][6] != massiv2[0][2] &&
													xana2[1][6] != massiv2[2][1] &&

													xana2[1][6] != 0
													)
												)

					{

					cout << " \t\t\t\t " << " Uddunuz " << endl;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
					Sleep(5000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("cls");
					break;
						}


											cout << endl;
											cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
											SetConsoleTextAttribute(color, 4);
											cin >> setir;
											SetConsoleTextAttribute(color, 7);
											cout << endl;
											cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
											SetConsoleTextAttribute(color, 4);
											cin >> sutun;
											SetConsoleTextAttribute(color, 7);
											cout << endl;
											if (setir == 1 && sutun == 'A')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][1];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 2 && sutun == 'A')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][2];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 3 && sutun == 'A')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][3];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 4 && sutun == 'A')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][5];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 5 && sutun == 'A')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][7];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 3 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][4];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}


											if (setir == 4 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][6];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 5 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[0][8];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 6 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][1];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 7 && sutun == 'E')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][3];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}


											if (setir == 5 && sutun == 'I')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][0];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 6 && sutun == 'I')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][2];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 7 && sutun == 'I')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][4];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 8 && sutun == 'I')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][5];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

											if (setir == 9 && sutun == 'I')
											{

												cout << " \t\t\t\t " << " Reqemi yazin: ";
												SetConsoleTextAttribute(color, 4);
												cin >> xana2[1][6];
												SetConsoleTextAttribute(color, 7);
												PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
												Sleep(1000);
												system("cls");

											}

				}













			}
		}








		// 9X9 - Çetin səviyyədə çətinlik
		if (seviyye == 3)
		{
			
			// 9X9 - Çetin səviyyədə çətinlik =1

			if (tesaduficedvel[0] == 1) {


				srand(time(0));

				int random;
				bool unique = true;
				const int ROW = 3;
				const int COLUMN = 3;

				int array[ROW][COLUMN];

				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COLUMN; j++)
					{
						do
						{
							random = rand() % 9 + 1;
							for (int x = 0; x < ROW; x++)
							{
								for (int y = 0; y < COLUMN; y++)
								{
									unique = true;
									if (array[x][y] == random)
									{
										unique = false;
										y = COLUMN;
										x = ROW;
									}

								}
							}
						} while (!unique);
						array[i][j] = random;


						massiv2[i][j] = random;

						cout << endl;

						cout << endl;



					}
				}


				int xana2[9][9]{ {},{},{} };
				int setir = 0;
				char sutun;


				for (int i = 0; i < 1000; i++)
				{



					system("CLS");
					cout << endl;
					cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 1 -> " << " \t " << " | ";
					cout << massiv2[0][0];
					cout << " | " << massiv2[0][1] << " | " << massiv2[0][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][3];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | " << massiv2[2][1] << " | " << massiv2[2][2];
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 2 -> " << " \t " << " | " << massiv2[2][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][5];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[0][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[0][0] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 3 -> " << " \t " << " | ";
					cout << massiv2[2][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][1];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][3];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][0];
					cout << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 4 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[0][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][7];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[1][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][1];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 5 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][2];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[2][8];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[0][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 6 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][4];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][0] ;
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][7];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[3][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					SetConsoleTextAttribute(color, 9);
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					SetConsoleTextAttribute(color, 7);
					cout << " \t\t\t 7 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][1];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					cout << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][3];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][5];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 8 -> " << " \t " << " | " << massiv2[1][0] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][7];
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[2][1] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[4][8];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[1][1];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][0];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][1];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[0][1] << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << " \t\t\t 9 -> " << " \t " << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][2];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << massiv2[2][1] << " | " << massiv2[0][0];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][3];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][4];
					SetConsoleTextAttribute(color, 7);
					cout << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][5];
					SetConsoleTextAttribute(color, 9);
					cout << " | ";
					SetConsoleTextAttribute(color, 7);
					cout << massiv2[1][0] << " | " << massiv2[2][2] << " | ";
					SetConsoleTextAttribute(color, 4);
					cout << xana2[5][6];
					SetConsoleTextAttribute(color, 7);
					cout << " | " << endl;
					cout << " \t\t\t\t " << " ------------------------------------- " << endl;
					cout << endl;





					if (
						(
							xana2[0][1] != xana2[0][2] &&
							xana2[0][1] != xana2[0][3] &&
							xana2[0][1] != massiv2[2][2] &&
							xana2[0][1] != xana2[0][6] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != xana2[1][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != xana2[1][3] &&

							xana2[0][1] != massiv2[0][0] &&
							xana2[0][1] != massiv2[0][1] &&
							xana2[0][1] != massiv2[0][2] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != massiv2[2][2] &&

							xana2[0][1] != xana2[1][8] &&
							xana2[0][1] != xana2[2][6] &&
							xana2[0][1] != massiv2[2][0] &&
							xana2[0][1] != xana2[4][2] &&
							xana2[0][1] != massiv2[2][1] &&
							xana2[0][1] != xana2[5][3] &&


							xana2[0][1] != 0

							)

						&&

						(
							xana2[0][2] != xana2[0][1] &&
							xana2[0][2] != xana2[0][3] &&
							xana2[0][2] != massiv2[2][2] &&
							xana2[0][2] != xana2[0][6] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != xana2[1][2] &&
							xana2[0][2] != massiv2[2][0] &&
							xana2[0][2] != xana2[1][3] &&

							xana2[0][2] != xana2[2][0] &&
							xana2[0][2] != xana2[2][7] &&
							xana2[0][2] != xana2[3][5] &&
							xana2[0][2] != massiv2[1][0] &&
							xana2[0][2] != xana2[4][8] &&
							xana2[0][2] != xana2[5][4] &&

							xana2[0][2] != massiv2[0][0] &&
							xana2[0][2] != massiv2[0][1] &&
							xana2[0][2] != massiv2[0][2] &&
							xana2[0][2] != massiv2[2][0] &&
							xana2[0][2] != massiv2[2][1] &&
							xana2[0][2] != massiv2[2][2] &&


							xana2[0][2] != 0

							)

						&&

						(
							xana2[0][3] != xana2[0][1] &&
							xana2[0][3] != xana2[0][2] &&
							xana2[0][3] != massiv2[2][2] &&
							xana2[0][3] != xana2[0][6] &&
							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != xana2[1][2] &&
							xana2[0][3] != massiv2[2][0] &&
							xana2[0][3] != xana2[1][3] &&


							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != massiv2[0][1] &&
							xana2[0][3] != massiv2[0][2] &&
							xana2[0][3] != massiv2[2][0] &&
							xana2[0][3] != massiv2[2][1] &&
							xana2[0][3] != massiv2[2][2] &&

							xana2[0][3] != xana2[2][1] &&
							xana2[0][3] != xana2[2][8] &&
							xana2[0][3] != massiv2[0][0] &&
							xana2[0][3] != xana2[4][3] &&
							xana2[0][3] != massiv2[1][1] &&
							xana2[0][3] != xana2[5][5] &&

							xana2[0][3] != 0

							) 
						
						&&

						(
							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != massiv2[0][1] &&
							xana2[0][4] != massiv2[0][2] &&
							xana2[0][4] != massiv2[2][0] &&
							xana2[0][4] != xana2[0][5] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != xana2[1][0] &&
							xana2[0][4] != xana2[1][1] &&

							xana2[0][4] != massiv2[0][0] &&
							xana2[0][4] != xana2[2][5] &&
							xana2[0][4] != xana2[3][3] &&
							xana2[0][4] != massiv2[1][1] &&
							xana2[0][4] != xana2[4][6] &&
							xana2[0][4] != massiv2[2][1] &&

							xana2[0][4] != massiv2[2][2] &&
							xana2[0][4] != xana2[0][6] &&
							xana2[0][4] != massiv2[2][1] &&
							xana2[0][4] != xana2[0][7] &&
							xana2[0][4] != xana2[0][8] &&
							xana2[0][4] != massiv2[0][0] &&

							xana2[0][4] != 0

							)

						&&

								(
									xana2[0][5] != massiv2[0][0] &&
									xana2[0][5] != massiv2[0][1] &&
									xana2[0][5] != massiv2[0][2] &&
									xana2[0][5] != massiv2[2][0] &&
									xana2[0][5] != xana2[0][4] &&
									xana2[0][5] != massiv2[2][1] &&
									xana2[0][5] != xana2[1][0] &&
									xana2[0][5] != xana2[1][1] &&

									xana2[0][5] != massiv2[2][2] &&
									xana2[0][5] != xana2[0][6] &&
									xana2[0][5] != massiv2[2][1] &&
									xana2[0][5] != xana2[0][7] &&
									xana2[0][5] != xana2[0][8] &&
									xana2[0][5] != massiv2[0][0] &&

									xana2[0][5] != xana2[1][7] &&
									xana2[0][5] != massiv2[1][2] &&
									xana2[0][5] != xana2[3][4] &&
									xana2[0][5] != xana2[4][1] &&
									xana2[0][5] != xana2[4][7] &&
									xana2[0][5] != massiv2[0][0] &&

									xana2[0][5] != 0

									)

								&&
								(
									xana2[0][6] != xana2[0][1] &&
									xana2[0][6] != xana2[0][2] &&
									xana2[0][6] != massiv2[2][2] &&
									xana2[0][6] != xana2[0][3] &&
									xana2[0][6] != massiv2[2][1] &&
									xana2[0][6] != xana2[1][2] &&
									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != xana2[1][3] &&

									xana2[0][6] != xana2[2][0] &&
									xana2[0][6] != xana2[2][7] &&
									xana2[0][6] != xana2[3][5] &&
									xana2[0][6] != massiv2[1][0] &&
									xana2[0][6] != xana2[4][8] &&
									xana2[0][6] != xana2[5][4] &&

									xana2[0][6] != massiv2[2][0] &&
									xana2[0][6] != xana2[0][4] &&
									xana2[0][6] != xana2[0][5] &&
									xana2[0][6] != xana2[0][7] &&
									xana2[0][6] != xana2[0][8] &&
									xana2[0][6] != massiv2[0][0] &&

									xana2[0][6] != 0

									)

								&&

								(
									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != massiv2[2][1] &&
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != xana2[0][8] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != xana2[1][4] &&
									xana2[0][7] != xana2[1][5] &&
									xana2[0][7] != massiv2[1][0] &&

									xana2[0][7] != massiv2[2][0] &&
									xana2[0][7] != xana2[0][4] &&
									xana2[0][7] != xana2[0][5] &&
									xana2[0][7] != massiv2[2][2] &&
									xana2[0][7] != xana2[0][6] &&
									xana2[0][7] != massiv2[2][1] &&

									xana2[0][7] != xana2[2][2] &&
									xana2[0][7] != massiv2[0][0] &&
									xana2[0][7] != xana2[3][6] &&
									xana2[0][7] != xana2[4][4] &&
									xana2[0][7] != xana2[5][0] &&
									xana2[0][7] != massiv2[1][0] &&


									xana2[0][7] != 0

									)

								&&

								(
									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != massiv2[2][1] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != xana2[0][7] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != xana2[1][4] &&
									xana2[0][8] != xana2[1][5] &&
									xana2[0][8] != massiv2[1][0] &&

									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != xana2[0][4] &&
									xana2[0][8] != xana2[0][5] &&
									xana2[0][8] != massiv2[2][2] &&
									xana2[0][8] != xana2[0][6] &&
									xana2[0][8] != massiv2[2][1] &&

									xana2[0][8] != massiv2[2][0] &&
									xana2[0][8] != xana2[3][0] &&
									xana2[0][8] != xana2[3][7] &&
									xana2[0][8] != massiv2[0][0] &&
									xana2[0][8] != xana2[5][1] &&
									xana2[0][8] != massiv2[2][2] &&

									xana2[0][8] != 0

									)

								&&

										(
											
											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != massiv2[0][1] &&
											xana2[1][0] != massiv2[0][2] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != xana2[0][4] &&
											xana2[1][0] != xana2[0][5] &&
											xana2[1][0] != massiv2[2][1] &&
											xana2[1][0] != xana2[1][1] &&

											xana2[1][0] != xana2[1][2] &&
											xana2[1][0] != massiv2[2][0] &&
											xana2[1][0] != xana2[1][3] &&
											xana2[1][0] != xana2[1][4] &&
											xana2[1][0] != xana2[1][5] &&
											xana2[1][0] != massiv2[1][0] &&

											xana2[1][0] != massiv2[0][0] &&
											xana2[1][0] != xana2[2][5] &&
											xana2[1][0] != xana2[3][3] &&
											xana2[1][0] != massiv2[1][1] &&
											xana2[1][0] != xana2[4][6] &&
											xana2[1][0] != massiv2[2][1] &&

											xana2[1][0] != 0

											)

										&&

										(

											xana2[1][1] != massiv2[0][0] &&
											xana2[1][1] != massiv2[0][1] &&
											xana2[1][1] != massiv2[0][2] &&
											xana2[1][1] != massiv2[2][0] &&
											xana2[1][1] != xana2[0][4] &&
											xana2[1][1] != xana2[0][5] &&
											xana2[1][1] != massiv2[2][1] &&
											xana2[1][1] != xana2[1][0] &&
							

											xana2[1][1] != xana2[1][7] &&
											xana2[1][1] != massiv2[1][2] &&
											xana2[1][1] != xana2[3][4] &&
											xana2[1][1] != xana2[4][1] &&
											xana2[1][1] != xana2[4][7] &&
											xana2[1][1] != massiv2[0][0] &&
									
											xana2[1][1] != xana2[1][2] &&
											xana2[1][1] != massiv2[2][0] &&
											xana2[1][1] != xana2[1][3] &&
											xana2[1][1] != xana2[1][4] &&
											xana2[1][1] != xana2[1][5] &&
											xana2[1][1] != massiv2[1][0] &&

											xana2[1][1] != 0

											)

										&&


										(

											
											xana2[1][2] != xana2[0][1] &&
											xana2[1][2] != xana2[0][2] &&
											xana2[1][2] != xana2[0][3] &&
											xana2[1][2] != massiv2[2][2] &&
											xana2[1][2] != xana2[0][6] &&
											xana2[1][2] != massiv2[2][1] &&
											xana2[1][2] != massiv2[2][0] &&
											xana2[1][2] != xana2[1][3] &&

											xana2[1][2] != xana2[1][8] &&
											xana2[1][2] != xana2[2][6] &&
											xana2[1][2] != massiv2[2][0] &&
											xana2[1][2] != xana2[4][2] &&
											xana2[1][2] != massiv2[2][1] &&
											xana2[1][2] != xana2[5][3] &&

											xana2[1][2] != massiv2[2][1] &&
											xana2[1][2] != xana2[1][0] &&
											xana2[1][2] != xana2[1][1] &&
											xana2[1][2] != xana2[1][4] &&
											xana2[1][2] != xana2[1][5] &&
											xana2[1][2] != massiv2[1][0] &&

											xana2[1][2] != 0

											)

										&&
									(


										xana2[1][3] != xana2[0][1] &&
										xana2[1][3] != xana2[0][2] &&
										xana2[1][3] != xana2[0][3] &&
										xana2[1][3] != massiv2[2][2] &&
										xana2[1][3] != xana2[0][6] &&
										xana2[1][3] != massiv2[2][1] &&
										xana2[1][3] != xana2[1][2] &&
										xana2[1][3] != massiv2[2][0] &&
										

										xana2[1][3] != massiv2[2][1] &&
										xana2[1][3] != xana2[1][0] &&
										xana2[1][3] != xana2[1][1] &&
										xana2[1][3] != xana2[1][4] &&
										xana2[1][3] != xana2[1][5] &&
										xana2[1][3] != massiv2[1][0] &&

										xana2[1][3] != xana2[2][1] &&
										xana2[1][3] != xana2[2][8] &&
										xana2[1][3] != massiv2[0][0] &&
										xana2[1][3] != xana2[4][3] &&
										xana2[1][3] != massiv2[1][1] &&
										xana2[1][3] != xana2[5][5] &&

										xana2[1][3] != 0

										)

										&&
											(


										
												xana2[1][4] != massiv2[2][0] &&
												xana2[1][4] != massiv2[2][1] &&
												xana2[1][4] != massiv2[2][2] &&
												xana2[1][4] != xana2[0][7] &&
												xana2[1][4] != xana2[0][8] &&
												xana2[1][4] != massiv2[0][0] &&
												xana2[1][4] != xana2[1][5] &&
												xana2[1][4] != massiv2[1][0] &&

												xana2[1][4] != massiv2[2][1] &&
												xana2[1][4] != xana2[1][0] &&
												xana2[1][4] != xana2[1][1] &&
												xana2[1][4] != xana2[1][2] &&
												xana2[1][4] != massiv2[2][0] &&
												xana2[1][4] != xana2[1][3] &&
											
												xana2[1][4] != xana2[2][2] &&
												xana2[1][4] != massiv2[0][0] &&
												xana2[1][4] != xana2[3][6] &&
												xana2[1][4] != xana2[4][4] &&
												xana2[1][4] != xana2[5][0] &&
												xana2[1][4] != massiv2[1][0] &&

												xana2[1][4] != 0

													)
										

											&&
											(


												xana2[1][5] != massiv2[2][0] &&
												xana2[1][5] != massiv2[2][1] &&
												xana2[1][5] != massiv2[2][2] &&
												xana2[1][5] != xana2[0][7] &&
												xana2[1][5] != xana2[0][8] &&
												xana2[1][5] != massiv2[0][0] &&
												xana2[1][5] != xana2[1][4] &&
												xana2[1][5] != massiv2[1][0] &&

												xana2[1][5] != massiv2[2][1] &&
												xana2[1][5] != xana2[1][0] &&
												xana2[1][5] != xana2[1][1] &&
												xana2[1][5] != xana2[1][2] &&
												xana2[1][5] != massiv2[2][0] &&
												xana2[1][5] != xana2[1][3] &&

												xana2[1][5] != massiv2[2][0] &&
												xana2[1][5] != xana2[3][0] &&
												xana2[1][5] != xana2[3][7] &&
												xana2[1][5] != massiv2[0][0] &&
												xana2[1][5] != xana2[5][1] &&
												xana2[1][5] != massiv2[2][2] &&

												xana2[1][5] != 0

												)

												
											&&
											(

												xana2[1][6] != massiv2[0][0] &&
												xana2[1][6] != xana2[1][7] &&
												xana2[1][6] != xana2[2][4] &&
												xana2[1][6] != xana2[2][5] &&
												xana2[1][6] != massiv2[1][2] &&
												xana2[1][6] != xana2[3][2] &&
												xana2[1][6] != xana2[3][3] &&
												xana2[1][6] != xana2[3][4] &&

												xana2[1][6] != massiv2[0][0] &&
												xana2[1][6] != massiv2[2][0] &&
												xana2[1][6] != massiv2[2][1] &&
												xana2[1][6] != xana2[4][0] &&
												xana2[1][6] != massiv2[1][0] &&
												xana2[1][6] != xana2[5][2] &&

												xana2[1][6] != xana2[1][8] &&
												xana2[1][6] != xana2[2][0] &&
												xana2[1][6] != xana2[2][1] &&
												xana2[1][6] != xana2[2][2] &&
												xana2[1][6] != massiv2[2][0] &&
												xana2[1][6] != xana2[2][3] &&

												xana2[1][6] != 0

												)

											&&
											(


												xana2[1][7] != massiv2[0][0] &&
												xana2[1][7] != xana2[1][6] &&
												xana2[1][7] != xana2[2][4] &&
												xana2[1][7] != xana2[2][5] &&
												xana2[1][7] != massiv2[1][2] &&
												xana2[1][7] != xana2[3][2] &&
												xana2[1][7] != xana2[3][3] &&
												xana2[1][7] != xana2[3][4] &&

												xana2[1][7] != massiv2[0][2] &&
												xana2[1][7] != xana2[0][5] &&
												xana2[1][7] != xana2[1][1] &&
												xana2[1][7] != xana2[4][1] &&
												xana2[1][7] != xana2[4][7] &&
												xana2[1][7] != massiv2[0][0] &&

												xana2[1][7] != xana2[1][8] &&
												xana2[1][7] != xana2[2][0] &&
												xana2[1][7] != xana2[2][1] &&
												xana2[1][7] != xana2[2][2] &&
												xana2[1][7] != massiv2[2][0] &&
												xana2[1][7] != xana2[2][3] &&

												xana2[1][7] != 0

												)
													&&
													(


														xana2[2][4] != massiv2[0][0] &&
														xana2[2][4] != xana2[1][6] &&
														xana2[2][4] != xana2[1][7] &&
														xana2[2][4] != xana2[2][5] &&
														xana2[2][4] != massiv2[1][2] &&
														xana2[2][4] != xana2[3][2] &&
														xana2[2][4] != xana2[3][3] &&
														xana2[2][4] != xana2[3][4] &&

														xana2[2][4] != massiv2[0][0] &&
														xana2[2][4] != massiv2[2][0] &&
														xana2[2][4] != massiv2[2][1] &&
														xana2[2][4] != xana2[4][0] &&
														xana2[2][4] != massiv2[1][0] &&
														xana2[2][4] != xana2[5][2] &&

														xana2[2][4] != xana2[2][6] &&
														xana2[2][4] != xana2[2][7] &&
														xana2[2][4] != xana2[2][8] &&
														xana2[2][4] != massiv2[0][0] &&
														xana2[2][4] != xana2[3][0] &&
														xana2[2][4] != xana2[3][1] &&

														xana2[2][4] != 0

														)

													&&
													(


														xana2[2][5] != massiv2[0][0] &&
														xana2[2][5] != xana2[1][6] &&
														xana2[2][5] != xana2[1][7] &&
														xana2[2][5] != xana2[2][4] &&
														xana2[2][5] != massiv2[1][2] &&
														xana2[2][5] != xana2[3][2] &&
														xana2[2][5] != xana2[3][3] &&
														xana2[2][5] != xana2[3][4] &&

														xana2[2][5] != xana2[2][6] &&
														xana2[2][5] != xana2[2][7] &&
														xana2[2][5] != xana2[2][8] &&
														xana2[2][5] != massiv2[0][0] &&
														xana2[2][5] != xana2[3][0] &&
														xana2[2][5] != xana2[3][1] &&

														xana2[2][5] != massiv2[0][1] &&
														xana2[2][5] != xana2[0][4] &&
														xana2[2][5] != xana2[1][0] &&
														xana2[2][5] != massiv2[1][1] &&
														xana2[2][5] != xana2[4][6] &&
														xana2[2][5] != massiv2[2][1] &&

														xana2[2][5] != 0

														)

													&&
													(


														xana2[3][2] != massiv2[0][0] &&
														xana2[3][2] != xana2[1][6] &&
														xana2[3][2] != xana2[1][7] &&
														xana2[3][2] != xana2[2][4] &&
														xana2[3][2] != xana2[2][5] &&
														xana2[3][2] != massiv2[1][2] &&
														xana2[3][2] != xana2[3][3] &&
														xana2[3][2] != xana2[3][4] &&

														xana2[3][2] != massiv2[0][0] &&
														xana2[3][2] != massiv2[2][0] &&
														xana2[3][2] != massiv2[2][1] &&
														xana2[3][2] != xana2[4][0] &&
														xana2[3][2] != massiv2[1][0] &&
														xana2[3][2] != xana2[5][2] &&

														xana2[3][2] != massiv2[2][0] &&
														xana2[3][2] != xana2[3][5] &&
														xana2[3][2] != massiv2[0][0] &&
														xana2[3][2] != xana2[3][6] &&
														xana2[3][2] != xana2[3][7] &&
														xana2[3][2] != xana2[3][8] &&

														xana2[3][2] != 0

														)

													&&
													(


														xana2[3][3] != massiv2[0][0] &&
														xana2[3][3] != xana2[1][6] &&
														xana2[3][3] != xana2[1][7] &&
														xana2[3][3] != xana2[2][4] &&
														xana2[3][3] != massiv2[1][2] &&
														xana2[3][3] != xana2[3][2] &&
														xana2[3][3] != xana2[2][5] &&
														xana2[3][3] != xana2[3][4] &&

														xana2[3][3] != massiv2[0][1] &&
														xana2[3][3] != xana2[0][4] &&
														xana2[3][3] != xana2[1][0] &&
														xana2[3][3] != massiv2[1][1] &&
														xana2[3][3] != xana2[4][6] &&
														xana2[3][3] != massiv2[2][1] &&

														xana2[3][3] != massiv2[2][0] &&
														xana2[3][3] != xana2[3][5] &&
														xana2[3][3] != massiv2[0][0] &&
														xana2[3][3] != xana2[3][6] &&
														xana2[3][3] != xana2[3][7] &&
														xana2[3][3] != xana2[3][8] &&


														xana2[3][3] != 0

														)
															&&
															(


																xana2[3][4] != massiv2[0][0] &&
																xana2[3][4] != xana2[1][6] &&
																xana2[3][4] != xana2[2][4] &&
																xana2[3][4] != xana2[2][5] &&
																xana2[3][4] != massiv2[1][2] &&
																xana2[3][4] != xana2[3][2] &&
																xana2[3][4] != xana2[3][3] &&
																xana2[3][4] != xana2[1][7] &&

																xana2[3][4] != massiv2[0][2] &&
																xana2[3][4] != xana2[0][5] &&
																xana2[3][4] != xana2[1][1] &&
																xana2[3][4] != xana2[4][1] &&
																xana2[3][4] != xana2[4][7] &&
																xana2[3][4] != massiv2[0][0] &&

																xana2[3][4] != massiv2[2][0] &&
																xana2[3][4] != xana2[3][5] &&
																xana2[3][4] != massiv2[0][0] &&
																xana2[3][4] != xana2[3][6] &&
																xana2[3][4] != xana2[3][7] &&
																xana2[3][4] != xana2[3][8] &&

																xana2[3][4] != 0

																)
															&&
															(

																xana2[1][8] != xana2[2][0] &&
																xana2[1][8] != xana2[2][1] &&
																xana2[1][8] != xana2[2][6] &&
																xana2[1][8] != xana2[2][7] &&
																xana2[1][8] != xana2[2][8] &&
																xana2[1][8] != xana2[3][5] &&
																xana2[1][8] != massiv2[2][0] &&
																xana2[1][8] != massiv2[0][0] &&

																xana2[1][8] != xana2[1][6] &&
																xana2[1][8] != massiv2[0][0] &&
																xana2[1][8] != xana2[1][7] &&
																xana2[1][8] != xana2[2][2] &&
																xana2[1][8] != massiv2[2][0] &&
																xana2[1][8] != xana2[2][3] &&

																xana2[1][8] != xana2[0][1] &&
																xana2[1][8] != massiv2[2][2] &&
																xana2[1][8] != xana2[1][2] &&
																xana2[1][8] != xana2[4][2] &&
																xana2[1][8] != massiv2[2][1] &&
																xana2[1][8] != xana2[5][3] &&

																xana2[1][8] != 0

																)
															&&
															(


																xana2[2][0] != xana2[1][8] &&
																xana2[2][0] != xana2[2][1] &&
																xana2[2][0] != xana2[2][6] &&
																xana2[2][0] != xana2[2][7] &&
																xana2[2][0] != xana2[2][8] &&
																xana2[2][0] != xana2[3][5] &&
																xana2[2][0] != massiv2[2][0] &&
																xana2[2][0] != massiv2[0][0] &&

																xana2[2][0] != xana2[1][6] &&
																xana2[2][0] != massiv2[0][0] &&
																xana2[2][0] != xana2[1][7] &&
																xana2[2][0] != xana2[2][2] &&
																xana2[2][0] != massiv2[2][0] &&
																xana2[2][0] != xana2[2][3] &&

																xana2[2][0] != xana2[0][2] &&
																xana2[2][0] != xana2[0][6] &&
																xana2[2][0] != massiv2[2][0] &&
																xana2[2][0] != massiv2[1][0] &&
																xana2[2][0] != xana2[4][8] &&
																xana2[2][0] != xana2[5][4] &&

																xana2[2][0] != 0

																)
															&&
															(


																xana2[2][1] != xana2[1][8] &&
																xana2[2][1] != xana2[2][0] &&
																xana2[2][1] != xana2[2][6] &&
																xana2[2][1] != xana2[2][7] &&
																xana2[2][1] != xana2[2][8] &&
																xana2[2][1] != xana2[3][5] &&
																xana2[2][1] != massiv2[2][0] &&
																xana2[2][1] != massiv2[0][0] &&

																xana2[2][1] != xana2[1][6] &&
																xana2[2][1] != massiv2[0][0] &&
																xana2[2][1] != xana2[1][7] &&
																xana2[2][1] != xana2[2][2] &&
																xana2[2][1] != massiv2[2][0] &&
																xana2[2][1] != xana2[2][3] &&


																xana2[2][1] != xana2[0][3] &&
																xana2[2][1] != massiv2[2][1] &&
																xana2[2][1] != xana2[1][3] &&
																xana2[2][1] != xana2[4][3] &&
																xana2[2][1] != massiv2[1][1] &&
																xana2[2][1] != xana2[5][5] &&

																xana2[2][1] != 0

																)
																	&&
																	(

																		xana2[2][6] != xana2[1][8] &&
																		xana2[2][6] != xana2[2][0] &&
																		xana2[2][6] != xana2[2][1] &&
																		xana2[2][6] != xana2[2][7] &&
																		xana2[2][6] != xana2[2][8] &&
																		xana2[2][6] != xana2[3][5] &&
																		xana2[2][6] != massiv2[2][0] &&
																		xana2[2][6] != massiv2[0][0] &&

																		xana2[2][6] != xana2[2][4] &&
																		xana2[2][6] != xana2[2][5] &&
																		xana2[2][6] != massiv2[1][2] &&
																		xana2[2][6] != massiv2[0][0] &&
																		xana2[2][6] != xana2[3][0] &&
																		xana2[2][6] != xana2[3][1] &&

																		xana2[2][6] != xana2[0][1] &&
																		xana2[2][6] != massiv2[2][2] &&
																		xana2[2][6] != xana2[1][2] &&
																		xana2[2][6] != xana2[4][2] &&
																		xana2[2][6] != massiv2[2][1] &&
																		xana2[2][6] != xana2[5][3] &&

																		xana2[2][6] != 0

																		)
																	&&
																	(


																		xana2[2][7] != xana2[1][8] &&
																		xana2[2][7] != xana2[2][0] &&
																		xana2[2][7] != xana2[2][1] &&
																		xana2[2][7] != xana2[2][6] &&
																		xana2[2][7] != xana2[2][8] &&
																		xana2[2][7] != xana2[3][5] &&
																		xana2[2][7] != massiv2[2][0] &&
																		xana2[2][7] != massiv2[0][0] &&

																		xana2[2][7] != xana2[2][4] &&
																		xana2[2][7] != xana2[2][5] &&
																		xana2[2][7] != massiv2[1][2] &&
																		xana2[2][7] != massiv2[0][0] &&
																		xana2[2][7] != xana2[3][0] &&
																		xana2[2][7] != xana2[3][1] &&

																		xana2[2][7] != xana2[0][2] &&
																		xana2[2][7] != xana2[0][6] &&
																		xana2[2][7] != massiv2[2][0] &&
																		xana2[2][7] != massiv2[1][0] &&
																		xana2[2][7] != xana2[4][8] &&
																		xana2[2][7] != xana2[5][4] &&

																		xana2[2][7] != 0

																		)

																	&&
																	(


																		xana2[2][8] != xana2[1][8] &&
																		xana2[2][8] != xana2[2][0] &&
																		xana2[2][8] != xana2[2][1] &&
																		xana2[2][8] != xana2[2][6] &&
																		xana2[2][8] != xana2[2][7] &&
																		xana2[2][8] != xana2[3][5] &&
																		xana2[2][8] != massiv2[2][0] &&
																		xana2[2][8] != massiv2[0][0] &&

																		xana2[2][8] != xana2[2][4] &&
																		xana2[2][8] != xana2[2][5] &&
																		xana2[2][8] != massiv2[1][2] &&
																		xana2[2][8] != massiv2[0][0] &&
																		xana2[2][8] != xana2[3][0] &&
																		xana2[2][8] != xana2[3][1] &&

																		xana2[2][8] != xana2[0][3] &&
																		xana2[2][8] != massiv2[2][1] &&
																		xana2[2][8] != xana2[1][3] &&
																		xana2[2][8] != xana2[4][3] &&
																		xana2[2][8] != massiv2[1][1] &&
																		xana2[2][8] != xana2[5][5] &&

																		xana2[2][8] != 0

																		)

																	&&
																	(


																		xana2[3][5] != xana2[1][8] &&
																		xana2[3][5] != xana2[2][0] &&
																		xana2[3][5] != xana2[2][1] &&
																		xana2[3][5] != xana2[2][6] &&
																		xana2[3][5] != xana2[2][7] &&
																		xana2[3][5] != xana2[2][8] &&
																		xana2[3][5] != massiv2[2][0] &&
																		xana2[3][5] != massiv2[0][0] &&

																		xana2[3][5] != xana2[0][2] &&
																		xana2[3][5] != xana2[0][6] &&
																		xana2[3][5] != massiv2[2][0] &&
																		xana2[3][5] != massiv2[1][0] &&
																		xana2[3][5] != xana2[4][8] &&
																		xana2[3][5] != xana2[5][4] &&

																		xana2[3][5] != xana2[3][2] &&
																		xana2[3][5] != xana2[3][3] &&
																		xana2[3][5] != xana2[3][4] &&
																		xana2[3][5] != xana2[3][6] &&
																		xana2[3][5] != xana2[3][7] &&
																		xana2[3][5] != xana2[3][8] &&
																	

																		xana2[3][5] != 0

																		)
																			&&
																			(

																				xana2[2][2] != massiv2[2][0] &&
																				xana2[2][2] != xana2[2][3] &&
																				xana2[2][2] != massiv2[0][0] &&
																				xana2[2][2] != xana2[3][0] &&
																				xana2[2][2] != xana2[3][1] &&
																				xana2[2][2] != xana2[3][6] &&
																				xana2[2][2] != xana2[3][7] &&
																				xana2[2][2] != xana2[3][8] &&

																				xana2[2][2] != xana2[1][6] &&
																				xana2[2][2] != massiv2[0][0] &&
																				xana2[2][2] != xana2[1][7] &&
																				xana2[2][2] != xana2[1][8] &&
																				xana2[2][2] != xana2[2][0] &&
																				xana2[2][2] != xana2[2][1] &&

																				xana2[2][2] != massiv2[2][0] &&
																				xana2[2][2] != xana2[0][7] &&
																				xana2[2][2] != xana2[1][4] &&
																				xana2[2][2] != xana2[4][4] &&
																				xana2[2][2] != xana2[5][0] &&
																				xana2[2][2] != massiv2[1][0] &&


																				xana2[2][2] != 0

																				)
																			&&
																			(

																				xana2[2][3] != massiv2[2][0] &&
																				xana2[2][3] != xana2[2][2] &&
																				xana2[2][3] != massiv2[0][0] &&
																				xana2[2][3] != xana2[3][0] &&
																				xana2[2][3] != xana2[3][1] &&
																				xana2[2][3] != xana2[3][6] &&
																				xana2[2][3] != xana2[3][7] &&
																				xana2[2][3] != xana2[3][8] &&

																				xana2[2][3] != xana2[1][6] &&
																				xana2[2][3] != massiv2[0][0] &&
																				xana2[2][3] != xana2[1][7] &&
																				xana2[2][3] != xana2[1][8] &&
																				xana2[2][3] != xana2[2][0] &&
																				xana2[2][3] != xana2[2][1] &&

																				xana2[2][3] != massiv2[2][2] &&
																				xana2[2][3] != massiv2[0][0] &&
																				xana2[2][3] != massiv2[1][0] &&
																				xana2[2][3] != xana2[4][5] &&
																				xana2[2][3] != massiv2[0][1] &&
																				xana2[2][3] != xana2[5][6] &&

																				xana2[2][3] != 0

																				)

																			&&
																			(

																				xana2[3][0] != massiv2[2][0] &&
																				xana2[3][0] != xana2[2][2] &&
																				xana2[3][0] != massiv2[0][0] &&
																				xana2[3][0] != xana2[2][3] &&
																				xana2[3][0] != xana2[3][1] &&
																				xana2[3][0] != xana2[3][6] &&
																				xana2[3][0] != xana2[3][7] &&
																				xana2[3][0] != xana2[3][8] &&

																				xana2[3][0] != xana2[2][4] &&
																				xana2[3][0] != xana2[2][5] &&
																				xana2[3][0] != massiv2[1][2] &&
																				xana2[3][0] != xana2[2][6] &&
																				xana2[3][0] != xana2[2][7] &&
																				xana2[3][0] != xana2[2][8] &&

																				xana2[3][0] != massiv2[2][1] &&
																				xana2[3][0] != xana2[0][8] &&
																				xana2[3][0] != xana2[1][5] &&
																				xana2[3][0] != massiv2[0][0] &&
																				xana2[3][0] != xana2[5][1] &&
																				xana2[3][0] != massiv2[2][2] &&

																				xana2[3][0] != 0

																				)

																			&&
																			(

																				xana2[3][1] != massiv2[2][0] &&
																				xana2[3][1] != xana2[2][2] &&
																				xana2[3][1] != massiv2[0][0] &&
																				xana2[3][1] != xana2[2][3] &&
																				xana2[3][1] != xana2[3][0] &&
																				xana2[3][1] != xana2[3][6] &&
																				xana2[3][1] != xana2[3][7] &&
																				xana2[3][1] != xana2[3][8] &&

																				xana2[3][1] != xana2[2][4] &&
																				xana2[3][1] != xana2[2][5] &&
																				xana2[3][1] != massiv2[1][2] &&
																				xana2[3][1] != xana2[2][6] &&
																				xana2[3][1] != xana2[2][7] &&
																				xana2[3][1] != xana2[2][8] &&
																			
																				xana2[3][1] != massiv2[2][2] &&
																				xana2[3][1] != massiv2[0][0] &&
																				xana2[3][1] != massiv2[1][0] &&
																				xana2[3][1] != xana2[4][5] &&
																				xana2[3][1] != massiv2[0][1] &&
																				xana2[3][1] != xana2[5][6] &&

																				xana2[3][1] != 0

																				)

																					&&
																					(

																						xana2[3][6] != massiv2[2][0] &&
																						xana2[3][6] != xana2[2][2] &&
																						xana2[3][6] != massiv2[0][0] &&
																						xana2[3][6] != xana2[2][3] &&
																						xana2[3][6] != xana2[3][0] &&
																						xana2[3][6] != xana2[3][1] &&
																						xana2[3][6] != xana2[3][7] &&
																						xana2[3][6] != xana2[3][8] &&

																						xana2[3][6] != massiv2[2][0] &&
																						xana2[3][6] != xana2[0][7] &&
																						xana2[3][6] != xana2[1][4] &&
																						xana2[3][6] != xana2[4][4] &&
																						xana2[3][6] != xana2[5][0] &&
																						xana2[3][6] != massiv2[1][0] &&

																						xana2[3][6] != xana2[3][2] &&
																						xana2[3][6] != xana2[3][3] &&
																						xana2[3][6] != xana2[3][4] &&
																						xana2[3][6] != massiv2[2][0] &&
																						xana2[3][6] != xana2[3][5] &&
																						xana2[3][6] != massiv2[0][0] &&

																						xana2[3][6] != 0

																						)

																					&&
																					(

																						xana2[3][7] != massiv2[2][0] &&
																						xana2[3][7] != xana2[2][2] &&
																						xana2[3][7] != massiv2[0][0] &&
																						xana2[3][7] != xana2[2][3] &&
																						xana2[3][7] != xana2[3][0] &&
																						xana2[3][7] != xana2[3][1] &&
																						xana2[3][7] != xana2[3][6] &&
																						xana2[3][7] != xana2[3][8] &&

																						xana2[3][7] != xana2[3][2] &&
																						xana2[3][7] != xana2[3][3] &&
																						xana2[3][7] != xana2[3][4] &&
																						xana2[3][7] != massiv2[2][0] &&
																						xana2[3][7] != xana2[3][5] &&
																						xana2[3][7] != massiv2[0][0] &&

																						xana2[3][7] != massiv2[2][1] &&
																						xana2[3][7] != xana2[0][8] &&
																						xana2[3][7] != xana2[1][5] &&
																						xana2[3][7] != massiv2[0][0] &&
																						xana2[3][7] != xana2[5][1] &&
																						xana2[3][7] != massiv2[2][2] &&

																						xana2[3][7] != 0

																						)
																					&&
																					(


																						xana2[3][8] != massiv2[2][0] &&
																						xana2[3][8] != xana2[2][2] &&
																						xana2[3][8] != massiv2[0][0] &&
																						xana2[3][8] != xana2[2][3] &&
																						xana2[3][8] != xana2[3][0] &&
																						xana2[3][8] != xana2[3][1] &&
																						xana2[3][8] != xana2[3][6] &&
																						xana2[3][8] != xana2[3][7] &&

																						xana2[3][8] != xana2[3][2] &&
																						xana2[3][8] != xana2[3][3] &&
																						xana2[3][8] != xana2[3][4] &&
																						xana2[3][8] != massiv2[2][0] &&
																						xana2[3][8] != xana2[3][5] &&
																						xana2[3][8] != massiv2[0][0] &&

																						xana2[3][8] != massiv2[2][2] &&
																						xana2[3][8] != massiv2[0][0] &&
																						xana2[3][8] != massiv2[1][0] &&
																						xana2[3][8] != xana2[4][5] &&
																						xana2[3][8] != massiv2[0][1] &&
																						xana2[3][8] != xana2[5][6] &&


																						xana2[3][8] != 0

																						)
																					&&

																					(

																						xana2[4][0] != massiv2[1][1] &&
																						xana2[4][0] != xana2[4][1] &&
																						xana2[4][0] != massiv2[1][0] &&
																						xana2[4][0] != xana2[4][6] &&
																						xana2[4][0] != xana2[4][7] &&
																						xana2[4][0] != xana2[5][2] &&
																						xana2[4][0] != massiv2[2][1] &&
																						xana2[4][0] != massiv2[0][0] &&

																						xana2[4][0] != massiv2[0][0] &&
																						xana2[4][0] != massiv2[2][0] &&
																						xana2[4][0] != massiv2[2][1] &&
																						xana2[4][0] != xana2[1][6] &&
																						xana2[4][0] != xana2[2][4] &&
																						xana2[4][0] != xana2[3][2] &&

																						xana2[4][0] != xana2[4][2] &&
																						xana2[4][0] != massiv2[1][0] &&
																						xana2[4][0] != xana2[4][3] &&
																						xana2[4][0] != xana2[4][4] &&
																						xana2[4][0] != massiv2[0][0] &&
																						xana2[4][0] != xana2[4][5] &&

																						xana2[4][0] != 0

																						)
																					&&

																					(

																						xana2[5][2] != massiv2[1][1] &&
																						xana2[5][2] != xana2[4][1] &&
																						xana2[5][2] != massiv2[1][0] &&
																						xana2[5][2] != xana2[4][6] &&
																						xana2[5][2] != xana2[4][7] &&
																						xana2[5][2] != xana2[4][0] &&
																						xana2[5][2] != massiv2[2][1] &&
																						xana2[5][2] != massiv2[0][0] &&

																						xana2[5][2] != massiv2[0][0] &&
																						xana2[5][2] != massiv2[2][0] &&
																						xana2[5][2] != massiv2[2][1] &&
																						xana2[5][2] != xana2[1][6] &&
																						xana2[5][2] != xana2[2][4] &&
																						xana2[5][2] != xana2[3][2] &&

																						xana2[5][2] != xana2[5][3] &&
																						xana2[5][2] != xana2[5][4] &&
																						xana2[5][2] != xana2[5][5] &&
																						xana2[5][2] != massiv2[1][0] &&
																						xana2[5][2] != massiv2[2][2] &&
																						xana2[5][2] != xana2[5][6] &&

																						xana2[5][2] != 0

																						)
																					&&

																					(

																						xana2[4][6] != massiv2[1][1] &&
																						xana2[4][6] != xana2[4][1] &&
																						xana2[4][6] != massiv2[1][0] &&
																						xana2[4][6] != xana2[5][2] &&
																						xana2[4][6] != xana2[4][7] &&
																						xana2[4][6] != xana2[4][0] &&
																						xana2[4][6] != massiv2[2][1] &&
																						xana2[4][6] != massiv2[0][0] &&

																						xana2[4][6] != massiv2[0][1] &&
																						xana2[4][6] != xana2[0][4] &&
																						xana2[4][6] != xana2[1][0] &&
																						xana2[4][6] != massiv2[0][0] &&
																						xana2[4][6] != xana2[2][5] &&
																						xana2[4][6] != xana2[3][3] &&

																						xana2[4][6] != massiv2[2][1] &&
																						xana2[4][6] != xana2[4][8] &&
																						xana2[4][6] != massiv2[1][1] &&
																						xana2[4][6] != xana2[5][0] &&
																						xana2[4][6] != xana2[5][1] &&
																						xana2[4][6] != massiv2[0][1] &&

																						xana2[4][6] != 0

																						)

																					&&

																					(


																						xana2[4][7] != massiv2[1][1] &&
																						xana2[4][7] != xana2[4][1] &&
																						xana2[4][7] != massiv2[1][0] &&
																						xana2[4][7] != xana2[5][2] &&
																						xana2[4][7] != xana2[4][6] &&
																						xana2[4][7] != xana2[4][0] &&
																						xana2[4][7] != massiv2[2][1] &&
																						xana2[4][7] != massiv2[0][0] &&

																						xana2[4][7] != massiv2[2][1] &&
																						xana2[4][7] != xana2[4][8] &&
																						xana2[4][7] != massiv2[1][1] &&
																						xana2[4][7] != xana2[5][0] &&
																						xana2[4][7] != xana2[5][1] &&
																						xana2[4][7] != massiv2[0][1] &&

																						xana2[4][7] != massiv2[0][2] &&
																						xana2[4][7] != xana2[0][5] &&
																						xana2[4][7] != xana2[1][1] &&
																						xana2[4][7] != xana2[1][7] &&
																						xana2[4][7] != massiv2[1][2] &&
																						xana2[4][7] != xana2[3][4] &&

																						xana2[4][7] != 0

																						)

													


																					&&

																					(

																						xana2[4][2] != massiv2[1][0] &&
																						xana2[4][2] != xana2[4][3] &&
																						xana2[4][2] != massiv2[2][1] &&
																						xana2[4][2] != xana2[4][8] &&
																						xana2[4][2] != massiv2[1][1] &&
																						xana2[4][2] != xana2[5][3] &&
																						xana2[4][2] != xana2[5][4] &&
																						xana2[4][2] != xana2[5][5] &&

																						xana2[4][2] != xana2[0][1] &&
																						xana2[4][2] != massiv2[2][2] &&
																						xana2[4][2] != xana2[1][2] &&
																						xana2[4][2] != xana2[1][8] &&
																						xana2[4][2] != xana2[2][6] &&
																						xana2[4][2] != massiv2[2][0] &&


																						xana2[4][2] != xana2[4][0] &&
																						xana2[4][2] != massiv2[1][1] &&
																						xana2[4][2] != xana2[4][1] &&
																						xana2[4][2] != xana2[4][4] &&
																						xana2[4][2] != massiv2[0][0] &&
																						xana2[4][2] != xana2[4][5] &&

																						xana2[4][2] != 0

																						)


																					&&

																					(

																						xana2[4][3] != massiv2[1][0] &&
																						xana2[4][3] != xana2[4][2] &&
																						xana2[4][3] != massiv2[2][1] &&
																						xana2[4][3] != xana2[4][8] &&
																						xana2[4][3] != massiv2[1][1] &&
																						xana2[4][3] != xana2[5][3] &&
																						xana2[4][3] != xana2[5][4] &&
																						xana2[4][3] != xana2[5][5] &&

																						xana2[4][3] != xana2[4][0] &&
																						xana2[4][3] != massiv2[1][1] &&
																						xana2[4][3] != xana2[4][1] &&
																						xana2[4][3] != xana2[4][4] &&
																						xana2[4][3] != massiv2[0][0] &&
																						xana2[4][3] != xana2[4][5] &&

																						xana2[4][3] != xana2[0][3] &&
																						xana2[4][3] != massiv2[2][1] &&
																						xana2[4][3] != xana2[1][3] &&
																						xana2[4][3] != xana2[2][1] &&
																						xana2[4][3] != xana2[2][8] &&
																						xana2[4][3] != massiv2[0][0] &&

																						xana2[4][3] != 0

																						)

																					&&

																					(

																						xana2[4][8] != massiv2[1][0] &&
																						xana2[4][8] != xana2[4][2] &&
																						xana2[4][8] != massiv2[2][1] &&
																						xana2[4][8] != xana2[4][3] &&
																						xana2[4][8] != massiv2[1][1] &&
																						xana2[4][8] != xana2[5][3] &&
																						xana2[4][8] != xana2[5][4] &&
																						xana2[4][8] != xana2[5][5] &&

																						xana2[4][8] != massiv2[1][0] &&
																						xana2[4][8] != xana2[4][6] &&
																						xana2[4][8] != xana2[4][7] &&
																						xana2[4][8] != xana2[5][0] &&
																						xana2[4][8] != xana2[5][1] &&
																						xana2[4][8] != massiv2[0][1] &&

																						xana2[4][8] != xana2[0][2] &&
																						xana2[4][8] != xana2[0][6] &&
																						xana2[4][8] != massiv2[2][0] &&
																						xana2[4][8] != xana2[2][0] &&
																						xana2[4][8] != xana2[2][7] &&
																						xana2[4][8] != xana2[3][5] &&


																						xana2[4][8] != 0

																						)
																					&&

																					(

																						xana2[5][3] != massiv2[1][0] &&
																						xana2[5][3] != xana2[4][2] &&
																						xana2[5][3] != massiv2[2][1] &&
																						xana2[5][3] != xana2[4][3] &&
																						xana2[5][3] != massiv2[1][1] &&
																						xana2[5][3] != xana2[4][8] &&
																						xana2[5][3] != xana2[5][4] &&
																						xana2[5][3] != xana2[5][5] &&

																						xana2[5][3] != xana2[0][1] &&
																						xana2[5][3] != massiv2[2][2] &&
																						xana2[5][3] != xana2[1][2] &&
																						xana2[5][3] != xana2[1][8] &&
																						xana2[5][3] != xana2[2][6] &&
																						xana2[5][3] != massiv2[2][0] &&

																						xana2[5][3] != xana2[5][2] &&
																						xana2[5][3] != massiv2[2][1] &&
																						xana2[5][3] != massiv2[0][0] &&
																						xana2[5][3] != massiv2[1][0] &&
																						xana2[5][3] != massiv2[2][2] &&
																						xana2[5][3] != xana2[5][6] &&

																						xana2[5][3] != 0

																						)

																					&&
																					(

																						xana2[5][4] != massiv2[1][0] &&
																						xana2[5][4] != xana2[4][2] &&
																						xana2[5][4] != massiv2[2][1] &&
																						xana2[5][4] != xana2[4][3] &&
																						xana2[5][4] != massiv2[1][1] &&
																						xana2[5][4] != xana2[4][8] &&
																						xana2[5][4] != xana2[5][3] &&
																						xana2[5][4] != xana2[5][5] &&

																						xana2[5][4] != xana2[5][2] &&
																						xana2[5][4] != massiv2[2][1] &&
																						xana2[5][4] != massiv2[0][0] &&
																						xana2[5][4] != massiv2[1][0] &&
																						xana2[5][4] != massiv2[2][2] &&
																						xana2[5][4] != xana2[5][6] &&

																						xana2[5][4] != xana2[0][2] &&
																						xana2[5][4] != xana2[0][6] &&
																						xana2[5][4] != massiv2[2][0] &&
																						xana2[5][4] != xana2[2][0] &&
																						xana2[5][4] != xana2[2][7] &&
																						xana2[5][4] != xana2[3][5] &&

																						xana2[5][4] != 0

																						)

																					&&
																					(

																						xana2[5][5] != massiv2[1][0] &&
																						xana2[5][5] != xana2[4][2] &&
																						xana2[5][5] != massiv2[2][1] &&
																						xana2[5][5] != xana2[4][3] &&
																						xana2[5][5] != massiv2[1][1] &&
																						xana2[5][5] != xana2[4][8] &&
																						xana2[5][5] != xana2[5][3] &&
																						xana2[5][5] != xana2[5][4] &&

																						xana2[5][5] != xana2[5][2] &&
																						xana2[5][5] != massiv2[2][1] &&
																						xana2[5][5] != massiv2[0][0] &&
																						xana2[5][5] != massiv2[1][0] &&
																						xana2[5][5] != massiv2[2][2] &&
																						xana2[5][5] != xana2[5][6] &&

																						xana2[5][5] != xana2[0][3] &&
																						xana2[5][5] != massiv2[2][1] &&
																						xana2[5][5] != xana2[1][3] &&
																						xana2[5][5] != xana2[2][1] &&
																						xana2[5][5] != xana2[2][8] &&
																						xana2[5][5] != massiv2[0][0] &&

																						xana2[5][5] != 0

																						)
																					&&
																					(

																						xana2[4][4] != massiv2[0][0] &&
																						xana2[4][4] != xana2[4][5] &&
																						xana2[4][4] != xana2[5][0] &&
																						xana2[4][4] != xana2[5][1] &&
																						xana2[4][4] != massiv2[0][1] &&
																						xana2[4][4] != massiv2[1][0] &&
																						xana2[4][4] != massiv2[2][2] &&
																						xana2[4][4] != xana2[5][6] &&

																						xana2[4][4] != xana2[4][0] &&
																						xana2[4][4] != massiv2[1][1] &&
																						xana2[4][4] != xana2[4][1] &&
																						xana2[4][4] != xana2[4][2] &&
																						xana2[4][4] != massiv2[1][0] &&
																						xana2[4][4] != xana2[4][3] &&

																						xana2[4][4] != massiv2[2][0] &&
																						xana2[4][4] != xana2[0][7] &&
																						xana2[4][4] != xana2[1][4] &&
																						xana2[4][4] != xana2[2][2] &&
																						xana2[4][4] != massiv2[0][0] &&
																						xana2[4][4] != xana2[3][6] &&

																						xana2[4][4] != 0

																						)

																					&&
																					(

																						xana2[4][5] != massiv2[0][0] &&
																						xana2[4][5] != xana2[4][4] &&
																						xana2[4][5] != xana2[5][0] &&
																						xana2[4][5] != xana2[5][1] &&
																						xana2[4][5] != massiv2[0][1] &&
																						xana2[4][5] != massiv2[1][0] &&
																						xana2[4][5] != massiv2[2][2] &&
																						xana2[4][5] != xana2[5][6] &&

																						xana2[4][5] != xana2[4][0] &&
																						xana2[4][5] != massiv2[1][1] &&
																						xana2[4][5] != xana2[4][1] &&
																						xana2[4][5] != xana2[4][2] &&
																						xana2[4][5] != massiv2[1][0] &&
																						xana2[4][5] != xana2[4][3] &&

																						xana2[4][5] != massiv2[2][2] &&
																						xana2[4][5] != massiv2[0][0] &&
																						xana2[4][5] != massiv2[1][0] &&
																						xana2[4][5] != xana2[2][3] &&
																						xana2[4][5] != xana2[3][1] &&
																						xana2[4][5] != xana2[3][8] &&

																						xana2[4][5] != 0

																						)
																					&&
																					(

																						xana2[5][0] != massiv2[0][0] &&
																						xana2[5][0] != xana2[4][4] &&
																						xana2[5][0] != xana2[4][5] &&
																						xana2[5][0] != xana2[5][1] &&
																						xana2[5][0] != massiv2[0][1] &&
																						xana2[5][0] != massiv2[1][0] &&
																						xana2[5][0] != massiv2[2][2] &&
																						xana2[5][0] != xana2[5][6] &&

																						xana2[5][0] != massiv2[2][0] &&
																						xana2[5][0] != xana2[0][7] &&
																						xana2[5][0] != xana2[1][4] &&
																						xana2[5][0] != xana2[2][2] &&
																						xana2[5][0] != massiv2[0][0] &&
																						xana2[5][0] != xana2[3][6] &&

																						xana2[5][0] != massiv2[1][0] &&
																						xana2[5][0] != xana2[4][6] &&
																						xana2[5][0] != xana2[4][7] &&
																						xana2[5][0] != massiv2[2][1] &&
																						xana2[5][0] != xana2[4][8] &&
																						xana2[5][0] != massiv2[1][1] &&

																						xana2[5][0] != 0

																						)
																					&&
																					(

																						xana2[5][1] != massiv2[0][0] &&
																						xana2[5][1] != xana2[4][4] &&
																						xana2[5][1] != xana2[4][5] &&
																						xana2[5][1] != xana2[5][0] &&
																						xana2[5][1] != massiv2[0][1] &&
																						xana2[5][1] != massiv2[1][0] &&
																						xana2[5][1] != massiv2[2][2] &&
																						xana2[5][1] != xana2[5][6] &&

																						xana2[5][1] != massiv2[1][0] &&
																						xana2[5][1] != xana2[4][6] &&
																						xana2[5][1] != xana2[4][7] &&
																						xana2[5][1] != massiv2[2][1] &&
																						xana2[5][1] != xana2[4][8] &&
																						xana2[5][1] != massiv2[1][1] &&


																						xana2[5][1] != massiv2[2][1] &&
																						xana2[5][1] != xana2[0][8] &&
																						xana2[5][1] != xana2[1][5] &&
																						xana2[5][1] != massiv2[2][0] &&
																						xana2[5][1] != xana2[3][0] &&
																						xana2[5][1] != xana2[3][7] &&

																						xana2[5][1] != 0

																						)

																					&&
																					(

																						xana2[5][6] != massiv2[0][0] &&
																						xana2[5][6] != xana2[4][4] &&
																						xana2[5][6] != xana2[4][5] &&
																						xana2[5][6] != xana2[5][0] &&
																						xana2[5][6] != massiv2[0][1] &&
																						xana2[5][6] != massiv2[1][0] &&
																						xana2[5][6] != massiv2[2][2] &&
																						xana2[5][6] != xana2[5][1] &&

																						xana2[5][6] != massiv2[2][2] &&
																						xana2[5][6] != massiv2[0][0] &&
																						xana2[5][6] != massiv2[1][0] &&
																						xana2[5][6] != xana2[2][3] &&
																						xana2[5][6] != xana2[3][1] &&
																						xana2[5][6] != xana2[3][8] &&

																						xana2[5][6] != xana2[5][2] &&
																						xana2[5][6] != massiv2[2][1] &&
																						xana2[5][6] != massiv2[0][0] &&
																						xana2[5][6] != xana2[5][3] &&
																						xana2[5][6] != xana2[5][4] &&
																						xana2[5][6] != xana2[5][5] &&

																						xana2[5][6] != 0

																						)

							)
						{

							cout << " \t\t\t\t " << " Uddunuz " << endl;
							PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(5000);
							system("color 7");
							Sleep(1000);
							system("color 9");
							Sleep(1000);
							system("color 7");
							Sleep(1000);
							system("color 9");
							Sleep(1000);
							system("cls");
							break;
						}


						cout << endl;
						cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
						SetConsoleTextAttribute(color, 4);
						cin >> setir;
						SetConsoleTextAttribute(color, 7);
						cout << endl;
						cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
						SetConsoleTextAttribute(color, 4);
						cin >> sutun;
						SetConsoleTextAttribute(color, 7);
						cout << endl;
						if (setir == 1 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 1 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 1 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 2 && sutun == 'B')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 2 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 2 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 2 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][7];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 2 && sutun == 'H')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][8];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'B')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 3 && sutun == 'H')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'A')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 4 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][7];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[1][8];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 4 && sutun == 'I')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 5 && sutun == 'A')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 5 && sutun == 'B')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 5 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 5 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][7];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 5 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[2][8];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 5 && sutun == 'H')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 5 && sutun == 'I')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 6 && sutun == 'A')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 6 && sutun == 'B')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 6 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 6 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 6 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 6 && sutun == 'H')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][7];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 6 && sutun == 'I')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[3][8];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 7 && sutun == 'A')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 7 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 7 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 7 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 7 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 7 && sutun == 'I')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 8 && sutun == 'B')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 8 && sutun == 'C')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][7];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 8 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[4][8];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 8 && sutun == 'G')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][0];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 8 && sutun == 'H')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 9 && sutun == 'A')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][2];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 9 && sutun == 'D')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][3];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}



						if (setir == 9 && sutun == 'E')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][4];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}


						if (setir == 9 && sutun == 'F')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][5];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}

						if (setir == 9 && sutun == 'I')
						{

							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[5][6];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

						}
				}


			}













			// 9X9 - Çetin səviyyədə çətinlik =2
			if (tesaduficedvel[0]==2)
			{
			srand(time(0));
		
			int random;
			bool unique = true;
			const int ROW = 3;
			const int COLUMN = 3;

			int array[ROW][COLUMN];

			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COLUMN; j++)
				{
					do
					{
						random = rand() % 9 + 1;
						for (int x = 0; x < ROW; x++)
						{
							for (int y = 0; y < COLUMN; y++)
							{
								unique = true;
								if (array[x][y] == random)
								{
									unique = false;
									y = COLUMN;
									x = ROW;
								}

							}
						}
					} while (!unique);
					array[i][j] = random;


					massiv2[i][j] = random;

					cout << endl;

					cout << endl;



				}
			}
			int xana2[9][9]{ {},{},{} };
			int setir=0;
			char sutun;




			for (int i = 0; i < 1000; i++)
			{

				system("CLS");
				cout << endl;
				cout << " \t\t\t\t " << "   A   B   C   D   E   F   G   H   I" << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 1 -> " << " \t " << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][1];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[0][0] << " | " << massiv2[0][1];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[0][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][2];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][2];
				SetConsoleTextAttribute(color, 9);
				cout << " | "; 
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[2][0] << " | " << massiv2[2][1] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][3];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 2 -> " << " \t " << " | " << massiv2[2][0] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][4]; 
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][0];
				SetConsoleTextAttribute(color, 9);
				cout << " | "; 
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[2][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][5];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][1];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[1][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][6];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][1] << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 3 -> " << " \t " << " | " << massiv2[2][1];
				cout << " | " << massiv2[1][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][7];
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[1][1] << " | "; 
				SetConsoleTextAttribute(color, 4);
				cout << xana2[0][8];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[0][1];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][0]; 
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][0] << " | " << massiv2[0][2] << " | " << endl;
				SetConsoleTextAttribute(color, 9);
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				SetConsoleTextAttribute(color, 7);
				cout << " \t\t\t 4 -> " << " \t " << " | " << massiv2[0][0] << " | " << massiv2[1][1] << " | " << massiv2[2][1];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][1];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][2];
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 9);
				cout << " | "; 
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[1][0] << " | " << massiv2[2][0] << " | " << massiv2[1][2] << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 5 -> " << " \t " << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][3];
				SetConsoleTextAttribute(color, 7);
				cout << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][4];
				SetConsoleTextAttribute(color, 7);
				cout << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][5];
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[1][0] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][6];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[0][0];
				SetConsoleTextAttribute(color, 9);
				cout << " | "; 
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][7];
				SetConsoleTextAttribute(color, 7);
				cout << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[1][8];
				SetConsoleTextAttribute(color, 7); 
				cout << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][0];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 6 -> " << " \t " << " | " << massiv2[1][0] << " | " << massiv2[0][1] << " | " << massiv2[0][2];
				SetConsoleTextAttribute(color, 9);
				cout << " | "; 
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][1];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][2];
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[2][2] << " | " << massiv2[0][0] << " | " << massiv2[2][1] << " | " << endl;
				SetConsoleTextAttribute(color, 9);
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				SetConsoleTextAttribute(color, 7);
				cout << " \t\t\t 7 -> " << " \t " << " | " << massiv2[0][1] << " | " << massiv2[1][0] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][3];
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[1][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][4];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][2];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][5];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][1] << " | " << massiv2[2][0] << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 8 -> " << " \t " << " | ";
				cout << massiv2[0][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][6];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][0];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[2][1] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][7];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[1][0];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[0][1] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[2][8];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[0][0] << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << " \t\t\t 9 -> " << " \t " << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[3][0];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][1] << " | " << massiv2[1][1];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[0][0] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[3][1];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << massiv2[2][0];
				SetConsoleTextAttribute(color, 9);
				cout << " | ";
				SetConsoleTextAttribute(color, 7);
				cout << massiv2[0][2] << " | " << massiv2[2][2] << " | ";
				SetConsoleTextAttribute(color, 4);
				cout << xana2[3][2];
				SetConsoleTextAttribute(color, 7);
				cout << " | " << endl;
				cout << " \t\t\t\t " << " ------------------------------------- " << endl;
				cout << endl;
				
				if (
					(
						xana2[0][1] != massiv2[0][0] &&
						xana2[0][1] != massiv2[0][1] &&
						xana2[0][1] != massiv2[2][0] &&
						xana2[0][1] != xana2[0][4] &&
						xana2[0][1] != massiv2[1][0] &&
						xana2[0][1] != massiv2[2][1] &&
						xana2[0][1] != massiv2[1][2] &&
						xana2[0][1] != xana2[0][7] &&

						xana2[0][1] != massiv2[0][0] &&
						xana2[0][1] != xana2[1][3] &&
						xana2[0][1] != massiv2[1][0] &&
						xana2[0][1] != massiv2[0][1] &&
						xana2[0][1] != massiv2[0][2] &&
						xana2[0][1] != xana2[3][0] && 

						xana2[0][1] != massiv2[0][2] &&
						xana2[0][1] != xana2[0][2] &&
						xana2[0][1] != massiv2[1][2] &&
						xana2[0][1] != massiv2[2][0] &&
						xana2[0][1] != massiv2[2][1] &&
						xana2[0][1] != xana2[0][3] &&

						xana2[0][1] != 0

						)

					&&

					(
						xana2[0][4] != massiv2[0][0] &&
						xana2[0][4] != massiv2[0][1] &&
						xana2[0][4] != massiv2[2][0] &&
						xana2[0][4] != xana2[0][1] &&
						xana2[0][4] != massiv2[1][0] &&
						xana2[0][4] != massiv2[2][1] &&
						xana2[0][4] != massiv2[1][2] &&
						xana2[0][4] != xana2[0][7] &&

						xana2[0][4] != massiv2[1][1] &&
						xana2[0][4] != xana2[1][4] &&
						xana2[0][4] != massiv2[0][1] &&
						xana2[0][4] != massiv2[1][0] &&
						xana2[0][4] != xana2[2][6] &&
						xana2[0][4] != massiv2[2][1] && 

						xana2[0][4] != massiv2[2][2] &&
						xana2[0][4] != xana2[0][5] &&
						xana2[0][4] != massiv2[2][1] &&
						xana2[0][4] != massiv2[1][2] &&
						xana2[0][4] != xana2[0][6] &&
						xana2[0][4] != massiv2[1][1] &&

						xana2[0][4] != 0

						)

					&&

					(
						xana2[0][7] != massiv2[0][0] &&
						xana2[0][7] != massiv2[0][1] &&
						xana2[0][7] != massiv2[2][0] &&
						xana2[0][7] != xana2[0][1] &&
						xana2[0][7] != massiv2[1][0] &&
						xana2[0][7] != massiv2[2][1] &&
						xana2[0][7] != massiv2[1][2] &&
						xana2[0][7] != xana2[0][4] &&

						xana2[0][7] != massiv2[2][1] &&
						xana2[0][7] != xana2[1][5] &&
						xana2[0][7] != massiv2[0][2] &&
						xana2[0][7] != xana2[2][3] &&
						xana2[0][7] != massiv2[2][0] &&
						xana2[0][7] != massiv2[1][1] && 

						xana2[0][7] != massiv2[1][1] &&
						xana2[0][7] != xana2[0][8] &&
						xana2[0][7] != massiv2[0][1] &&
						xana2[0][7] != xana2[1][0] &&
						xana2[0][7] != massiv2[1][0] &&
						xana2[0][7] != massiv2[0][2] &&

						xana2[0][7] != 0

						)

					&&

					(
						xana2[1][3] != massiv2[0][0] &&
						xana2[1][3] != massiv2[1][1] &&
						xana2[1][3] != massiv2[2][1] &&
						xana2[1][3] != xana2[1][4] &&
						xana2[1][3] != xana2[1][5] &&
						xana2[1][3] != massiv2[1][0] &&
						xana2[1][3] != massiv2[0][1] &&
						xana2[1][3] != massiv2[0][2] &&

						xana2[1][3] != xana2[0][1] &&
						xana2[1][3] != massiv2[2][0] &&
						xana2[1][3] != massiv2[2][1] &&
						xana2[1][3] != massiv2[0][1] &&
						xana2[1][3] != massiv2[0][2] &&
						xana2[1][3] != xana2[3][0] &&

						xana2[1][3] != massiv2[1][0] &&
						xana2[1][3] != xana2[1][6] &&
						xana2[1][3] != massiv2[0][0] &&
						xana2[1][3] != xana2[1][7] &&
						xana2[1][3] != xana2[1][8] &&
						xana2[1][3] != xana2[2][0] &&

						xana2[1][3] != 0

						)

					&& 
						
					(
						xana2[1][4] != massiv2[0][0] &&
						xana2[1][4] != massiv2[1][1] &&
						xana2[1][4] != massiv2[2][1] &&
						xana2[1][4] != xana2[1][3] &&
						xana2[1][4] != xana2[1][5] &&
						xana2[1][4] != massiv2[1][0] &&
						xana2[1][4] != massiv2[0][1] &&
						xana2[1][4] != massiv2[0][2] &&

						xana2[1][4] != massiv2[0][0] &&
						xana2[1][4] != xana2[0][4] &&
						xana2[1][4] != massiv2[1][2] &&
						xana2[1][4] != massiv2[1][0] &&
						xana2[1][4] != xana2[2][6] &&
						xana2[1][4] != massiv2[2][1] &&
					
						xana2[1][4] != massiv2[1][0] &&
						xana2[1][4] != xana2[1][6] &&
						xana2[1][4] != massiv2[0][0] &&
						xana2[1][4] != xana2[1][7] &&
						xana2[1][4] != xana2[1][8] &&
						xana2[1][4] != xana2[2][0] &&

						xana2[1][4] != 0

						)

					&& 
							
					 (
						xana2[1][5] != massiv2[0][0] &&
						xana2[1][5] != massiv2[1][1] &&
						xana2[1][5] != massiv2[2][1] &&
						xana2[1][5] != xana2[1][3] &&
						xana2[1][5] != xana2[1][4] &&
						xana2[1][5] != massiv2[1][0] &&
						xana2[1][5] != massiv2[0][1] &&
						xana2[1][5] != massiv2[0][2] && 
						 
						xana2[1][5] != massiv2[0][1] &&
					    xana2[1][5] != massiv2[1][0] &&
						xana2[1][5] != xana2[0][7] &&
					    xana2[1][5] != xana2[2][3] &&
						xana2[1][5] != massiv2[2][0] &&
						xana2[1][5] != massiv2[1][1] &&

					    xana2[1][5] != massiv2[1][0] &&
						xana2[1][5] != xana2[1][6] &&
						xana2[1][5] != massiv2[0][0] &&
						xana2[1][5] != xana2[1][7] &&
						xana2[1][5] != xana2[1][8] &&
						xana2[1][5] != xana2[2][0] &&
						
						xana2[1][5] != 0

						)

					&& (
						xana2[2][3] != massiv2[0][1] &&
						xana2[2][3] != massiv2[1][0] &&
						xana2[2][3] != massiv2[0][2] &&
						xana2[2][3] != xana2[2][6] &&
						xana2[2][3] != massiv2[2][0] &&
						xana2[2][3] != xana2[3][0] &&
						xana2[2][3] != massiv2[2][1] &&
						xana2[2][3] != massiv2[1][1] &&

						xana2[2][3] != massiv2[0][1] &&
						xana2[2][3] != massiv2[1][0] &&
						xana2[2][3] != xana2[0][7] &&
						xana2[2][3] != massiv2[2][1] &&
						xana2[2][3] != xana2[1][5] &&
						xana2[2][3] != massiv2[0][2] &&
						
						xana2[2][3] != massiv2[1][2] &&
						xana2[2][3] != xana2[2][4] &&
						xana2[2][3] != massiv2[2][2] &&
						xana2[2][3] != xana2[2][5] &&
						xana2[2][3] != massiv2[1][1] &&
						xana2[2][3] != massiv2[2][0] &&


						xana2[2][3] != 0

						)

							&& 
							
						(
						xana2[2][6] != massiv2[0][1] &&
						xana2[2][6] != massiv2[1][0] &&
						xana2[2][6] != massiv2[0][2] &&
						xana2[2][6] != xana2[2][3] &&
						xana2[2][6] != massiv2[2][0] &&
						xana2[2][6] != xana2[3][0] &&
						xana2[2][6] != massiv2[2][1] &&
						xana2[2][6] != massiv2[1][1] &&

						xana2[2][6] != massiv2[0][0] &&
						xana2[2][6] != xana2[0][4] &&
						xana2[2][6] != massiv2[1][2] &&
						xana2[2][6] != massiv2[1][1] &&
						xana2[2][6] != xana2[1][4] &&
						xana2[2][6] != massiv2[0][1] &&
				
						xana2[2][6] != massiv2[2][1] &&
						xana2[2][6] != xana2[2][7] &&
						xana2[2][6] != massiv2[1][0] &&
						xana2[2][6] != massiv2[0][1] &&
						xana2[2][6] != xana2[2][8] &&
						xana2[2][6] != massiv2[0][0] &&

						xana2[2][6] != 0

								)

							&&

						(
						xana2[3][0] != massiv2[0][1] &&
						xana2[3][0] != massiv2[1][0] &&
						xana2[3][0] != massiv2[0][2] &&
						xana2[3][0] != xana2[2][3] &&
						xana2[3][0] != massiv2[2][0] &&
						xana2[3][0] != xana2[2][6] &&
						xana2[3][0] != massiv2[2][1] &&
						xana2[3][0] != massiv2[1][1] &&


						xana2[3][0] != xana2[0][1] &&
						xana2[3][0] != massiv2[2][0] &&
						xana2[3][0] != massiv2[2][1] &&
						xana2[3][0] != massiv2[0][0] &&
						xana2[3][0] != xana2[1][3] &&
						xana2[3][0] != massiv2[1][0] && 

						xana2[3][0] != massiv2[0][0] &&
						xana2[3][0] != xana2[3][1] &&
						xana2[3][0] != massiv2[2][0] &&
						xana2[3][0] != massiv2[0][2] &&
						xana2[3][0] != massiv2[2][2] &&
						xana2[3][0] != xana2[3][2] &&
							
						xana2[3][0] != 0

								)
							&&

							(
								xana2[0][2] != massiv2[0][2] &&
								xana2[0][2] != massiv2[1][2] &&
								xana2[0][2] != massiv2[2][2] &&
								xana2[0][2] != xana2[0][5] &&
								xana2[0][2] != massiv2[2][1] &&
								xana2[0][2] != massiv2[1][1] &&
								xana2[0][2] != xana2[0][8] &&
								xana2[0][2] != massiv2[0][1] &&

								xana2[0][2] != xana2[0][1] &&
								xana2[0][2] != massiv2[0][0] &&
								xana2[0][2] != massiv2[0][1] &&
								xana2[0][2] != massiv2[2][0] &&
								xana2[0][2] != massiv2[2][1] &&
								xana2[0][2] != xana2[0][3] &&

								xana2[0][2] != massiv2[2][2] &&
								xana2[0][2] != xana2[1][6] &&
								xana2[0][2] != massiv2[1][2] &&
								xana2[0][2] != xana2[2][4] &&
								xana2[0][2] != xana2[2][7] &&
								xana2[0][2] != xana2[3][1] &&

								xana2[0][2] != 0

								)


							&&

							(
								xana2[0][5] != massiv2[0][2] &&
								xana2[0][5] != massiv2[1][2] &&
								xana2[0][5] != massiv2[2][2] &&
								xana2[0][5] != xana2[0][2] &&
								xana2[0][5] != massiv2[2][1] &&
								xana2[0][5] != massiv2[1][1] &&
								xana2[0][5] != xana2[0][8] &&
								xana2[0][5] != massiv2[0][1] &&

								xana2[0][5] != massiv2[2][2] &&
								xana2[0][5] != xana2[1][6] &&
								xana2[0][5] != massiv2[1][2] &&
								xana2[0][5] != xana2[2][4] &&
								xana2[0][5] != xana2[2][7] &&
								xana2[0][5] != xana2[3][1] &&
							
								xana2[0][5] != massiv2[2][0] &&
								xana2[0][5] != xana2[0][4] &&
								xana2[0][5] != massiv2[1][0] &&
								xana2[0][5] != massiv2[1][2] &&
								xana2[0][5] != xana2[0][6] &&
								xana2[0][5] != massiv2[1][1] &&

								xana2[0][5] != 0

								)

							&&

							(
								xana2[0][8] != massiv2[0][2] &&
								xana2[0][8] != massiv2[1][2] &&
								xana2[0][8] != massiv2[2][2] &&
								xana2[0][8] != xana2[0][2] &&
								xana2[0][8] != massiv2[2][1] &&
								xana2[0][8] != massiv2[1][1] &&
								xana2[0][8] != xana2[0][5] &&
								xana2[0][8] != massiv2[0][1] &&

								xana2[0][8] != massiv2[2][2] &&
								xana2[0][8] != xana2[1][6] &&
								xana2[0][8] != massiv2[1][2] &&
								xana2[0][8] != xana2[2][4] &&
								xana2[0][8] != xana2[2][7] &&
								xana2[0][8] != xana2[3][1] &&

								xana2[0][8] != massiv2[2][1] &&
								xana2[0][8] != massiv2[1][2] &&
								xana2[0][8] != xana2[0][7] &&
								xana2[0][8] != xana2[1][0] &&
								xana2[0][8] != massiv2[1][0] &&
								xana2[0][8] != massiv2[0][2] &&


								xana2[0][8] != 0

								)

							&&

							(
								xana2[1][1] != massiv2[2][2] &&
								xana2[1][1] != xana2[1][2] &&
								xana2[1][1] != massiv2[1][0] &&
								xana2[1][1] != xana2[1][6] &&
								xana2[1][1] != massiv2[0][0] &&
								xana2[1][1] != xana2[2][1] &&
								xana2[1][1] != massiv2[1][2] &&
								xana2[1][1] != xana2[2][2] &&

								xana2[1][1] != massiv2[0][2] &&
								xana2[1][1] != massiv2[2][2] &&
								xana2[1][1] != massiv2[1][1] &&
								xana2[1][1] != massiv2[1][2] &&
								xana2[1][1] != massiv2[2][1] &&
								xana2[1][1] != massiv2[0][0] &&

								xana2[1][1] != massiv2[0][0] &&
								xana2[1][1] != massiv2[1][1] &&
								xana2[1][1] != massiv2[2][1] &&
								xana2[1][1] != massiv2[1][0] &&
								xana2[1][1] != massiv2[2][0] &&
								xana2[1][1] != massiv2[1][2] &&

								xana2[1][1] != 0

								)

									&&

									(
										xana2[1][2] != massiv2[2][2] &&
										xana2[1][2] != xana2[1][1] &&
										xana2[1][2] != massiv2[1][0] &&
										xana2[1][2] != xana2[1][6] &&
										xana2[1][2] != massiv2[0][0] &&
										xana2[1][2] != xana2[2][1] &&
										xana2[1][2] != massiv2[1][2] &&
										xana2[1][2] != xana2[2][2] &&

										xana2[1][2] != massiv2[0][0] &&
										xana2[1][2] != massiv2[1][1] &&
										xana2[1][2] != massiv2[2][1] &&
										xana2[1][2] != massiv2[1][0] &&
										xana2[1][2] != massiv2[2][0] &&
										xana2[1][2] != massiv2[1][2] &&

										xana2[1][2] != massiv2[1][2] &&
										xana2[1][2] != massiv2[2][1] &&
										xana2[1][2] != massiv2[0][1] &&
										xana2[1][2] != massiv2[2][2] &&
										xana2[1][2] != massiv2[1][0] &&
										xana2[1][2] != massiv2[2][0] &&
									
										xana2[1][2] != 0

										)



									&&

									(
										xana2[1][6] != massiv2[2][2] &&
										xana2[1][6] != xana2[1][1] &&
										xana2[1][6] != massiv2[1][0] &&
										xana2[1][6] != xana2[1][2] &&
										xana2[1][6] != massiv2[0][0] &&
										xana2[1][6] != xana2[2][1] &&
										xana2[1][6] != massiv2[1][2] &&
										xana2[1][6] != xana2[2][2] &&

										xana2[1][6] != xana2[0][2] &&
										xana2[1][6] != xana2[0][5] &&
										xana2[1][6] != xana2[0][8] &&
										xana2[1][6] != xana2[2][4] &&
										xana2[1][6] != xana2[2][7] &&
										xana2[1][6] != xana2[3][1] &&

										xana2[1][6] != xana2[1][3] &&
										xana2[1][6] != xana2[1][4] &&
										xana2[1][6] != xana2[1][5] &&
										xana2[1][6] != xana2[1][7] &&
										xana2[1][6] != xana2[1][8] &&
										xana2[1][6] != xana2[2][0] &&


										xana2[1][6] != 0

										)


									&&

									(
										xana2[2][1] != massiv2[2][2] &&
										xana2[2][1] != xana2[1][1] &&
										xana2[2][1] != massiv2[1][0] &&
										xana2[2][1] != xana2[1][2] &&
										xana2[2][1] != massiv2[0][0] &&
										xana2[2][1] != xana2[1][6] &&
										xana2[2][1] != massiv2[1][2] &&
										xana2[2][1] != xana2[2][2] &&

										xana2[2][1] != massiv2[0][2] &&
										xana2[2][1] != massiv2[2][2] &&
										xana2[2][1] != massiv2[1][1] &&
										xana2[2][1] != massiv2[1][2] &&
										xana2[2][1] != massiv2[2][1] &&
										xana2[2][1] != massiv2[0][0] &&

										xana2[2][1] != massiv2[1][0] &&
										xana2[2][1] != massiv2[0][1] &&
										xana2[2][1] != massiv2[0][2] &&
										xana2[2][1] != massiv2[2][2] &&
										xana2[2][1] != massiv2[0][0] &&
										xana2[2][1] != massiv2[2][1] &&

										xana2[2][1] != 0

										)

									&&

									(
										xana2[2][2] != massiv2[2][2] &&
										xana2[2][2] != xana2[1][1] &&
										xana2[2][2] != massiv2[1][0] &&
										xana2[2][2] != xana2[1][2] &&
										xana2[2][2] != massiv2[0][0] &&
										xana2[2][2] != xana2[1][6] &&
										xana2[2][2] != massiv2[1][2] &&
										xana2[2][2] != xana2[2][1] &&

										xana2[2][2] != massiv2[1][0] &&
										xana2[2][2] != massiv2[0][1] &&
										xana2[2][2] != massiv2[0][2] &&
										xana2[2][2] != massiv2[2][2] &&
										xana2[2][2] != massiv2[0][0] &&
										xana2[2][2] != massiv2[2][1] &&

										xana2[2][2] != massiv2[1][2] &&
										xana2[2][2] != massiv2[2][1] &&
										xana2[2][2] != massiv2[0][1] &&
										xana2[2][2] != massiv2[2][2] &&
										xana2[2][2] != massiv2[1][0] &&
										xana2[2][2] != massiv2[2][0] &&

										xana2[2][2] != 0

										)  
				 &&

									(
										xana2[2][4] != massiv2[1][2] &&
										xana2[2][4] != massiv2[2][2] &&
										xana2[2][4] != massiv2[2][1] &&
										xana2[2][4] != xana2[2][7] &&
										xana2[2][4] != massiv2[1][0] &&
										xana2[2][4] != massiv2[0][0] &&
										xana2[2][4] != xana2[3][1] &&
										xana2[2][4] != massiv2[2][0] &&

										xana2[2][4] != massiv2[0][1] &&
										xana2[2][4] != massiv2[1][0] &&
										xana2[2][4] != xana2[2][3] &&
										xana2[2][4] != xana2[2][5] &&
										xana2[2][4] != massiv2[1][1] &&
										xana2[2][4] != massiv2[2][0] &&

										xana2[2][4] != xana2[0][2] &&
										xana2[2][4] != xana2[0][5] &&
										xana2[2][4] != xana2[0][8] &&
										xana2[2][4] != massiv2[2][2] &&
										xana2[2][4] != xana2[1][6] &&
										xana2[2][4] != massiv2[1][2] &&

										xana2[2][4] != 0

										)

											&&

											(
												xana2[2][7] != massiv2[1][2] &&
												xana2[2][7] != massiv2[2][2] &&
												xana2[2][7] != massiv2[2][1] &&
												xana2[2][7] != xana2[2][4] &&
												xana2[2][7] != massiv2[1][0] &&
												xana2[2][7] != massiv2[0][0] &&
												xana2[2][7] != xana2[3][1] &&
												xana2[2][7] != massiv2[2][0] &&

												xana2[2][7] != xana2[0][2] &&
												xana2[2][7] != xana2[0][5] &&
												xana2[2][7] != xana2[0][8] &&
												xana2[2][7] != massiv2[2][2] &&
												xana2[2][7] != xana2[1][6] &&
												xana2[2][7] != massiv2[1][2] &&

												xana2[2][7] != massiv2[0][2] &&
												xana2[2][7] != xana2[2][6] &&
												xana2[2][7] != massiv2[2][0] &&
												xana2[2][7] != massiv2[0][1] &&
												xana2[2][7] != xana2[2][8] &&
												xana2[2][7] != massiv2[0][0] &&

												xana2[2][7] != 0

												)

											&&

											(
												xana2[3][1] != massiv2[1][2] &&
												xana2[3][1] != massiv2[2][2] &&
												xana2[3][1] != massiv2[2][1] &&
												xana2[3][1] != xana2[2][4] &&
												xana2[3][1] != massiv2[1][0] &&
												xana2[3][1] != massiv2[0][0] &&
												xana2[3][1] != xana2[2][7] &&
												xana2[3][1] != massiv2[2][0] &&

												xana2[3][1] != xana2[0][2] &&
												xana2[3][1] != xana2[0][5] &&
												xana2[3][1] != xana2[0][8] &&
												xana2[3][1] != massiv2[2][2] &&
												xana2[3][1] != xana2[1][6] &&
												xana2[3][1] != massiv2[1][2] &&

											
												xana2[3][1] != xana2[3][0] &&
												xana2[3][1] != massiv2[2][1] &&
												xana2[3][1] != massiv2[1][1] &&
												xana2[3][1] != massiv2[0][2] &&
												xana2[3][1] != massiv2[2][2] &&
												xana2[3][1] != xana2[3][2] &&

												xana2[3][1] != 0

												)

											&&

											(
												xana2[0][3] != massiv2[2][0] &&
												xana2[0][3] != massiv2[2][1] &&
												xana2[0][3] != massiv2[1][2] &&
												xana2[0][3] != xana2[0][6] &&
												xana2[0][3] != massiv2[1][1] &&
												xana2[0][3] != xana2[1][0] &&
												xana2[0][3] != massiv2[1][0] &&
												xana2[0][3] != massiv2[0][2] &&
											
												xana2[0][3] != massiv2[1][2] &&
												xana2[0][3] != xana2[2][0] &&
												xana2[0][3] != massiv2[2][1] &&
												xana2[0][3] != massiv2[2][0] &&
												xana2[0][3] != massiv2[0][0] &&
												xana2[0][3] != xana2[3][2] &&

												xana2[0][3] != xana2[0][1] &&
												xana2[0][3] != massiv2[0][0] &&
												xana2[0][3] != massiv2[0][1] &&
												xana2[0][3] != massiv2[0][2] &&
												xana2[0][3] != xana2[0][2] &&
												xana2[0][3] != massiv2[1][2] &&


												xana2[0][3] != 0

												)


											&&

											(
												xana2[0][6] != massiv2[2][0] &&
												xana2[0][6] != massiv2[2][1] &&
												xana2[0][6] != xana2[0][3] &&
												xana2[0][6] != massiv2[1][2] &&
												xana2[0][6] != massiv2[1][1] &&
												xana2[0][6] != xana2[1][0] &&
												xana2[0][6] != massiv2[1][0] &&
												xana2[0][6] != massiv2[0][2] &&

												xana2[0][6] != massiv2[2][0] &&
												xana2[0][6] != xana2[1][8] &&
												xana2[0][6] != massiv2[0][0] &&
												xana2[0][6] != massiv2[1][1] &&
												xana2[0][6] != xana2[2][8] &&
												xana2[0][6] != massiv2[2][2] &&

												xana2[0][6] != massiv2[2][0] &&
												xana2[0][6] != xana2[0][4] &&
												xana2[0][6] != massiv2[1][0] &&
												xana2[0][6] != massiv2[2][2] &&
												xana2[0][6] != xana2[0][5] &&
												xana2[0][6] != massiv2[2][1] &&

												xana2[0][6] != 0

												)

													&&

													(
														xana2[1][0] != massiv2[2][0] &&
														xana2[1][0] != massiv2[2][1] &&
														xana2[1][0] != xana2[0][3] &&
														xana2[1][0] != massiv2[1][2] &&
														xana2[1][0] != massiv2[1][1] &&
														xana2[1][0] != xana2[0][6] &&
														xana2[1][0] != massiv2[1][0] &&
														xana2[1][0] != massiv2[0][2] &&

													
														xana2[1][0] != massiv2[1][0] &&
														xana2[1][0] != xana2[1][7] &&
														xana2[1][0] != massiv2[2][2] &&
														xana2[1][0] != xana2[2][5] &&
														xana2[1][0] != massiv2[0][1] &&
														xana2[1][0] != massiv2[0][2] &&

														xana2[1][0] != massiv2[2][1] &&
														xana2[1][0] != massiv2[1][2] &&
														xana2[1][0] != xana2[0][7] &&
														xana2[1][0] != massiv2[1][1] &&
														xana2[1][0] != xana2[0][8] &&
														xana2[1][0] != massiv2[0][1] &&

														xana2[1][0] != 0

														)


													&&

													(
														xana2[1][7] != massiv2[1][0] &&
														xana2[1][7] != massiv2[2][0] &&
														xana2[1][7] != massiv2[1][2] &&
														xana2[1][7] != xana2[1][8] &&
														xana2[1][7] != xana2[2][0] &&
														xana2[1][7] != massiv2[2][2] &&
														xana2[1][7] != massiv2[0][0] &&
														xana2[1][7] != massiv2[2][1] &&

														xana2[1][7] != massiv2[2][0] &&
														xana2[1][7] != massiv2[1][2] &&
														xana2[1][7] != xana2[1][0] &&
														xana2[1][7] != xana2[2][5] &&
														xana2[1][7] != massiv2[0][1] &&
														xana2[1][7] != massiv2[0][2] &&


														xana2[1][7] != xana2[1][3] &&
														xana2[1][7] != xana2[1][4] &&
														xana2[1][7] != xana2[1][5] &&
														xana2[1][7] != massiv2[1][0] &&
														xana2[1][7] != xana2[1][6] &&
														xana2[1][7] != massiv2[0][0] &&

														xana2[1][7] != 0

														)

													&&

													(
														xana2[1][8] != massiv2[1][0] &&
														xana2[1][8] != massiv2[2][0] &&
														xana2[1][8] != massiv2[1][2] &&
														xana2[1][8] != xana2[1][7] &&
														xana2[1][8] != xana2[2][0] &&
														xana2[1][8] != massiv2[2][2] &&
														xana2[1][8] != massiv2[0][0] &&
														xana2[1][8] != massiv2[2][1] &&

														xana2[1][8] != massiv2[2][1] &&
														xana2[1][8] != xana2[0][6] &&
														xana2[1][8] != massiv2[1][0] &&
														xana2[1][8] != massiv2[1][1] &&
														xana2[1][8] != xana2[2][8] &&
														xana2[1][8] != massiv2[2][2] &&

														xana2[1][8] != xana2[1][3] &&
														xana2[1][8] != xana2[1][4] &&
														xana2[1][8] != xana2[1][5] &&
														xana2[1][8] != massiv2[1][0] &&
														xana2[1][8] != xana2[1][6] &&
														xana2[1][8] != massiv2[0][0] &&

														xana2[1][8] != 0

														)
													&&

													(
														xana2[2][0] != massiv2[1][0] &&
														xana2[2][0] != massiv2[2][0] &&
														xana2[2][0] != massiv2[1][2] &&
														xana2[2][0] != xana2[1][7] &&
														xana2[2][0] != xana2[1][8] &&
														xana2[2][0] != massiv2[2][2] &&
														xana2[2][0] != massiv2[0][0] &&
														xana2[2][0] != massiv2[2][1] &&

														xana2[2][0] != xana2[0][3] &&
														xana2[2][0] != massiv2[1][1] &&
														xana2[2][0] != massiv2[0][2] &&
														xana2[2][0] != massiv2[2][0] &&
														xana2[2][0] != massiv2[0][0] &&
														xana2[2][0] != xana2[3][2] &&

														xana2[2][0] != xana2[1][3] &&
														xana2[2][0] != xana2[1][4] &&
														xana2[2][0] != xana2[1][5] &&
														xana2[2][0] != massiv2[1][0] &&
														xana2[2][0] != xana2[1][6] &&
														xana2[2][0] != massiv2[0][0] &&

														xana2[2][0] != 0

														)
															&&

															(
																
																xana2[2][5] != massiv2[1][1] &&
																xana2[2][5] != massiv2[2][0] &&
																xana2[2][5] != massiv2[0][1] &&
																xana2[2][5] != xana2[2][8] &&
																xana2[2][5] != massiv2[0][0] &&
																xana2[2][5] != massiv2[0][2] &&
																xana2[2][5] != massiv2[2][2] &&
																xana2[2][5] != xana2[3][2] &&

																xana2[2][5] != massiv2[0][1] &&
																xana2[2][5] != massiv2[1][0] &&
																xana2[2][5] != xana2[2][3] &&
																xana2[2][5] != massiv2[1][2] &&
																xana2[2][5] != xana2[2][4] &&
																xana2[2][5] != massiv2[2][2] &&

																xana2[2][5] != massiv2[2][0] &&
																xana2[2][5] != massiv2[1][2] &&
																xana2[2][5] != xana2[1][0] &&
																xana2[2][5] != massiv2[1][0] &&
																xana2[2][5] != xana2[1][7] &&
																xana2[2][5] != massiv2[2][2] &&

																xana2[2][5] != 0

																)


															&&

															(

																xana2[2][8] != massiv2[1][1] &&
																xana2[2][8] != massiv2[2][0] &&
																xana2[2][8] != massiv2[0][1] &&
																xana2[2][8] != xana2[2][5] &&
																xana2[2][8] != massiv2[0][0] &&
																xana2[2][8] != massiv2[0][2] &&
																xana2[2][8] != massiv2[2][2] &&
																xana2[2][8] != xana2[3][2] &&

																xana2[2][8] != massiv2[2][1] &&
																xana2[2][8] != xana2[0][6] &&
																xana2[2][8] != massiv2[1][0] &&
																xana2[2][8] != massiv2[2][0] &&
																xana2[2][8] != xana2[1][8] &&
																xana2[2][8] != massiv2[0][0] &&

																xana2[2][8] != massiv2[0][2] &&
																xana2[2][8] != xana2[2][6] &&
																xana2[2][8] != massiv2[2][0] &&
																xana2[2][8] != massiv2[2][1] &&
																xana2[2][8] != xana2[2][7] &&
																xana2[2][8] != massiv2[1][0] &&
																
																xana2[2][8] != 0

																)


															&&

															(

																xana2[3][2] != massiv2[1][1] &&
																xana2[3][2] != massiv2[2][0] &&
																xana2[3][2] != massiv2[0][1] &&
																xana2[3][2] != xana2[2][5] &&
																xana2[3][2] != massiv2[0][0] &&
																xana2[3][2] != massiv2[0][2] &&
																xana2[3][2] != massiv2[2][2] &&
																xana2[3][2] != xana2[2][8] &&

																xana2[3][2] != xana2[3][0] &&
																xana2[3][2] != massiv2[2][1] &&
																xana2[3][2] != massiv2[1][1] &&
																xana2[3][2] != massiv2[0][0] &&
																xana2[3][2] != xana2[3][1] &&
																xana2[3][2] != massiv2[2][0] &&

																xana2[3][2] != xana2[0][3] &&
																xana2[3][2] != massiv2[1][1] &&
																xana2[3][2] != massiv2[0][2] &&
																xana2[3][2] != massiv2[1][2] &&
																xana2[3][2] != xana2[2][0] &&
																xana2[3][2] != massiv2[2][1] &&

																xana2[3][2] != 0

																)
														
					)
				{

					cout << " \t\t\t\t " << " Uddunuz " << endl;
					PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);
					Sleep(5000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("color 7");
					Sleep(1000);
					system("color 9");
					Sleep(1000);
					system("cls");
					break;
				}
										
				
					cout << endl;
					cout << " \t\t\t\t " << " Setiri sec (Reqem olaraq): ";
					SetConsoleTextAttribute(color, 4);
					cin >> setir;
					SetConsoleTextAttribute(color, 7);
					cout << endl;
					cout << " \t\t\t\t " << " Sutunu sec  (Boyuk herf olaraq): ";
					SetConsoleTextAttribute(color, 4);
					cin >> sutun;
					SetConsoleTextAttribute(color, 7);
					cout << endl;
					if (setir == 1 && sutun == 'A')
					{
						
							cout << " \t\t\t\t " << " Reqemi yazin: ";
							SetConsoleTextAttribute(color, 4);
							cin >> xana2[0][1];
							SetConsoleTextAttribute(color, 7);
							PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
							Sleep(1000);
							system("cls");

			        }

					if (setir == 1 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][2];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 1 && sutun == 'I')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][3];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 2 && sutun == 'B')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][4];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 2 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][5];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 2 && sutun == 'H')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][6];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 3 && sutun == 'C')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][7];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 3 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[0][8];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 3 && sutun == 'G')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][0];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 4 && sutun == 'D')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][1];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 4 && sutun == 'F')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][2];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'A')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][3];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'B')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][4];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'C')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][5];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][6];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'G')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][7];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'H')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[1][8];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 5 && sutun == 'I')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][0];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 6 && sutun == 'D')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][1];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 6 && sutun == 'F')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][2];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 7 && sutun == 'C')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][3];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 7 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][4];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 7 && sutun == 'G')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][5];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 8 && sutun == 'B')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][6];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 8 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][7];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}


					if (setir == 8 && sutun == 'H')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[2][8];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 9 && sutun == 'A')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[3][0];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 9 && sutun == 'E')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[3][1];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}

					if (setir == 9 && sutun == 'I')
					{

						cout << " \t\t\t\t " << " Reqemi yazin: ";
						SetConsoleTextAttribute(color, 4);
						cin >> xana2[3][2];
						SetConsoleTextAttribute(color, 7);
						PlaySound(TEXT("click.wav"), NULL, SND_FILENAME | SND_ASYNC);
						Sleep(1000);
						system("cls");

					}
					
				 }
		    }
	    }
		    
	    
    }
                    
}
    
int main()
{
	system("title Sudoku (3x3 or 9x9) by Latifli Mehraj");
	int yas = 0;
	string ad;
	string cins;
	int nov = 0;
	int seviyye = 0;
	sudokuacilis();
	sudokuqeydiyyat();
	sudoku(nov, seviyye);
}
