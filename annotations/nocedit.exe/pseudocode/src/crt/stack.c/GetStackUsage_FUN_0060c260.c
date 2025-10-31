// Name: crt_stack.c_GetStackUsage_FUN_0060c260
// Address: 0060c260
// Address Range: [[0060c260, 0060c26e]]
// Convention: __cdecl
// Signature: int crt_stack.c_GetStackUsage_FUN_0060c260(void)
// Cross-references:
//   crt_io.c_write_FUN_006084ec (006084ec) at 00608660 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f50b [UNCONDITIONAL_CALL]
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609ec5 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

int __cdecl crt_stack_c_GetStackUsage_FUN_0060c260(void)

{
  ThreadData *pTVar1;
  BADSPACEBASE *in_ESP;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return (int)(&stack0xfffffffc + -pTVar1->stack_limit);
}


// Assembly code:
// 0060c260: PUSH EBX
//   Label: crt_stack.c_GetStackUsage_FUN_0060c260
// 0060c261: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060c267: MOV EBX,EAX
// 0060c269: MOV EAX,ESP
// 0060c26b: SUB EAX,dword ptr [EBX]
// 0060c26d: POP EBX
// 0060c26e: RET
