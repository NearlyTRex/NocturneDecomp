// Name: support_trisock.cpp_isSocketValid_FUN_005e1b70
// Address: 005e1b70
// Address Range: [[005e1b70, 005e1b7f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_isSocketValid_FUN_005e1b70(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_isSocketValid_FUN_005e1b70(_SOCKET *socket_handle)

{
  return (uint)(*socket_handle != 0xffffffff);
}
