#include<iostream>
using namespace std;
void bros(int kubik);
int res();
void main()
{
	char brosok;
	do
	{
		setlocale(LC_ALL, "Russian");
		srand(time(NULL));

		cout << "������! ������� � ������? ";
		cout << "\n��������� ���, � ���� ����� �� ������ ���� ������� ������!";


		int total_chel = 0;
		int total_komp = 0;

		do
		{
			cout << "��������� ����������� �������? ����� * ��� ������\n";
			cin >> brosok;
		} while (brosok != '*');

		int res_chel, res_komp;
		do
		{
			res_chel = res();
			cout << "��� ���������: " << res_chel << "\n";
			res_komp = res();
			cout << "\n��� ���������: " << res_komp << "\n";
		} while (res_chel == res_komp);

		if (res_chel > res_komp)
		{
			cout << "\n�� ��������� ������ :(\n";
			for (int i = 1; i <= 5; i++)
			{
				do
				{
					cout << "����� * ��� ������\n";
					cin >> brosok;
				} while (brosok != '*');
				cout << "��:\n";
				total_chel += res();
				cout << "�:\n";
				total_komp += res();
				cout << "��������� ���:\n";
			}
			cout << "��� ����� ���������: " << total_chel << "\n";
			cout << "\n��� ����� ���������: " << total_komp << "\n";
		}
		else
		{
			cout << "\n� ������� ������ :)\n";
			for (int i = 1; i <= 5; i++)
			{
				cout << "�:\n";
				total_komp += res();
				do
				{
					cout << "����� * ��� ������\n";
					cin >> brosok;
				} while (brosok != '*');
				cout << "��:\n";
				total_chel += res();
				cout << "��������� ���:\n";
			}
			cout << "��� ����� ���������: " << total_chel << "\n";
			cout << "\n��� ����� ���������: " << total_komp << "\n";
		}

		if (total_chel == total_komp)
		{
			cout << "\n\n�����!\n\n";
		}
		else
		{
			if (total_chel > total_komp)
			{
				cout << "\n\n�� ��������!\n\n";
			}
			if (total_chel < total_komp)
			{
				cout << "\n\n� �������!\n\n";
			}
		}
		cout << "\n���� ������ ����������, ������� *: ";
		cin >> brosok;
	} while (brosok == '*');
}

void bros(int kubik)
{
	switch (kubik)
	{
	case 1:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*                  *\n";
		cout << "*        *        *\n";
		cout << "*                  *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	case 2:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*        *        *\n";
		cout << "*                  *\n";
		cout << "*        *        *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	case 3:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*    *            *\n";
		cout << "*        *        *\n";
		cout << "*            *    *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	case 4:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*    *      *    *\n";
		cout << "*                  *\n";
		cout << "*    *      *    *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	case 5:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*    *      *    *\n";
		cout << "*        *        *\n";
		cout << "*    *      *    *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	case 6:
		cout << "***********\n";
		cout << "*                  *\n";
		cout << "*    *      *    *\n";
		cout << "*    *      *    *\n";
		cout << "*    *      *    *\n";
		cout << "*                  *\n";
		cout << "***********\n";
		break;
	}
}
int res()
{
	int kubik_1 = rand() % 6 + 1;
	bros(kubik_1);
	int kubik_2 = rand() % 6 + 1;
	bros(kubik_2);
	int rezult;
	rezult = kubik_1 + kubik_2;
	cout << "���������: " << rezult << "\n\n";
	return rezult;
}