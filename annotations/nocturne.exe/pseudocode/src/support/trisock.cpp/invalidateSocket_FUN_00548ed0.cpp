// Name: support_trisock.cpp_invalidateSocket_FUN_00548ed0
// Address: 00548ed0
// Address Range: [[00548ed0, 00548eda]]
// Convention: __cdecl
// Signature: _SOCKET * __cdecl support_trisock_cpp_invalidateSocket_FUN_00548ed0(_SOCKET *socket_handle)

#include "nocturne.h"

_SOCKET * __cdecl support_trisock_cpp_invalidateSocket_FUN_00548ed0(_SOCKET *socket_handle)

{
  *socket_handle = 0xffffffff;
  return socket_handle;
}
