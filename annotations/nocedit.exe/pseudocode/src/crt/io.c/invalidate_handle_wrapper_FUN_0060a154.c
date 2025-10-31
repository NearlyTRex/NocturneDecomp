// Name: crt_io.c_invalidate_handle_wrapper_FUN_0060a154
// Address: 0060a154
// Address Range: [[0060a154, 0060a179]]
// Convention: __cdecl
// Signature: void crt_io.c_invalidate_handle_wrapper_FUN_0060a154(int handle_index)
// Cross-references:
//   crt_tls.c_initialize_tls_infrastructure_FUN_0060a3b4 (0060a3b4) at 0060a3c7 [DATA]
// Globals:
//   void* g_TlsDataBase
// Function calls:
//   crt_io.c_invalidate_handle_FUN_00608af4
//   crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c

#include "nocturne.h"

void __cdecl crt_io_c_invalidate_handle_wrapper_FUN_0060a154(int handle_index)

{
  int in_stack_00000008;
  
  crt_sync_c_reset_reentrant_critical_section_state_FUN_0060a04c
            ((ReentrantCriticalSection *)(&g_TlsDataBase + (handle_index & 0xfU) * 4));
  crt_io_c_invalidate_handle_FUN_00608af4(in_stack_00000008);
  return;
}


// Assembly code:
// 0060a154: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_io.c_invalidate_handle_wrapper_FUN_0060a154
//   XREF to: Stack[0x4] (READ)
// 0060a158: AND EAX,0xf
// 0060a15b: SHL EAX,0x4
// 0060a15e: ADD EAX,0x3f9b8c0
//   XREF to: 03f9b8c0 (DATA)
// 0060a163: PUSH EAX
// 0060a164: CALL crt_sync.c_reset_reentrant_critical_section_state_FUN_0060a04c
//   XREF to: 0060a04c (UNCONDITIONAL_CALL)
// 0060a169: ADD ESP,0x4
// 0060a16c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0060a170: PUSH EDX
// 0060a171: CALL crt_io.c_invalidate_handle_FUN_00608af4
//   XREF to: 00608af4 (UNCONDITIONAL_CALL)
// 0060a176: ADD ESP,0x4
// 0060a179: RET
