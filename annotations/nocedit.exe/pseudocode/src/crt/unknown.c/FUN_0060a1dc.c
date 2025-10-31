// Name: crt_unknown.c_FUN_0060a1dc
// Address: 0060a1dc
// Address Range: [[0060a1dc, 0060a1e9]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060a1dc()
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a46f [PARAM]
// Globals:
//   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
// Function calls:
//   crt_sync.c_enter_reentrant_critical_section_FUN_0060a060

#include "nocturne.h"

void crt_unknown_c_FUN_0060a1dc(void)

{
  crt_sync_c_enter_reentrant_critical_section_FUN_0060a060(&g_GlobalRuntimeCriticalSection);
  return;
}


// Assembly code:
// 0060a1dc: PUSH 0x3f9bff0
//   Label: crt_unknown.c_FUN_0060a1dc
//   XREF to: 03f9bff0 (DATA)
// 0060a1e1: CALL crt_sync.c_enter_reentrant_critical_section_FUN_0060a060
//   XREF to: 0060a060 (UNCONDITIONAL_CALL)
// 0060a1e6: ADD ESP,0x4
// 0060a1e9: RET
