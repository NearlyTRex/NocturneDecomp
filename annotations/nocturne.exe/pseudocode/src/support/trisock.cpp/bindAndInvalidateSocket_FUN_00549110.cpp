// Name: support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
// Address: 00549110
// Address Range: [[00549110, 00549142]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(_SOCKET *socket_handle)

{
  int iVar1;
  
  iVar1 = support_trisock_cpp_isSocketValid_FUN_00548f60(socket_handle);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = Ordinal_3(*socket_handle);
  *socket_handle = 0xffffffff;
  return (uint)(iVar1 == 0);
}
