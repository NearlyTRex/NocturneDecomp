// Name: support_trisock.cpp_createSocket_FUN_005e1b10
// Address: 005e1b10
// Address Range: [[005e1b10, 005e1b37]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_createSocket_FUN_005e1b10(_SOCKET *socket_handle)

{
  _SOCKET _Var1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_handle);
  _Var1 = shutdown(2,1);
  *socket_handle = _Var1;
  return (uint)(_Var1 != 0xffffffff);
}
