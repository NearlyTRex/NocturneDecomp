// Name: crt_io.c_close_handle_safe_FUN_0060c2e0
// Address: 0060c2e0
// Address Range: [[0060c2e0, 0060c331]]
// Convention: __cdecl
// Signature: int crt_io.c_close_handle_safe_FUN_0060c2e0(int handle_index)
// Cross-references:
//   crt_fstream.cpp_filebuf_close_FUN_00608bcc (00608bcc) at 00608bff [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
//   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
//   uint g_MaxHandleCount = 0x14
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_io.c_close_FUN_00609bd0
//   crt_io.c_invalidate_handle_wrapper_FUN_00602448
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl crt_io_c_close_handle_safe_FUN_0060c2e0(int handle_index)

{
  int iVar1;
  undefined4 uStack0000000c;
  
  if ((-1 < handle_index) && ((uint)handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(handle_index);
    iVar1 = crt_io_c_close_FUN_00609bd0(handle_index);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
    uStack0000000c = 0x60c32a;
    (*PTR_crt_sync_c_InvalidateHandle_FUN_00602448_00684ef4)(handle_index);
    return iVar1;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}


// Assembly code:
// 0060c2e0: PUSH EBX
//   Label: crt_io.c_close_handle_safe_FUN_0060c2e0
// 0060c2e1: PUSH ESI
// 0060c2e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060c2e6: TEST EBX,EBX
// 0060c2e8: JL 0x0060c2f2
//   XREF to: 0060c2f2 (CONDITIONAL_JUMP)
// 0060c2ea: CMP EBX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 0060c2f0: JBE 0x0060c304
//   XREF to: 0060c304 (CONDITIONAL_JUMP)
// 0060c2f2: PUSH 0x4
//   Label: LAB_0060c2f2
// 0060c2f4: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060c2f9: MOV EAX,0xffffffff
// 0060c2fe: ADD ESP,0x4
// 0060c301: POP ESI
// 0060c302: POP EBX
// 0060c303: RET
// 0060c304: PUSH EBX
//   Label: LAB_0060c304
// 0060c305: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060c30b: ADD ESP,0x4
// 0060c30e: PUSH EBX
// 0060c30f: CALL crt_io.c_close_FUN_00609bd0
//   XREF to: 00609bd0 (UNCONDITIONAL_CALL)
// 0060c314: ADD ESP,0x4
// 0060c317: PUSH EBX
// 0060c318: MOV ESI,EAX
// 0060c31a: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060c320: ADD ESP,0x4
// 0060c323: PUSH EBX
// 0060c324: CALL dword ptr [PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4]
//   XREF to: 00602448 (COMPUTED_CALL)
//   XREF to: 00684ef4 (READ)
// 0060c32a: ADD ESP,0x4
// 0060c32d: MOV EAX,ESI
// 0060c32f: POP ESI
// 0060c330: POP EBX
// 0060c331: RET
