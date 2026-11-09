// Name: unkafter_morph.cpp_FUN_005c3330
// Address: 005c3330
// Address Range: [[005c3330, 005c3385]]
// Convention: unknown
// Signature: void unkafter_morph_cpp_FUN_005c3330(void)

#include "nocturne.h"

void unkafter_morph_cpp_FUN_005c3330(void)

{
  byte in_AL;
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = g_InitHandlers;
    pRVar3 = g_InitHandlers + 0xc4;
    bVar2 = in_AL;
    do {
      if ((pRVar1->status != '\x02') && (pRVar1->priority <= bVar2)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < g_InitHandlers + 0xc4);
    if (pRVar3 == g_InitHandlers + 0xc4) break;
    unkafter_morph_cpp_FUN_005c3320(&pRVar3->func);
    pRVar3->status = '\x02';
  }
  return;
}
