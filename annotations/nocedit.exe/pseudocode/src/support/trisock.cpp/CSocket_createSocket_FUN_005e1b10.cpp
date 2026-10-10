// Name: support_trisock.cpp_CSocket_createSocket_FUN_005e1b10
// Address: 005e1b10
// Address Range: [[005e1b10, 005e1b37]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_005e1b10(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_005e1b10(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_005e1d20(this_ptr);
  _Var1 = socket(2,1,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
