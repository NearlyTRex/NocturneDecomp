// Name: support_trisock.cpp_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 00548f27]]
// Convention: unknown
// Signature: bool support_trisock_cpp_FUN_00548f00(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool support_trisock_cpp_FUN_00548f00(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110();
  iVar1 = Ordinal_23(2,1,0);
  *in_stack_00000004 = iVar1;
  return iVar1 != -1;
}
