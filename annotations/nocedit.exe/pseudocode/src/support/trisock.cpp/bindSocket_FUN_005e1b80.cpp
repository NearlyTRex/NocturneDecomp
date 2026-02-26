// Name: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
// Address Range: [[005e1b80, 005e1bc5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(_SOCKET *socket_handle,uint16_t port)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(_SOCKET *socket_handle,uint16_t port)

{
  int iVar1;
  SOCKADDR local_10;
  
  local_10.sin_family = 2;
  local_10.sin_port = htons(port);
  local_10.sin_addr = 0;
  iVar1 = bind(*socket_handle,&local_10,0x10);
  return (uint)(iVar1 == 0);
}
