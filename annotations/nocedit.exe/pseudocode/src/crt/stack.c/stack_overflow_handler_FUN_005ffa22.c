// Name: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
// Address Range: [[005ffa22, 005ffa2e]]
// Convention: __watcallStack
// Signature: void crt_stack.c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)

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
