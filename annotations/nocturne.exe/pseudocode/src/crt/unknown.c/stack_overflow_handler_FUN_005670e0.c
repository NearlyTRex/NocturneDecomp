// Name: crt_unknown.c_stack_overflow_handler_FUN_005670e0
// Address: 005670e0
// Address Range: [[005670e0, 005670ec]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_unknown_c_stack_overflow_handler_FUN_005670e0(SIZE_T required_bytes)

#include "nocturne.h"

void __watcallStack stack_overflow_handler(SIZE_T required_bytes)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 1;
  HandleRuntimeError("Stack Overflow!\r\n",1);
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
