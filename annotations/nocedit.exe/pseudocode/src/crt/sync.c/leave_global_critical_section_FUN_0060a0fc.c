// Name: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
// Address: 0060a0fc
// Address Range: [[0060a0fc, 0060a109]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_critical_section_FUN_0060a0fc(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3d1 [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalSystemCriticalSection
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_critical_section_FUN_0060a0fc(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalSystemCriticalSection);
  return;
}


// Assembly code:
// 0060a0fc: PUSH 0x3f9b8a0
//   Label: crt_sync.c_leave_global_critical_section_FUN_0060a0fc
//   XREF to: 03f9b8a0 (DATA)
// 0060a101: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a106: ADD ESP,0x4
// 0060a109: RET
