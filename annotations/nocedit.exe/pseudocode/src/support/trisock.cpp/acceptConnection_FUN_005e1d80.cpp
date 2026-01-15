// Name: support_trisock.cpp_acceptConnection_FUN_005e1d80
// Address: 005e1d80
// Address Range: [[005e1d80, 005e1de8]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_acceptConnection_FUN_005e1d80(SOCKET * listen_socket, SNetworkAddr * client_addr, SOCKET * new_socket)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_acceptConnection_FUN_005e1d80
          (SOCKET *listen_socket,SNetworkAddr *client_addr,SOCKET *new_socket)

{
  SOCKET SVar1;
  SOCKADDR_IN *pSVar2;
  byte bVar3;
  SOCKADDR local_20;
  int local_8;
  
  bVar3 = 0;
  local_8 = 0x10;
  SVar1 = crt_wsock32_c_accept(*listen_socket,&local_20,&local_8);
  client_addr->ip_address = SVar1;
  if (SVar1 == 0xffffffff) {
    return 0;
  }
  if (new_socket == (SOCKET *)0x0) {
    return 1;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&stack0xfffffff0,&local_20);
  *new_socket = *(SOCKET *)pSVar2;
  new_socket[(uint)bVar3 * -2 + 1] = *(SOCKET *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
