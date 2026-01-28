// Name: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
// Address: 0060a1ec
// Address Range: [[0060a1ec, 0060a1f9]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec(void)

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalRuntimeCriticalSection);
  return;
}
