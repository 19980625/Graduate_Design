#ifndef HEAD_H_
#define HEAD_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>

typedef struct book{
	char book_num[10];				//���
	char book_name[20];				//����
	char book_at_name[30];			//������
	char book_cp_name[30];			//������
	float book_price;				//�۸�
	int book_rest;					//���
	struct book *next;				//�±���
}Book;

typedef struct stu{
	char stu_acc[10];				//ѧ���˺�
	char stu_passw[15];				//ѧ������
	char stu_find_question[30];		//�ܱ�����
	char stu_find_passw[15];		//�ܱ���������	
	char stu_num[10];				//ѧ��ѧ��
	char stu_name[20];				//ѧ������
	char stu_tel[15];				//ѧ���绰
	char stu_bor_book[10][20];		//�������
	struct stu *next;				//��λѧ��
}Student;

typedef struct manager{
	char man_name[15];				//����Ա����
	char man_acc[10];				//����Ա�˺�
	char man_passw[15];				//����Ա����
	struct manager *next;			//�¸�����Ա
}Manager;

Book *Book_head;
Student *Student_head;
Manager *Manager_head;

void show_main(void);						
//������
void show_stu(void);						
//ѧ����
void show_stu_enter(void);					
//ѧ��ҳ
void show_manager(void);					
//����Ա��
void show_manager_enter(void);				
//����Աҳ
Book *Book_load(void);						
//���鼮�ļ��е���Ϣ�������鼮����
Student *Student_load(void);				
//��ѧ���ļ��е���Ϣ������ѧ������
Manager *Manager_load(void);				
//������Ա�ļ�����Ϣ����������Ա����
void RandStr(int l,char* ch);				
//�����ȡһ�������ַ���
void Student_Port(void);					
//ѧ���˿�
void Manager_Port(void);					
//����Ա�˿�	
void Student_Login(void);					
//ѧ���˵�¼
void Student_Register(void);				
//ѧ��ע���˺�
void Find_Password(void);					
//ѧ���һ�����
void Password_Input(char *Password);		
//�������뺯��
int Password_Text(char *Password_temp);		
//�������
Student *Find_Num(char *Stu_num);			
//��ѧ�Ų���ѧ��
int Password_Text_Find(char *Password);		
//�ܱ�����������֤
void Stu_Borrow(Student *Stu_num);			
//ѧ������
void Stu_Back(Student *Stu_num);			
//ѧ������
void Find_Book(void);						
//������
void Find_Theborrow(Student *Stu_num);		
//ѧ���鿴������
void Change_Stupassword(Student *Stu_num);	
//�޸�����
Book *Find_BookofName(char *Book_num);		
//����Ų�����
void Print_Book(void);						
//��ӡ�鵥
Book *Book_exit(char *Book_num);			
//Ѱ�Ҹ����Ƿ����
int Ifborrow(Student *Stu_num,char *Book_num);
//��ѯѧ���Ƿ�������
void Print_Borbook(Student *Stu_num);		
//��ӡ�������
void Bake_Book(Student *Stu_num,char *Book_num);
//����������
void Manager_Login(void);					
//����Ա��¼
Manager *Manager_check(char *Manager_num);	
//�˶Թ���Ա�˺�
void Manager_Add_Book(void);				
//����Ա�ϼ��鼮
void Manager_Down_Book(void);				
//����Ա�¼��鼮
void Manager_Look_Book(void);				
//����Ա������
void Manager_Manager_Stu(void);			
//����Ա����ѧ��
void Manager_Change_Password(Manager *Man_num);
//����Ա�޸�����
void Lookofnum(void);						
//�������鿴���
void Lookofrest(void);						
//�������鿴���
void Lookofprice(void);						
//�۸�����鿴
void Manager_Print_Book(void);				
//����Ա��ӡ���
void Manager_Add_Book1(void);				
//���ӿ��
void Manager_Add_Book2(void);				
//�ϼ�����
void Save_Book(void);						
//�����鼮�������ļ�
void Save_Student(void);					
//����ѧ���������ļ�
void Save_Manger(void);						
//�������Ա�������ļ�
void Massage_Save(void);					
//������Ϣ�������ļ�
void Manager_Look_Stu(void);
//����Ա�鿴ѧ������
void Manager_Return_Stu(void);
// ����Աǿ��ѧ������
void Manager_Del_Stu(void);
// ɾ��ѧ�����벢�黹�����鼮
Student *Find_Stu(char *Stu_Stuty);
//��ѧ�Ų�ѧ��

#endif
