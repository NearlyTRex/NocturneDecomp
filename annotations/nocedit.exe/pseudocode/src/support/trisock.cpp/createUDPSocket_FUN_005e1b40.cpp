// Name: support_trisock.cpp_createUDPSocket_FUN_005e1b40
// Address: 005e1b40
// Address Range: [[005e1b40, 005e1b67]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_createUDPSocket_FUN_005e1b40(SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_createUDPSocket_FUN_005e1b40(SOCKET *socket_handle)

{
  SOCKET SVar1;
  
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_handle);
  SVar1 = shutdown(2,2);
  *socket_handle = SVar1;
  return (uint)(SVar1 != 0xffffffff);
}
