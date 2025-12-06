// Name: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
// Address: 0060a1ac
// Address Range: [[0060a1ac, 0060a1b9]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac(void)

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalThreadCriticalSection);
  return;
}
