// Name: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
// Address: 0060a1cc
// Address Range: [[0060a1cc, 0060a1d9]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_leave_global_io_critical_section_FUN_0060a1cc(void)

#include "nocturne.h"

void __cdecl leave_global_io_critical_section(void)

{
  leave_reentrant_critical_section(&g_GlobalIoCriticalSection);
  return;
}
