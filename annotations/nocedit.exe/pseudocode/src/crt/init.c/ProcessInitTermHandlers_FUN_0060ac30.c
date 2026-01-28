// Name: crt_init.c_ProcessInitTermHandlers_FUN_0060ac30
// Address: 0060ac30
// Address Range: [[0060ac30, 0060ac85]]
// Convention: __cdecl
// Signature: void __cdecl crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)

#include "nocturne.h"

void __cdecl crt_init_c_ProcessInitTermHandlers_FUN_0060ac30(int max_priority)

{
  BYTE *pBVar1;
  byte bVar2;
  BYTE *pBVar3;
  
  while( true ) {
    pBVar1 = &g_InitHandlerStatusStart;
    pBVar3 = &g_ExitHandlerTableStart;
    bVar2 = (byte)max_priority;
    do {
      if ((*pBVar1 != '\x02') && (pBVar1[1] <= bVar2)) {
        bVar2 = pBVar1[1];
        pBVar3 = pBVar1;
      }
      pBVar1 = pBVar1 + 6;
    } while (pBVar1 < &g_ExitHandlerTableStart);
    if (pBVar3 == &g_ExitHandlerTableStart) break;
    crt_util_c_invokeRuntimeHandler_FUN_0060ac20((RUNTIME_HANDLER_FUNC **)(pBVar3 + 2));
    *pBVar3 = '\x02';
  }
  return;
}
