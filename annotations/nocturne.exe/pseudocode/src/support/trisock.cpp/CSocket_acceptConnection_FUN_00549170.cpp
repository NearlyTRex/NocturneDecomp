// Name: support_trisock.cpp_CSocket_acceptConnection_FUN_00549170
// Address: 00549170
// Address Range: [[00549170, 005491d8]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_acceptConnection_FUN_00549170(CSocket *this_ptr,CSocket *new_socket,SNetworkAddr *client_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_acceptConnection_FUN_00549170(CSocket *this_ptr,CSocket *new_socket,SNetworkAddr *client_addr)

{
  uint uVar1;
  _SOCKET _Var2;
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  SOCKADDR local_20;
  SNetworkAddr SStack_10;
  int local_8;
  
  bVar4 = 0;
  local_8 = 0x10;
  _Var2 = accept(this_ptr->handle,&local_20,&local_8);
  new_socket->handle = _Var2;
  if (_Var2 == 0xffffffff) {
    return 0;
  }
  if (client_addr == (SNetworkAddr *)0x0) {
    return 1;
  }
  pSVar3 = support_trisock_cpp_convertSockAddr_FUN_00548d50(&SStack_10,&local_20);
  client_addr->ip_address = *(uint *)pSVar3;
  uVar1 = *(uint *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  client_addr[-(uint)bVar4].port = (short)uVar1;
  client_addr[-(uint)bVar4].padding = (short)((uint)uVar1 >> 0x10);
  return 1;
}
