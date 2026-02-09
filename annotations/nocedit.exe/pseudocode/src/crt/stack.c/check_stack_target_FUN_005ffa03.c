// Name: crt_stack.c_check_stack_target_FUN_005ffa03
// Address: 005ffa03
// Address Range: [[005ffa03, 005ffa21]]
// Convention: __stk_probe
// Signature: void __stk_probe crt_stack_c_check_stack_target_FUN_005ffa03(void)

#include "nocturne.h"

void __stk_probe check_stack_target(void)

{
  bool bVar1;
  byte *unaff_EAX;
  int iVar2;
  ThreadData *pTVar3;
  int iVar4;
  int iVar5;
  
  if (unaff_EAX < &stack0xfffffffc) {
    iVar2 = (int)unaff_EAX - (int)&stack0xfffffffc;
    pTVar3 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if (pTVar3->stack_limit < (uint)-iVar2) {
      ProbeStackSpace((uint)unaff_EAX);
      return;
    }
  }
  iVar2 = 1;
  HandleRuntimeError("Stack Overflow!\r\n",1);
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
