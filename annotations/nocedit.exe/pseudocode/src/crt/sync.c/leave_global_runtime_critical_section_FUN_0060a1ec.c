// Name: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
// Address: 0060a1ec
// Address Range: [[0060a1ec, 0060a1f9]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a45a [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_runtime_critical_section_FUN_0060a1ec(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalRuntimeCriticalSection);
  return;
}


// Assembly code:
// 0060a1ec: PUSH 0x3f9bff0
//   Label: crt_sync.c_leave_global_runtime_critical_section_FUN_0060a1ec
//   XREF to: 03f9bff0 (DATA)
// 0060a1f1: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a1f6: ADD ESP,0x4
// 0060a1f9: RET
