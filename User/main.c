#include "list.h"

//uint32_t flag1;

struct xLIST    List_Test;

struct xLIST_ITEM    List_Item1;
struct xLIST_ITEM    List_Item2;
struct xLIST_ITEM    List_Item3;


int main(void)
{
    /* ����ڵ��ʼ�� */
    vListInitialise( &List_Test);

	/* �ڵ�1��ʼ�� */
	vListInitialiseItem( &List_Item1);
	List_Item1.xItemValue=1;

	vListInitialiseItem( &List_Item2);
	List_Item2.xItemValue=2;

	vListInitialiseItem( &List_Item3);
	List_Item3=3;

	vListInsert( &List_Test, &List_Item2);
	vListInsert( &List_Test, &List_Item1);
	vListInsert( &List_Test, &List_Item3);
    for(;;)
	    {}
}
