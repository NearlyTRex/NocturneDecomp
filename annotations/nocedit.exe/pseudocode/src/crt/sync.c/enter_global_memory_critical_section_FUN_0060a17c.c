// Name: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
// Address: 0060a17c
// Address Range: [[0060a17c, 0060a189]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a418 [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalMemoryCriticalSection
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_memory_critical_section_FUN_0060a17c(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalMemoryCriticalSection);
  return;
}


// Assembly code:
// 0060a17c: PUSH 0x3f9b9c0
//   Label: crt_sync.c_enter_global_memory_critical_section_FUN_0060a17c
//   XREF to: 03f9b9c0 (DATA)
// 0060a181: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a186: ADD ESP,0x4
// 0060a189: RET
