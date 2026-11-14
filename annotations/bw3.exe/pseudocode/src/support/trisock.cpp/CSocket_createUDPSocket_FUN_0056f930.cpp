// Name: support_trisock.cpp_CSocket_createUDPSocket_FUN_0056f930
// Address: 0056f930
// Address Range: [[0056f930, 0056f957]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket *this_ptr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_createUDPSocket_FUN_0056f930(CSocket *this_ptr)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_CSocket_closeSocket_FUN_0056fc30(this_ptr);
  _Var1 = socket(2,2,0);
  this_ptr->handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
