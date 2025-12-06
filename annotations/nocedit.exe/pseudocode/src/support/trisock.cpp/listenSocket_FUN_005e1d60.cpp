// Name: support_trisock.cpp_listenSocket_FUN_005e1d60
// Address: 005e1d60
// Address Range: [[005e1d60, 005e1d78]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_listenSocket_FUN_005e1d60(SOCKET * socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_listenSocket_FUN_005e1d60(SOCKET *socket_handle)

{
  int iVar1;
  
  iVar1 = crt_wsock32_c_listen(*socket_handle,1);
  return (uint)(iVar1 == 0);
}
