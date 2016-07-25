#ifndef _PID_H_
#define _PID_H_
#include <include.h>

/*-------------------------------------------------------------------------
 Func: ������PID�㷨��
-------------------------------------------------------------------------*/
typedef struct 
{
    f16 Kp;                                     //�����ϵ��
    f16 Ki;                                     //�����ϵ��
    f16 Kd;                                     //΢���ϵ��    
    int16 Error;                                //��ǰ������
    int16 LError;                               //�ϴ�������
    int16 LLError;                              //���ϴ�������
    int16 Output;                               //��ǰ���ֵ
    int16 Outset;                               //����趨ֵ
    int16 MaxOutput;                            //���ֵ����  
    int16 MinOutput;                            //���ֵ����
}PID;
void PID_Create(PID *PID,f16 Kp,f16 Ki,f16 Kd,int16 MaxOut,int16 MinOut);
#endif