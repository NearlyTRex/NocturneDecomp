// Name: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
// Address: 0060a1bc
// Address Range: [[0060a1bc, 0060a1c9]]
// Convention: __cdecl
// Signature: void crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3d6 [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalIoCriticalSection
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void __cdecl crt_sync_c_enter_global_io_critical_section_FUN_0060a1bc(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalIoCriticalSection);
  return;
}


// Assembly code:
// 0060a1bc: PUSH 0x3f9bfe0
//   Label: crt_sync.c_enter_global_io_critical_section_FUN_0060a1bc
//   XREF to: 03f9bfe0 (DATA)
// 0060a1c1: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a1c6: ADD ESP,0x4
// 0060a1c9: RET
