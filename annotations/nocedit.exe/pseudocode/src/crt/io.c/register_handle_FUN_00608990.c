// Name: crt_io.c_register_handle_FUN_00608990
// Address: 00608990
// Address Range: [[00608990, 00608a1a]]
// Convention: __cdecl
// Signature: int crt_io.c_register_handle_FUN_00608990(HANDLE handle)

#include "nocturne.h"

int __cdecl crt_io_c_register_handle_FUN_00608990(HANDLE handle)

{
  int iVar1;
  HANDLE *ppvVar2;
  int *piVar3;
  int iVar4;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  iVar4 = 0;
  if (0 < g_CurrentHandleCount) {
    iVar1 = 0;
    do {
      piVar3 = (int *)((int)g_IOControlBlock->standard_handles + iVar1);
      if (*piVar3 == 0) {
        *piVar3 = (int)handle;
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
        return iVar4;
      }
      iVar1 = iVar1 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar1 < g_CurrentHandleCount * 4);
  }
  g_IOControlBlock =
       crt_memory_c_realloc_FUN_00601df0(g_IOControlBlock,(g_CurrentHandleCount + 1) * 4);
  ppvVar2 = g_IOControlBlock->standard_handles + g_CurrentHandleCount;
  g_CurrentHandleCount = g_CurrentHandleCount + 1;
  *ppvVar2 = handle;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return g_CurrentHandleCount + -1;
}
