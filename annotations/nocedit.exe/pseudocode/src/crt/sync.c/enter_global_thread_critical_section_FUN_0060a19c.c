// Name: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
// Address: 0060a19c
// Address Range: [[0060a19c, 0060a1a9]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a41d [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalThreadCriticalSection
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_thread_critical_section_FUN_0060a19c(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalThreadCriticalSection);
  return;
}


// Assembly code:
// 0060a19c: PUSH 0x3f9b8b0
//   Label: crt_sync.c_enter_global_thread_critical_section_FUN_0060a19c
//   XREF to: 03f9b8b0 (DATA)
// 0060a1a1: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a1a6: ADD ESP,0x4
// 0060a1a9: RET
