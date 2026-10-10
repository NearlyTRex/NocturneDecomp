// Name: support_trisock.cpp_CSocket_createSocket_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 00548f27]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_00548f00(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_00548f00(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_00549110(this_ptr);
  _Var1 = socket(2,1,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
