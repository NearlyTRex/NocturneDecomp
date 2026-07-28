// Name: crt_init.c_ProcessInitTermHandlers_FUN_0056ef60
// Address: 0056ef60
// Address Range: [[0056ef60, 0056efb5]]
// Convention: __cdecl
// Signature: void __cdecl crt_init_c_ProcessInitTermHandlers_FUN_0056ef60(int max_priority)

#include "nocturne.h"

void __cdecl ProcessInitTermHandlers(int max_priority)

{
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = &g_FirstInitHandler;
    pRVar3 = &RuntimeHandlerEntry_005c26ce;
    bVar2 = (byte)max_priority;
    do {
      if ((pRVar1->status != '\x02') && (pRVar1->priority <= bVar2)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < &RuntimeHandlerEntry_005c26ce);
    if (pRVar3 == &RuntimeHandlerEntry_005c26ce) break;
    invokeRuntimeHandler(&pRVar3->func);
    pRVar3->status = '\x02';
  }
  return;
}
