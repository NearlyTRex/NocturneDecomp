// Name: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
// Address: 0060a18c
// Address Range: [[0060a18c, 0060a199]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_global_memory_critical_section_FUN_0060a18c(void)

#include "nocturne.h"

void __cdecl leave_global_memory_critical_section(void)

{
  leave_reentrant_critical_section(&g_GlobalMemoryCriticalSection);
  return;
}
