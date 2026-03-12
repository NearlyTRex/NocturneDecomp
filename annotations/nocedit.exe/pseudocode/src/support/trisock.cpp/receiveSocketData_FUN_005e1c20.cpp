// Name: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// Address: 005e1c20
// Address Range: [[005e1c20, 005e1c9a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_receiveSocketData_FUN_005e1c20(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_receiveSocketData_FUN_005e1c20(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

{
  int iVar2;
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  SOCKADDR local_2c;
  SNetworkAddr SStack_1c;
  int local_14;
  uint uVar1;
  
  bVar4 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar2 = recv(*socket_handle,buffer,length,0);
  }
  else {
    local_14 = 0x10;
    iVar2 = recvfrom(*socket_handle,buffer,length,0,&local_2c,&local_14);
    if (0 < iVar2) {
      pSVar3 = support_trisock_cpp_convertSockAddr_FUN_005e1960(&SStack_1c,&local_2c);
      source_addr->ip_address = *(uint *)pSVar3;
      uVar1 = *(uint *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
      source_addr[-(uint)bVar4].port = (short)uVar1;
      source_addr[-(uint)bVar4].other = (short)((uint)uVar1 >> 0x10);
      return iVar2;
    }
  }
  return iVar2;
}
