// Name: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
// Address: 0060a0ec
// Address Range: [[0060a0ec, 0060a0f9]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_enter_global_critical_section_FUN_0060a0ec(void)

#include "nocturne.h"

void __cdecl enter_global_critical_section(void)

{
  enter_reentrant_critical_section(&g_GlobalSystemCriticalSection);
  return;
}
