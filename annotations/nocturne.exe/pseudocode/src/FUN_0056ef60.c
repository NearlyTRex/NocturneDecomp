// Name: FUN_0056ef60
// Address: 0056ef60
// Address Range: [[0056ef60, 0056efb5]]
// Convention: unknown
// Signature: void FUN_0056ef60(void)

#include "nocturne.h"

void FUN_0056ef60(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = &g_FirstInitHandler;
    pRVar3 = &RuntimeHandlerEntry_005c26ce;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (pRVar1->priority <= bVar2)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < &RuntimeHandlerEntry_005c26ce);
    if (pRVar3 == &RuntimeHandlerEntry_005c26ce) break;
    FUN_0056ef50(&pRVar3->func);
    pRVar3->status = '\x02';
  }
  return;
}
