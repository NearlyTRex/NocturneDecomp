// Name: support_trisock.cpp_createUDPSocket_FUN_00548f30
// Address: 00548f30
// Address Range: [[00548f30, 00548f57]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_createUDPSocket_FUN_00548f30(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_createUDPSocket_FUN_00548f30(_SOCKET *socket_handle)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(socket_handle);
  _Var1 = socket(2,2,0);
  *socket_handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
