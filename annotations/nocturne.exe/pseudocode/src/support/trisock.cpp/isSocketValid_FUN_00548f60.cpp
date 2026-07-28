// Name: support_trisock.cpp_isSocketValid_FUN_00548f60
// Address: 00548f60
// Address Range: [[00548f60, 00548f6f]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_isSocketValid_FUN_00548f60(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_isSocketValid_FUN_00548f60(_SOCKET *socket_handle)

{
  return (uint)(*socket_handle != 0xffffffff);
}
