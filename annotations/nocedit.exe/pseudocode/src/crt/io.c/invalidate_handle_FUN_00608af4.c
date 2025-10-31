// Name: crt_io.c_invalidate_handle_FUN_00608af4
// Address: 00608af4
// Address Range: [[00608af4, 00608b1f]]
// Convention: __cdecl
// Signature: void crt_io.c_invalidate_handle_FUN_00608af4(int handle_index)
// Cross-references:
//   crt_io.c_invalidate_handle_wrapper_FUN_00602448 (00602448) at 0060244d [UNCONDITIONAL_CALL]
//   crt_io.c_invalidate_handle_wrapper_FUN_0060a154 (0060a154) at 0060a171 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18 = 00602434
//   EXIT_THREAD_CRITICAL_SECTION_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c = 00602434
//   SIOControlBlock* g_IOControlBlock = 00000000
//   undefined4 g_CurrentHandleCount
// Function calls:
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

void __cdecl crt_io_c_invalidate_handle_FUN_00608af4(int handle_index)

{
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684f18)();
  if ((0 < handle_index) && (handle_index < g_CurrentHandleCount)) {
    g_IOControlBlock->standard_handles[handle_index] = (HANDLE)0x0;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684f1c)();
  return;
}


// Assembly code:
// 00608af4: PUSH EBX
//   Label: crt_io.c_invalidate_handle_FUN_00608af4
// 00608af5: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00608af9: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f18]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f18 (READ)
// 00608aff: TEST EBX,EBX
// 00608b01: JLE 0x00608b18
//   XREF to: 00608b18 (CONDITIONAL_JUMP)
// 00608b03: CMP EBX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 00608b09: JGE 0x00608b18
//   XREF to: 00608b18 (CONDITIONAL_JUMP)
// 00608b0b: MOV EDX,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 00608b11: MOV dword ptr [EDX + EBX*0x4],0x0
// 00608b18: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f1c]
//   Label: LAB_00608b18
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684f1c (READ)
// 00608b1e: POP EBX
// 00608b1f: RET
