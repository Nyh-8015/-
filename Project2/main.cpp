//项目名称：简单的通讯录管理程序
//项目功能：添加、删除、修改、查询联系人信息
#include <iostream>
using namespace std;
//联系人结构体
struct Contact
{
	char name[50];//姓名
	char phone[12];//电话
	int year, month, day;//出生日期
	struct Birthday
	{
		int year;
		int month;
		int day;
	} birthday;
	int age;//年龄
};
//定义通讯录结点结构体
struct Node
{
	Contact data;//联系人信息
	Node* next;//指向下一个结点的指针
};

/*函数功能：初始化一个空的通讯录链表
*函数形参：无
*函数返回值：返回一个指向链表头结点的指针,Node*类型
*/
Node* InitAdressBook()
{
	Node* head = new Node;//创建一个头结点
	if (head == NULL)//判断内存是否分配成功
	{
		cout << "内存分配失败！" << endl;
		return NULL;
	}
	else
	{
		head->next = NULL;//将头节点的next指针置为空
	}
	return head;//返回头节点指针
}
/*函数功能：采用头插法创建一个通讯录链表
*函数形参：通讯录链表头指针Node*head，联系人信息Contact contact
*函数返回值：创建成功返回true，否则返回false，bool类型
*/
bool CreateAdressBookHead(Node* head, Contact contact)
{
	Node* node = new Node;//创建一个新结点
	if (node == NULL)//判断内存是否分配成功
	{
		cout << "内存分配失败！" << endl;
		return false;
	}
	node->data;//将联系人信息赋值给新结点的数据域
	node->next = head->next;//将新结点的next指针指向原来的第一个结点
	head->next = node;//将头结点的next指针指向新结点
	return true;//返回创建成功
}
/*函数功能：采用尾插法创建一个通讯录链表
*函数形参：通讯录链表头指针Node*head，联系人信息Contact contact
*函数返回值：创建成功返回true，否则返回false，bool类型
*/
bool CreateAdressBookTail(Node* head, Contact contact)
{
	Node* tail = head;//定义一个尾指针，指向链表的最后一个结点
	Node* node = new Node;//创建一个新结点
	if (node == NULL)
	{
		cout << "内存分配失败！" << endl;
		return false;
	}
	while (tail->next != NULL)
	{
		tail = tail->next;//找到链表的最后一个结点
	}
	tail->next = node;//将新结点插入到链表的末尾
	node->next = NULL;//将新结点的next指针置为空
	return true;//返回创建成功
}

/*函数功能：输出通讯录中单个联系人信息
* 函数形参：联系人信息Contact data
* 函数返回值：无，void类型
*/
void OutputContact(Contact data)
{
	cout << "姓名：" << data.name << endl;
	cout << "电话：" << data.phone << endl;
	cout << "出生日期：" << data.year << "年" << data.month << "月" << data.day << "日" << endl;
	cout << "年龄：" << data.age << endl;
}

/*函数功能：输出通讯录中所有联系人信息
* 函数形参：通讯录链表头指针Node*head
* 函数返回值：无，void类型
*/
void OutputAdressBook(Node* head)
{
	Node* node = head->next;
	while (node)
	{
		

	}
}
int main()
{

	return 0;
}