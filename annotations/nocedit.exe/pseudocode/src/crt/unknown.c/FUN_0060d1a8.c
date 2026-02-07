// Name: crt_unknown.c_FUN_0060d1a8
// Address: 0060d1a8
// Address Range: [[0060d1a8, 0060d1eb]]
// Convention: unknown
// Signature: undefined2 crt_unknown_c_FUN_0060d1a8(void)

#include "nocturne.h"

ushort FUN_0060d1a8(void)

{
  ThreadData *pTVar1;
  int iVar2;
  int iVar3;
  ushort in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    iVar3 = iVar2 + 8;
    *(uint *)((int)pTVar1->signal_handlers + iVar2 + -4) =
         *(uint *)((int)g_GlobalSignalHandlers + iVar2);
    *(uint *)((int)pTVar1 + (uint)bVar4 * -8 + iVar2 + 0x5c) =
         *(uint *)(iVar2 + 0x685508 + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  g_UserExceptionFilter = (EXCEPTION_FILTER_FUNC *)&LAB_0060cefc;
  g_ExceptionCleanup = processSignal;
  return in_DS;
}
