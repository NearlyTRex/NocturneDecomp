// Name: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
// Address: 0060a0ec
// Address Range: [[0060a0ec, 0060a0f9]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_critical_section_FUN_0060a0ec(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3cc [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalSystemCriticalSection
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_critical_section_FUN_0060a0ec(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalSystemCriticalSection);
  return;
}


// Assembly code:
// 0060a0ec: PUSH 0x3f9b8a0
//   Label: crt_sync.c_enter_global_critical_section_FUN_0060a0ec
//   XREF to: 03f9b8a0 (DATA)
// 0060a0f1: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a0f6: ADD ESP,0x4
// 0060a0f9: RET
