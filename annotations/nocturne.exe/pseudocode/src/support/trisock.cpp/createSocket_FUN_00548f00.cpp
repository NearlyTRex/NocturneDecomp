// Name: support_trisock.cpp_createSocket_FUN_00548f00
// Address: 00548f00
// Address Range: [[00548f00, 00548f27]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_createSocket_FUN_00548f00(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_createSocket_FUN_00548f00(_SOCKET *socket_handle)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(socket_handle);
  _Var1 = Ordinal_23(2,1,0);
  *socket_handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
