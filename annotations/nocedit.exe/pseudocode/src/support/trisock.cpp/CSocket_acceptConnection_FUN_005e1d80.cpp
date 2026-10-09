// Name: support_trisock.cpp_CSocket_acceptConnection_FUN_005e1d80
// Address: 005e1d80
// Address Range: [[005e1d80, 005e1de8] [0060c537, 0060c551]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_acceptConnection_FUN_005e1d80(CSocket *this_ptr,CSocket *new_socket,SNetworkAddr *client_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_acceptConnection_FUN_005e1d80(CSocket *this_ptr,CSocket *new_socket,SNetworkAddr *client_addr)

{
  ushort uVar1;
  _SOCKET _Var1;
  SOCKADDR_IN *pSVar2;
  byte bVar3;
  SOCKADDR local_20;
  SNetworkAddr SStack_10;
  int local_8;
  
  local_8 = 0x10;
  _Var1 = accept(this_ptr->handle,&local_20,&local_8);
  new_socket->handle = _Var1;
  if (_Var1 == 0xffffffff) {
    return 0;
  }
  if (client_addr == (SNetworkAddr *)0x0) {
    return 1;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960(&SStack_10,&local_20);
  client_addr->ip_address = *(uint *)pSVar2;
  uVar1 = *(ushort *)((int)&pSVar2->sin_addr + 2);
  client_addr->port = *(ushort *)&pSVar2->sin_addr;
  client_addr->padding = uVar1;
  return 1;
}
