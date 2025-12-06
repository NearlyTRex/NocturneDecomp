// Name: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
// Address: 0060a18c
// Address Range: [[0060a18c, 0060a199]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c(void)

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_memory_critical_section_FUN_0060a18c(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalMemoryCriticalSection);
  return;
}
