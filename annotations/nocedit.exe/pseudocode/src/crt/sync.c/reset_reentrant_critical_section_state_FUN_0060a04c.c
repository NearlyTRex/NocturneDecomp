// Name: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
// Address: 0060a04c
// Address Range: [[0060a04c, 0060a05e]]
// Convention: __cdecl
// Signature: void crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c(ReentrantCriticalSection * rcs)
// Cross-references:
//   crt_io.c_invalidate_handle_wrapper_FUN_0060a154 (0060a154) at 0060a164 [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a413 [DATA]

#include "nocturne.h"

void __cdecl
crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c(ReentrantCriticalSection *rcs)

{
  rcs->ownerThreadId = 0;
  rcs->lockCount = 0;
  return;
}


// Assembly code:
// 0060a04c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
//   XREF to: Stack[0x4] (READ)
// 0060a050: MOV dword ptr [EAX + 0x8],0x0
// 0060a057: MOV dword ptr [EAX + 0xc],0x0
// 0060a05e: RET
