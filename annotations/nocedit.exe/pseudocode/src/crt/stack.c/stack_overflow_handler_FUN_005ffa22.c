// Name: crt_stack.c_stack_overflow_handler_FUN_005ffa22
// Address: 005ffa22
// Address Range: [[005ffa22, 005ffa2e]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_stack_c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)

#include "nocturne.h"

void __watcallStack crt_stack_c_stack_overflow_handler_FUN_005ffa22(SIZE_T required_bytes)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  crt_startup_c_HandleRuntimeError_FUN_00606660("Stack Overflow!\r\n",1);
  iVar3 = -4;
  do {
    *(int *)(&stack0xfffffff4 + iVar3) = iVar3;
    iVar3 = iVar3 + -0x1000;
    iVar2 = iVar4 + -0x1000;
    bVar1 = 0xfff < iVar4;
    iVar4 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}
