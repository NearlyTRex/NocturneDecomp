// Name: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
// Address: 0060a0fc
// Address Range: [[0060a0fc, 0060a109]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_global_critical_section_FUN_0060a0fc(void)

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_critical_section_FUN_0060a0fc(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalSystemCriticalSection);
  return;
}
