// Name: FUN_0056efb8
// Address: 0056efb8
// Address Range: [[0056efb8, 0056f01a]]
// Convention: unknown
// Signature: void FUN_0056efb8(void)

#include "nocturne.h"

void FUN_0056efb8(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte in_DL;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = &RuntimeHandlerEntry_005c26ce;
    pRVar3 = &RuntimeHandlerEntry_005c26f8;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (bVar2 <= pRVar1->priority)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < &RuntimeHandlerEntry_005c26f8);
    if (pRVar3 == &RuntimeHandlerEntry_005c26f8) break;
    if (pRVar3->priority <= in_DL) {
      FUN_0056ef50(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
