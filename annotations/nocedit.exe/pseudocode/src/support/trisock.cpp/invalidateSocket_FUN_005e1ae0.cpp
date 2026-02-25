// Name: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
// Address: 005e1ae0
// Address Range: [[005e1ae0, 005e1aea]]
// Convention: __cdecl
// Signature: _SOCKET * __cdecl support_trisock_cpp_invalidateSocket_FUN_005e1ae0(_SOCKET *socket_handle)

#include "nocturne.h"

_SOCKET * __cdecl support_trisock_cpp_invalidateSocket_FUN_005e1ae0(_SOCKET *socket_handle)

{
  *socket_handle = 0xffffffff;
  return socket_handle;
}
