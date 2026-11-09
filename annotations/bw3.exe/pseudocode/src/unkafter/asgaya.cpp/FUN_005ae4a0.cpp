// Name: unkafter_asgaya.cpp_FUN_005ae4a0
// Address: 005ae4a0
// Address Range: [[005ae4a0, 005ae4f5]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005ae4a0(void)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005ae4a0(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers;
    pRVar3 = g_InitHandlers + 0xa5;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (pRVar1->priority <= bVar2)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < g_InitHandlers + 0xa5);
    if (pRVar3 == g_InitHandlers + 0xa5) break;
    unkafter_asgaya_cpp_FUN_005ae490(&pRVar3->func);
    pRVar3->status = '\x02';
  }
  return;
}
