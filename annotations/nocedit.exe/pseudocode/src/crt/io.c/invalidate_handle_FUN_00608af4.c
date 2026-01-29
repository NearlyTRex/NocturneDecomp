// Name: crt_io.c_invalidate_handle_FUN_00608af4
// Address: 00608af4
// Address Range: [[00608af4, 00608b1f]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c_invalidate_handle_FUN_00608af4(int handle_index)

#include "nocturne.h"

void __cdecl invalidate_handle(int handle_index)

{
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  if ((0 < handle_index) && (handle_index < g_CurrentHandleCount)) {
    g_IOControlBlock->standard_handles[handle_index] = (HANDLE)0x0;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return;
}
