// Name: crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c
// Address: 00608a1c
// Address Range: [[00608a1c, 00608af0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SetStdHandleToSomething_FUN_00608a1c()

#include "nocturne.h"

/* Signature: byte unk_SetStdHandleToSomething(byte param_1, uint param_2) */

void crt_unknown_c_SetStdHandleToSomething_FUN_00608a1c(void)

{
  int iVar1;
  HANDLE in_stack_00000004;
  uint in_stack_00000008;
  DWORD nStdHandle;
  
  if ((int)in_stack_00000008 < 0) {
    return;
  }
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  if (in_stack_00000008 == 0) {
    nStdHandle = 0xfffffff6;
  }
  else if (in_stack_00000008 < 2) {
    nStdHandle = 0xfffffff5;
  }
  else {
    if (in_stack_00000008 != 2) goto LAB_00608a6a;
    nStdHandle = 0xfffffff4;
  }
  (*g_SetStdHandleFunc)(nStdHandle,in_stack_00000004);
LAB_00608a6a:
  if ((int)in_stack_00000008 < g_CurrentHandleCount) {
    g_IOControlBlock->standard_handles[in_stack_00000008] = in_stack_00000004;
  }
  else {
    g_IOControlBlock = crt_memory_c_realloc_FUN_00601df0(g_IOControlBlock,in_stack_00000008 * 4 + 4)
    ;
    if (g_CurrentHandleCount < (int)in_stack_00000008) {
      iVar1 = g_CurrentHandleCount * 4;
      do {
        *(uint *)((int)g_IOControlBlock->standard_handles + iVar1) = 0;
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(in_stack_00000008 * 4));
    }
    g_CurrentHandleCount = in_stack_00000008 + 1;
    g_IOControlBlock->standard_handles[in_stack_00000008] = in_stack_00000004;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return;
}
