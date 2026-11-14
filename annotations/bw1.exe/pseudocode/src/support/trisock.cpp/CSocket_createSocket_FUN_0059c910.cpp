// Name: support_trisock.cpp_CSocket_createSocket_FUN_0059c910
// Address: 0059c910
// Address Range: [[0059c910, 0059c937]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0059c910(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createSocket_FUN_0059c910(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(this_ptr);
  _Var1 = socket(2,1,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
