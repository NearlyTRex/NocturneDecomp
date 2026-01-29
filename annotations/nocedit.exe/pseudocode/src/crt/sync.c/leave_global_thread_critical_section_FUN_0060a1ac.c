// Name: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
// Address: 0060a1ac
// Address Range: [[0060a1ac, 0060a1b9]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac(void)

#include "nocturne.h"

void __cdecl leave_global_thread_critical_section(void)

{
  leave_reentrant_critical_section(&g_GlobalThreadCriticalSection);
  return;
}
