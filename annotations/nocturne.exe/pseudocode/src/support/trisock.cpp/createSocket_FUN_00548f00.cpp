// Name: support_trisock.cpp_createSocket_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 00548f27]]
// Convention: unknown
// Signature: bool support_trisock_cpp_createSocket_FUN_00548f00(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool support_trisock_cpp_createSocket_FUN_00548f00(void)

{
  _SOCKET _Var1;
  _SOCKET *in_stack_00000004;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(in_stack_00000004);
  _Var1 = Ordinal_23(2,1,0);
  *in_stack_00000004 = _Var1;
  return _Var1 != 0xffffffff;
}
