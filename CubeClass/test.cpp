#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Cube
{
public:
	//���ó�
	void setl(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int retl()
	{
		return m_L;
	}
	//���ÿ�
	void setw(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int retw()
	{
		return m_W;
	}
	//���ø�
	void seth(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int reth()
	{
		return m_H;
	}

	//�ó�����������
	int retS()
	{
		return (m_L * m_W + m_L * m_H + m_W * m_H) * 2;
	}

	//�ó�����������
	int retV()
	{
		return m_L * m_W * m_H;
	}
	//���ó�Ա�����Ƚ������������Ƿ����
	void cmpSame(Cube &s)
	{
		if (m_L == s.m_L && m_W == s.m_W && m_H == s.m_H)
		{	
			cout << "��Ա�����У���������������ȵ�" << endl;
		}
		else
		{
			cout << "��Ա�����У������������ǲ���ȵ�" << endl;
		}

	}
private:
	int m_L;
	int m_W;
	int m_H;
};

//����ȫ�ֺ����Ƚ������������Ƿ����

bool cmpSame(Cube &s1,Cube &s2)
{
	if (s1.retl() == s2.retl() && s1.retw() == s2.retw() && s1.reth() == s2.reth())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube s1;
	Cube s2;
	s1.setl(10);
	s1.setw(10);
	s1.seth(10);
	
	s2.setl(10);
	s2.setw(10);
	s2.seth(10);
	s1.cmpSame(s2);
	bool ret = cmpSame(s1, s2);
	if (ret)
	{
		cout << "ȫ�ֺ�������������������ȵ�" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����������������ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;


}

























//class person
//{
//private:
//	int s_age;  //�ɶ���д
//	string s_name; //ֻ����
//	string s_telephone; //ֻд��
//public:
//	void inputAge(int age)    //����ɶ���д ��������
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "��������������" << endl;
//			return;
//		}
//		s_age = age;
//	}
//	void getAge()
//	{
//		cout << "���˵�����Ϊ: " << s_age << endl;
//	
//	}
//	string getName()    //������ֻ����
//	{
//		s_name = "��С˧";
//		return s_name;
//	}
//
//	void inputTelephone(string tele)
//	{
//		s_telephone = tele;
//	}
//	string getTele()
//	{
//		return s_telephone;
//	}
//};
//
//int main()
//{
//	person p1;
//	cout << "���˵�����Ϊ�� " << p1.getName() << endl;  //������
//	p1.inputAge(18);     //д����
//	p1.getAge();    //������
//	p1.inputTelephone("13333333333");
//	cout << "���˵ĵ绰��Ϊ�� " << p1.getTele() << endl;
//	system("pause");
//	return 0;
//}