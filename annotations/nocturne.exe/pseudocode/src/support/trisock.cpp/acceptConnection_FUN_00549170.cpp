// Name: support_trisock.cpp_acceptConnection_FUN_00549170
// Address: 00549170
// Address Range: [[00549170, 005491d8]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_acceptConnection_FUN_00549170(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket)

#include "nocturne.h"

int __cdecl support_trisock_cpp_acceptConnection_FUN_00549170(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket)

{
  _SOCKET _Var1;
  SOCKADDR_IN *pSVar2;
  byte bVar3;
  SOCKADDR local_20;
  SNetworkAddr SStack_10;
  int local_8;
  
  bVar3 = 0;
  local_8 = 0x10;
  _Var1 = accept(*listen_socket,&local_20,&local_8);
  client_addr->ip_address = _Var1;
  if (_Var1 == 0xffffffff) {
    return 0;
  }
  if (new_socket == (_SOCKET *)0x0) {
    return 1;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_00548d50(&SStack_10,&local_20);
  *new_socket = *(_SOCKET *)pSVar2;
  new_socket[(uint)bVar3 * -2 + 1] = *(_SOCKET *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
