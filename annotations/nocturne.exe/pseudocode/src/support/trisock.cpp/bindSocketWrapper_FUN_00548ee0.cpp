// Name: support_trisock.cpp_bindSocketWrapper_FUN_00548ee0
// Address: 00548ee0
// Address Range: [[00548ee0, 00548ef1]]
// Convention: __cdecl
// Signature: _SOCKET * __cdecl support_trisock_cpp_bindSocketWrapper_FUN_00548ee0(_SOCKET *socket_handle,int flags)

#include "nocturne.h"

_SOCKET * __cdecl support_trisock_cpp_bindSocketWrapper_FUN_00548ee0(_SOCKET *socket_handle,int flags)

{
  support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(socket_handle);
  return socket_handle;
}
