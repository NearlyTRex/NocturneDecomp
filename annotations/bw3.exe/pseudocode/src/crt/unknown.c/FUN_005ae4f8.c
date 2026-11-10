// Name: crt_unknown.c_FUN_005ae4f8
// Address: 005ae4f8
// Address Range: [[005ae4f8, 005ae55a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005ae4f8(void)

#include "nocturne.h"

void FUN_005ae4f8(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte in_DL;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers + 0xa5;
    pRVar3 = (RuntimeHandlerEntry *)&DAT_006084b6;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (bVar2 <= pRVar1->priority)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < (RuntimeHandlerEntry *)&DAT_006084b6);
    if (pRVar3 == (RuntimeHandlerEntry *)&DAT_006084b6) break;
    if (pRVar3->priority <= in_DL) {
      FUN_005ae490(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
