// Name: crt_exit.c_ProcessExitHandlers_FUN_0060ac88
// Address: 0060ac88
// Address Range: [[0060ac88, 0060acea]]
// Convention: __cdecl
// Signature: void __cdecl crt_exit_c_ProcessExitHandlers_FUN_0060ac88(uchar min_priority,uchar max_priority)

#include "nocturne.h"

void __cdecl ProcessExitHandlers(uchar min_priority,uchar max_priority)

{
  BYTE *pBVar1;
  byte bVar2;
  RuntimeHandlerEntry *pRVar3;
  
  while( true ) {
    pBVar1 = &g_ExitHandlerTableStart;
    pRVar3 = &g_ExitHandlerTableEnd;
    bVar2 = min_priority;
    do {
      if ((((RuntimeHandlerEntry *)pBVar1)->status != '\x02') &&
         (bVar2 <= ((RuntimeHandlerEntry *)pBVar1)->priority)) {
        bVar2 = ((RuntimeHandlerEntry *)pBVar1)->priority;
        pRVar3 = (RuntimeHandlerEntry *)pBVar1;
      }
      pBVar1 = (BYTE *)((int)pBVar1 + 6);
    } while (pBVar1 < &g_ExitHandlerTableEnd);
    if (pRVar3 == &g_ExitHandlerTableEnd) break;
    if (pRVar3->priority <= max_priority) {
      invokeRuntimeHandler(&pRVar3->func);
    }
    pRVar3->status = '\x02';
  }
  return;
}
