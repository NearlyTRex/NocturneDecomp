// Name: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
// Address: 0060a1bc
// Address Range: [[0060a1bc, 0060a1c9]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc(void)

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_io_critical_section_FUN_0060a1bc(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalIoCriticalSection);
  return;
}
