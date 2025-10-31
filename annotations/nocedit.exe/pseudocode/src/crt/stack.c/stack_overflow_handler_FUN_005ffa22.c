// Name: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
// Address Range: [[005ffa22, 005ffa2e]]
// Convention: __watcallStack
// Signature: void crt_stack.c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)
// Cross-references:
//   crt_io.c_write_FUN_006084ec (006084ec) at 0060866f [UNCONDITIONAL_CALL]
//   crt_stack.c_check_stack_target_FUN_005ffa03 (005ffa03) at 005ffa06 [CONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_Stack_Overflow_00684b24
// Function calls:
//   crt_startup.c_HandleRuntimeError_FUN_00606660

#include "nocturne.h"

void __watcallStack crt_stack_c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)

{
  bool bVar1;
  SIZE_T SVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  
  crt_startup_c_HandleRuntimeError_FUN_00606660("Stack Overflow!\r\n",1);
  iVar3 = -4;
  do {
    *(int *)(&stack0xfffffff8 + iVar3) = iVar3;
    iVar3 = iVar3 + -0x1000;
    SVar2 = required_bytes - 0x1000;
    bVar1 = 0xfff < (int)required_bytes;
    required_bytes = SVar2;
  } while (SVar2 != 0 && bVar1);
  return;
}


// Assembly code:
// 005ffa22: POP EAX
//   Label: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// 005ffa23: PUSH 0x1
// 005ffa25: PUSH 0x684b24
//   XREF to: 00684b24 (DATA)
// 005ffa2a: CALL crt_startup.c_HandleRuntimeError_FUN_00606660
//   XREF to: 00606660 (UNCONDITIONAL_CALL)
