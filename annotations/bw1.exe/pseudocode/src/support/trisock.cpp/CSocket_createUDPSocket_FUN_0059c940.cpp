// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940
// Address: 0059c940
// Address Range: [[0059c940, 0059c967]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(this_ptr);
  _Var1 = socket(2,2,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
