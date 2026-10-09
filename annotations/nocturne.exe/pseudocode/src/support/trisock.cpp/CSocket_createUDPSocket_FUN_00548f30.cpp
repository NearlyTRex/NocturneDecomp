// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_00548f30
// Address: 00548f30
// Address Range: [[00548f30, 00548f57]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00548f30(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_00548f30(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_00549110(this_ptr);
  _Var1 = socket(2,2,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
