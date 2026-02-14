// Name: crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
// Address: 00608a1c
// Address Range: [[00608a1c, 00608af0]]
// Convention: unknown
// Signature: void crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c(HANDLE param_1,uint param_2)

#include "nocturne.h"

void SetStdHandleToSomething(HANDLE param_1,uint param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if ((int)param_2 < 0) {
    return;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  if (param_2 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (param_2 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (param_2 != 2) goto LAB_00608a6a;
    nStdHandle = 0xfffffff4;
  }
  (*g_SetStdHandleFunc)(nStdHandle,param_1);
LAB_00608a6a:
  if ((int)param_2 < g_CurrentHandleCount) {
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  else {
    g_IOControlBlock = realloc(g_IOControlBlock,param_2 * 4 + 4);
    if (g_CurrentHandleCount < (int)param_2) {
      iVar1 = g_CurrentHandleCount * 4;
      do {
        *(uint *)((int)g_IOControlBlock->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(param_2 * 4));
    }
    g_CurrentHandleCount = param_2 + 1;
    g_IOControlBlock->standard_handles[param_2] = param_1;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return;
}
