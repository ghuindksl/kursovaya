#include "Ctech.h"
using namespace std;

void mainmenu() //������� ������ ����
{
    system("cls");
    cout << "������� ����� ������ : \n";
    cout << "1.�������� ���������� � ������\n";
    cout << "2.������� ���������� �� ������\n";
    cout << "3.����������� ����������\n";
    cout << "4.����� ����������\n";
    cout << "5.���������\n";
    cout << "6.�����\n\n";
    cout << "���� : ";
}

int main(int argc, char* argv[])
{
    Ctech osn;
    setlocale(LC_ALL,"Rus"); 
    bool mainexit = false; 
    int choose; //����� ������
    string searchh; 
    osn.open();//�������� �����
    while (mainexit == false) //�������� �� ���������� ���������
    {
        mainmenu(); //����� ������� ����
        cin >> choose; //������ �����.�����
        switch (choose) 
        {
        case 1:
            osn.add();//������� ���������� �������
            break;
        case 2:
            system("cls");
            cout << "������� id �������: ";
            cin >> searchh;
            osn.del(searchh); //������� �������� �������
            break;
        case 3:
            osn.show();//������� ������ ������
            break;
        case 4:
            system("cls");
            cout << "������� id �������: ";
            cin >> searchh;
            osn.found(searchh);//������� ������ �������
            break;
        case 5: 
            osn.save(); //������� ����������
            break;
        case 6:
            mainexit = true;
            osn.~Ctech();
            break;
        default: 
            system("cls"); 
            cout << "������������ ����\n"; 
            system("pause");
            continue; //���������� ����
        }
    }   
}