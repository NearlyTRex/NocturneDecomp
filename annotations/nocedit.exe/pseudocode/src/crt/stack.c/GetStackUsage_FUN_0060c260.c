// Name: crt_stack.c_GetStackUsage_FUN_0060c260
// Address: 0060c260
// Address Range: [[0060c260, 0060c26e]]
// Convention: __cdecl
// Signature: int __cdecl crt_stack_c_GetStackUsage_FUN_0060c260(void)

#include "nocturne.h"

int __cdecl GetStackUsage(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return (int)(&stack0xfffffffc + -pTVar1->stack_limit);
}
