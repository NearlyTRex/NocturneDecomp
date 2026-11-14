// Name: crt_unknown.c_FUN_005cb688
// Address: 005cb688
// Address Range: [[005cb688, 005cb6ea]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cb688(void)

#include "nocturne.h"

void FUN_005cb688(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte in_DL;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers + 0xb4;
    pRVar3 = (RuntimeHandlerEntry *)&DAT_0062716c;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (bVar2 <= pRVar1->priority)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < (RuntimeHandlerEntry *)&DAT_0062716c);
    if (pRVar3 == (RuntimeHandlerEntry *)&DAT_0062716c) break;
    if (pRVar3->priority <= in_DL) {
      FUN_005cb620(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
