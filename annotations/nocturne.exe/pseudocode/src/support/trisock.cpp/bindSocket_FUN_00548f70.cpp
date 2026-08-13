// Name: support_trisock.cpp_bindSocket_FUN_00548f70
// Address: 00548f70
// Address Range: [[00548f70, 00548fb5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(_SOCKET *socket_handle,uint16_t port)

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(_SOCKET *socket_handle,uint16_t port)

{
  int iVar1;
  SOCKADDR SStack_10;
  
  SStack_10.sin_family = 2;
  SStack_10.sin_port = htons(port);
  SStack_10.sin_addr = 0;
  iVar1 = bind(*socket_handle,&SStack_10,0x10);
  return (uint)(iVar1 == 0);
}
