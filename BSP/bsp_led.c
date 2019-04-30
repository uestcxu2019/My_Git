/*
 * bsp_led.c
 *
 *  	Created on: 2018��11��30��
 *      Author: xu
 *      ˵��������δ���ú궨���ԭ���ǵ��������ĳЩ�����ظ�
 */
#include "bsp_led.h"


/************************************************************************************************
 *  ˵	�� : GPIO���ų�ʼ��
 *  ��	�� : ��
 *  ����ֵ  : ��
*************************************************************************************************/
void GPIO_LP_Init(void)
{
	//��ʼ��,����Ϊ�������
	P1DIR = 0xFF;
	PADIR = 0xFFFF;
	P2DIR = 0xFF;
	PBDIR = 0xFFFF;
	P3DIR = 0xFF;

	//�����е����ų�ʼ������Ϊ����͵�ƽ
	P1OUT = 0x00;
	PAOUT = 0x0000;
	P2OUT = 0x00;
	PBOUT = 0x0000;
	P3OUT = 0x00;
}


/************************************************************************************************
 *  ˵	�� : LED������ų�ʼ��
 *  ��	�� : ��
 *  ����ֵ  : ��
*************************************************************************************************/
void LED_Config(void)
{
	P1DIR |=  BIT0;
	P1OUT &=~ BIT0;		//LED�Ƴ�ʼ������Ϊ����͵�ƽ(P1.0)

	P1DIR &=~ BIT1;		//����1Ϊ���뷽��(P1.1)
	P1REN |=  BIT1;
	P1OUT |=  BIT1;		//����ʹ��
}


