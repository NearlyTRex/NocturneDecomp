// Name: crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
// Address: 0060abf4
// Address Range: [[0060abf4, 0060ac15]]
// Convention: __cdecl
// Signature: void crt_exception.c_RemoveExceptionHandler_FUN_0060abf4(void)
// Cross-references:
//   crt_exit.c_ExitProcess_FUN_00602700 (00602700) at 00602724 [UNCONDITIONAL_CALL]
//   crt_thread.c_exit_thread_FUN_0060fa58 (0060fa58) at 0060fa5e [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

void __cdecl crt_exception_c_RemoveExceptionHandler_FUN_0060abf4(void)

{
  ThreadData *pTVar1;
  undefined4 *in_FS_OFFSET;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  if (pTVar1->seh_frame != (EXCEPTION_REGISTRATION_RECORD *)0x0) {
    *in_FS_OFFSET = pTVar1->seh_frame->Next;
  }
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->seh_frame = (EXCEPTION_REGISTRATION_RECORD *)0x0;
  return;
}


// Assembly code:
// 0060abf4: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060abfa: MOV EAX,dword ptr [EAX + 0x54]
// 0060abfd: TEST EAX,EAX
// 0060abff: JZ 0x0060ac08
//   XREF to: 0060ac08 (CONDITIONAL_JUMP)
// 0060ac01: MOV EAX,dword ptr [EAX]
// 0060ac03: XOR EDX,EDX
// 0060ac05: MOV dword ptr FS:[EDX],EAX
// 0060ac08: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060ac08
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060ac0e: MOV dword ptr [EAX + 0x54],0x0
// 0060ac15: RET
