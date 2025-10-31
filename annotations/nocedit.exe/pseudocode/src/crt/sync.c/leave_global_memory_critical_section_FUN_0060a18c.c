// Name: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
// Address: 0060a18c
// Address Range: [[0060a18c, 0060a199]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a422 [PARAM]
// Globals:
//   ReentrantCriticalSection g_GlobalMemoryCriticalSection
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_memory_critical_section_FUN_0060a18c(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalMemoryCriticalSection);
  return;
}


// Assembly code:
// 0060a18c: PUSH 0x3f9b9c0
//   Label: crt_sync.c_leave_global_memory_critical_section_FUN_0060a18c
//   XREF to: 03f9b9c0 (DATA)
// 0060a191: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a196: ADD ESP,0x4
// 0060a199: RET
