#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Cube
{
public:
	//设置长
	void setl(int l)
	{
		m_L = l;
	}
	//获取长
	int retl()
	{
		return m_L;
	}
	//设置宽
	void setw(int w)
	{
		m_W = w;
	}
	//获取宽
	int retw()
	{
		return m_W;
	}
	//设置高
	void seth(int h)
	{
		m_H = h;
	}
	//获取高
	int reth()
	{
		return m_H;
	}

	//得出立方体的面积
	int retS()
	{
		return (m_L * m_W + m_L * m_H + m_W * m_H) * 2;
	}

	//得出立方体的体积
	int retV()
	{
		return m_L * m_W * m_H;
	}
	//利用成员函数比较两个立方体是否相等
	void cmpSame(Cube &s)
	{
		if (m_L == s.m_L && m_W == s.m_W && m_H == s.m_H)
		{	
			cout << "成员函数中：两个立方体是相等的" << endl;
		}
		else
		{
			cout << "成员函数中：两个立方体是不相等的" << endl;
		}

	}
private:
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数比较两个立方体是否相等

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
		cout << "全局函数：两个立方体是相等的" << endl;
	}
	else
	{
		cout << "全局函数：两个立方体是不相等的" << endl;
	}
	system("pause");
	return 0;


}

























//class person
//{
//private:
//	int s_age;  //可读可写
//	string s_name; //只读的
//	string s_telephone; //只写的
//public:
//	void inputAge(int age)    //年龄可读可写 输入年龄
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有问题" << endl;
//			return;
//		}
//		s_age = age;
//	}
//	void getAge()
//	{
//		cout << "此人的年龄为: " << s_age << endl;
//	
//	}
//	string getName()    //名字是只读的
//	{
//		s_name = "王小帅";
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
//	cout << "此人的名字为： " << p1.getName() << endl;  //读名字
//	p1.inputAge(18);     //写年龄
//	p1.getAge();    //读年龄
//	p1.inputTelephone("13333333333");
//	cout << "此人的电话号为： " << p1.getTele() << endl;
//	system("pause");
//	return 0;
//}