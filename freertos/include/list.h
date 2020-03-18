#ifndef LIST_H
#define LIST_H

#include "portmacro.h"

/*����ڵ����ݽṹ����*/
struct xLIST_ITEM
{
    TickType_t xItemValue;                /* ����ֵ�����ڰ����ڵ���˳������*/      
	struct xLIST_ITEM * pxNext;           /* ָ��������һ���ڵ� */ 
	struct xLIST_ITEM * pxPrevious;       /* ָ������ǰһ���ڵ� */
	void * pvOwner;                       /* ָ��ӵ�иýڵ���ں˶���ͨ����TCB */
	void * pvContainer;                   /* ָ��ýڵ����ڵ�����    */
};
typedef struct xLIST_ITEM ListItem_t;  /* �ڵ����������ض��� */

/*������ڵ����ݽṹ����*/
typedef struct xLIST
{
    UBaseType_t uxNumberOfItems;          /* ����ڵ������ */
	ListItem_t * pxIndex;                 /* ����ڵ�����ָ�� */ 
	MiniListItem_t xListEnd;              /* �������һ���ڵ� */
}List_t;

/* ������ڵ�ṹ�嶨�� */
struct xMINI_LIST_ITEM
{
    TickType_t xItemValue;                /* ����ֵ�����ڰ����ڵ����������� */
	struct xLIST_ITEM * pxNext;           /* ָ��������һ���ڵ� */
	struct xLIST_ITEM * pxPrevious;       /* ָ������ǰһ���ڵ� */
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;   /* ����ڵ����������ض��� */



void vListInitialiseItem( ListItem_t * const pxItem );
void vListInitialise( List_t * const pxList );



#endif /* LIST_H */
