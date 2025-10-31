// Name: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
// Address: 0060a1ac
// Address Range: [[0060a1ac, 0060a1b9]]
// Convention: __cdecl
// Signature: void crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac(void)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a450 [PARAM]
// Globals:
//   ReentrantCriticalSection g_GlobalThreadCriticalSection
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_thread_critical_section_FUN_0060a1ac(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalThreadCriticalSection);
  return;
}


// Assembly code:
// 0060a1ac: PUSH 0x3f9b8b0
//   Label: crt_sync.c_leave_global_thread_critical_section_FUN_0060a1ac
//   XREF to: 03f9b8b0 (DATA)
// 0060a1b1: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a1b6: ADD ESP,0x4
// 0060a1b9: RET
