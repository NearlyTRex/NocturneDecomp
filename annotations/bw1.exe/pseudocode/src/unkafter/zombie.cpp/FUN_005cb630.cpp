// Name: unkafter_zombie.cpp_FUN_005cb630
// Address: 005cb630
// Address Range: [[005cb630, 005cb685]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005cb630(void)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005cb630(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers;
    pRVar3 = g_InitHandlers + 0xb4;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (pRVar1->priority <= bVar2)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < g_InitHandlers + 0xb4);
    if (pRVar3 == g_InitHandlers + 0xb4) break;
    unkafter_zombie_cpp_FUN_005cb620(&pRVar3->func);
    pRVar3->status = '\x02';
  }
  return;
}
