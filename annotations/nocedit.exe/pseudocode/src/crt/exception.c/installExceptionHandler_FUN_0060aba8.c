// Name: crt_exception.c_installExceptionHandler_FUN_0060aba8
// Address: 0060aba8
// Address Range: [[0060aba8, 0060abf3]]
// Convention: __cdecl
// Signature: void crt_exception.c_installExceptionHandler_FUN_0060aba8(ExceptionFrame * pExceptionFrame)
// Cross-references:
//   crt_startup.cpp_InitializeWinAppRuntime_FUN_006026a8 (006026a8) at 006026db [UNCONDITIONAL_CALL]
//   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 (0060f8c0) at 0060f937 [UNCONDITIONAL_CALL]
// Globals:
//   SetUnhandledExceptionFilter* PTR_SetUnhandledExceptionFilter_00611640 = 0021220a
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c
//   SetUnhandledExceptionFilter

#include "nocturne.h"

void __cdecl crt_exception_c_installExceptionHandler_FUN_0060aba8(ExceptionFrame *pExceptionFrame)

{
  EXCEPTION_REGISTRATION_RECORD *pEVar1;
  ThreadData *pTVar2;
  undefined4 *in_FS_OFFSET;
  EXCEPTION_REGISTRATION_RECORD *in_stack_00000004;
  
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame = in_stack_00000004;
  pEVar1 = (EXCEPTION_REGISTRATION_RECORD *)*in_FS_OFFSET;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame->Next = pEVar1;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame->Handler = crt_exception_c_ExceptionHandler_FUN_0060a9d8;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  *in_FS_OFFSET = pTVar2->seh_frame;
  (*PTR_SetUnhandledExceptionFilter_00611640)(crt_exception_c_TopLevelExceptionFilter_FUN_0060a7a4);
  return;
}


// Assembly code:
// 0060aba8: PUSH EBX
//   Label: crt_exception.c_installExceptionHandler_FUN_0060aba8
// 0060aba9: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060abad: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060abb3: MOV dword ptr [EAX + 0x54],EBX
// 0060abb6: XOR EAX,EAX
// 0060abb8: MOV EAX,dword ptr FS:[EAX]
// 0060abbb: MOV EBX,EAX
// 0060abbd: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060abc3: MOV EAX,dword ptr [EAX + 0x54]
// 0060abc6: MOV dword ptr [EAX],EBX
// 0060abc8: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060abce: MOV EAX,dword ptr [EAX + 0x54]
// 0060abd1: MOV dword ptr [EAX + 0x4],0x60a9d8
//   XREF to: 0060a9d8 (DATA)
// 0060abd8: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060abde: MOV EAX,dword ptr [EAX + 0x54]
// 0060abe1: XOR EDX,EDX
// 0060abe3: MOV dword ptr FS:[EDX],EAX
// 0060abe6: PUSH 0x60a7a4
//   XREF to: 0060a7a4 (DATA)
// 0060abeb: CALL dword ptr CS:[0x611640]
//   XREF to: EXTERNAL:0000009b (COMPUTED_CALL)
//   XREF to: 00611640 (READ)
// 0060abf2: POP EBX
// 0060abf3: RET
