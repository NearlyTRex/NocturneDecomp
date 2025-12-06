// Name: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
// Address: 0060a19c
// Address Range: [[0060a19c, 0060a1a9]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c(void)

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_thread_critical_section_FUN_0060a19c(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalThreadCriticalSection);
  return;
}
