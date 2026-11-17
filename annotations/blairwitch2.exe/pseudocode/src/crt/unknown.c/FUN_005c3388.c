// Name: crt_unknown.c_FUN_005c3388
// Address: 005c3388
// Address Range: [[005c3388, 005c33ea]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c3388(void)

#include "nocturne.h"

void FUN_005c3388(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte in_DL;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers + 0xc4;
    pRVar3 = &g_ExitHandlerTableEnd;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (bVar2 <= pRVar1->priority)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 != g_InitHandlers + sizeof(g_InitHandlers) / sizeof(g_InitHandlers[0]));
    if (pRVar3 == &g_ExitHandlerTableEnd) break;
    if (pRVar3->priority <= in_DL) {
      FUN_005c3320(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
