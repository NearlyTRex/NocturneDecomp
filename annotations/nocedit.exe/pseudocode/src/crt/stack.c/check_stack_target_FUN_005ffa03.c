// Name: crt_stack.c_check_stack_target_FUN_005ffa03
// Address: 005ffa03
// Address Range: [[005ffa03, 005ffa21]]
// Convention: __watcallRegister
// Signature: void crt_stack_c_check_stack_target_FUN_005ffa03(void *target_stack_ptr)

#include "nocturne.h"

void crt_stack_c_check_stack_target_FUN_005ffa03(void *target_stack_ptr)

{
  bool bVar1;
  int iVar2;
  ThreadData *pTVar3;
  int iVar4;
  int iVar5;
  
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
