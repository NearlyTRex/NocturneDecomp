// Name: support_trisock.cpp_listenSocket_FUN_00549150
// Address: 00549150
// Address Range: [[00549150, 00549168]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_listenSocket_FUN_00549150(_SOCKET *socket_handle)

#include "nocturne.h"

int __cdecl support_trisock_cpp_listenSocket_FUN_00549150(_SOCKET *socket_handle)

{
  int iVar1;
  
  iVar1 = listen(*socket_handle,1);
  return (uint)(iVar1 == 0);
}
