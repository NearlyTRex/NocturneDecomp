// Name: crt_exit.c_ProcessExitHandlers_FUN_0056efb8
// Address: 0056efb8
// Address Range: [[0056efb8, 0056f01a]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_ProcessExitHandlers_FUN_0056efb8(uchar min_priority,uchar max_priority)

#include "nocturne.h"

void __cdecl ProcessExitHandlers(uchar min_priority,uchar max_priority)

{
  RuntimeHandlerEntry *pRVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pRVar1 = &RuntimeHandlerEntry_005c26ce;
    pRVar3 = &RuntimeHandlerEntry_005c26f8;
    bVar2 = min_priority;
    do {
      if ((pRVar1->status != '\x02') && (bVar2 <= pRVar1->priority)) {
        bVar2 = pRVar1->priority;
        pRVar3 = pRVar1;
      }
      pRVar1 = pRVar1 + 1;
    } while (pRVar1 < &RuntimeHandlerEntry_005c26f8);
    if (pRVar3 == &RuntimeHandlerEntry_005c26f8) break;
    if (pRVar3->priority <= max_priority) {
      invokeRuntimeHandler(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
