
#include<fstream>
#include<iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;
const int maxi = 10;
class Ctech
{
private:
	string techname[maxi] = {}; //������ ��� ��������
	string techid[maxi] = {}; //������ ��� ����
public:
	Ctech();
	void open(); //������� ��������
	void save(); //save
	void add();
	void show();
	void del(string search);
	void found(string search);
	~Ctech();
};
