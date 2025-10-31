// Name: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
// Address: 0060a1cc
// Address Range: [[0060a1cc, 0060a1d9]]
// Convention: __cdecl
// Signature: undefined crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc()
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a404 [DATA]
// Globals:
//   ReentrantCriticalSection g_GlobalIoCriticalSection
// Function calls:
//   crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4

#include "nocturne.h"

void __cdecl crt_sync_c_leave_global_io_critical_section_FUN_0060a1cc(void)

{
  crt_sync_c_leave_reentrant_critical_section_FUN_0060a0c4(&g_GlobalIoCriticalSection);
  return;
}


// Assembly code:
// 0060a1cc: PUSH 0x3f9bfe0
//   Label: crt_sync.c_leave_global_io_critical_section_FUN_0060a1cc
//   XREF to: 03f9bfe0 (DATA)
// 0060a1d1: CALL crt_sync.c_leave_reentrant_critical_section_FUN_0060a0c4
//   XREF to: 0060a0c4 (UNCONDITIONAL_CALL)
// 0060a1d6: ADD ESP,0x4
// 0060a1d9: RET
