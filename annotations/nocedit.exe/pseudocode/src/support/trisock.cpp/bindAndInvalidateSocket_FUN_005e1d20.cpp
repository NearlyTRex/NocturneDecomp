// Name: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
// Address: 005e1d20
// Address Range: [[005e1d20, 005e1d52]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET *socket_handle)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_isSocketValid_FUN_005e1b70(socket_handle);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = closesocket(*socket_handle);
  *socket_handle = 0xffffffff;
  return (uint)(iVar1 == 0);
}
