// Name: crt_stack.c_check_stack_target_FUN_005ffa03
// Address: 005ffa03
// Address Range: [[005ffa03, 005ffa21]]
// Convention: __watcallRegister
// Signature: void crt_stack.c_check_stack_target_FUN_005ffa03(void * target_stack_ptr)
// Cross-references:
//   crt_stack.c_stack_probe_FUN_005ff9f3 (005ff9f3) at 005ff9f7 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

void crt_stack_c_check_stack_target_FUN_005ffa03(void *target_stack_ptr)

{
  bool bVar1;
  int iVar2;
  ThreadData *pTVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  
  if (target_stack_ptr < &stack0xfffffffc) {
    iVar2 = (int)target_stack_ptr - (int)&stack0xfffffffc;
    pTVar3 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if (pTVar3->stack_limit < (uint)-iVar2) {
      crt_stack_c_ProbeStackSpace_FUN_005ffa2f((uint)target_stack_ptr);
      return;
    }
  }
  iVar2 = 1;
  crt_startup_c_HandleRuntimeError_FUN_00606660("Stack Overflow!\r\n",1);
  iVar5 = -4;
  do {
    *(int *)(&stack0xfffffff0 + iVar5) = iVar5;
    iVar5 = iVar5 + -0x1000;
    iVar4 = iVar2 + -0x1000;
    bVar1 = 0xfff < iVar2;
    iVar2 = iVar4;
  } while (iVar4 != 0 && bVar1);
  return;
}


// Assembly code:
// 005ffa03: PUSH EAX
//   Label: crt_stack.c_check_stack_target_FUN_005ffa03
// 005ffa04: CMP EAX,ESP
// 005ffa06: JNC 0x005ffa22
//   XREF to: 005ffa22 (CONDITIONAL_JUMP)
// 005ffa08: SUB EAX,ESP
// 005ffa0a: NEG EAX
// 005ffa0c: PUSH ESI
// 005ffa0d: PUSH EAX
// 005ffa0e: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005ffa14: MOV ESI,EAX
// 005ffa16: POP EAX
// 005ffa17: CMP EAX,dword ptr [ESI]
// 005ffa19: POP ESI
// 005ffa1a: JBE 0x005ffa22
//   XREF to: 005ffa22 (CONDITIONAL_JUMP)
// 005ffa1c: CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   XREF to: 005ffa2f (UNCONDITIONAL_CALL)
// 005ffa21: RET
