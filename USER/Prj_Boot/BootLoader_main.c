#include <Include.h>
#include <Driver_Include.h>
#include <Tools_Include.h>
#include <FuncTask_Include.h>
#include <..\USER\Prj_Boot\BootLoader.h>
#include <..\Driver\SZZigBee_Driver.h>
#include <..\USER\Prj_Boot\BootLoader.c>
#include <..\Driver\SZZigBee_Driver.c>
#include <StandardModBus.h>


void Temp(void *Tags)
{
	Frist_CheckEnv();
	Load_EnvConfig();//���ػ�������
	while(1)
	{
		Tos_TaskDelay(200);
		WaitDownLoadCount--;	//BOOTͣ������
	 if(enValue.UpdateApp!=False)WaitDownLoadCount=10;//Ӧ�ò���������ȥӦ��
	 if(WaitDownLoadCount==0)Application_Run(ApplicationAddress);//��ʱ����Ӧ��
	} 
}
const TaskInitList TaskList[]={
{DownLoad_Command,(void *)USART1,"Task0",10000},
//{DownLoad_Command,(void *)USART2,"Task1",10000},//����ʹ�ô���1��Ϊ���ؿ�
//{DownLoad_Command,(void *)USART3,"Task1",10000},//����ʹ�ô���2��Ϊ���ؿ�
{Temp,Null,"Task0",2000},//��ת����
{Null},//�����������
};
int main(void)
{	
	Mema_Init(&MemBuf[0]);//�ڴ��ʼ��
	DeviceList_Init();//�豸�б���ʼ��
	DeviceMount_Usart(USART1);//����1����
//	DeviceMount_Usart(USART2);//����2����
//	DeviceMount_Usart(USART3);//����3����
	Tos_ListCreate(TaskList);//�������������
	while(1);
}