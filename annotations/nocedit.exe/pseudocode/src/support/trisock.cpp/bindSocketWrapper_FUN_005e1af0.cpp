// Name: support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
// Address: 005e1af0
// Address Range: [[005e1af0, 005e1b01]]
// Convention: __cdecl
// Signature: _SOCKET * __cdecl support_trisock_cpp_bindSocketWrapper_FUN_005e1af0(_SOCKET *socket_handle,int flags)

#include "nocturne.h"

_SOCKET * __cdecl support_trisock_cpp_bindSocketWrapper_FUN_005e1af0(_SOCKET *socket_handle,int flags)

{
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_handle);
  return socket_handle;
}
