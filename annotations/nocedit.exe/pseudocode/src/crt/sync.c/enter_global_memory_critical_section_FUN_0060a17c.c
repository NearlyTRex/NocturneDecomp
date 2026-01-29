// Name: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
// Address: 0060a17c
// Address Range: [[0060a17c, 0060a189]]
// Convention: __cdecl
// Signature: void __cdecl crt_sync_c_enter_global_memory_critical_section_FUN_0060a17c(void)

#include "nocturne.h"

void __cdecl enter_global_memory_critical_section(void)

{
  enter_reentrant_critical_section(&g_GlobalMemoryCriticalSection);
  return;
}
