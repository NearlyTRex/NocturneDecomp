// Name: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// Address: 005e1c20
// Address Range: [[005e1c20, 005e1c9a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_receiveSocketData_FUN_005e1c20(SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_receiveSocketData_FUN_005e1c20(SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)

{
  uint uVar1;
  SNetworkAddr *pSVar2;
  int iVar3;
  SOCKADDR_IN *pSVar4;
  byte bVar5;
  SOCKADDR local_2c;
  int local_14;
  
  bVar5 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar3 = recv(*socket_handle,buffer,length,0);
  }
  else {
    local_14 = 0x10;
    iVar3 = recvfrom(*socket_handle,buffer,length,0,&local_2c,&local_14);
    if (0 < iVar3) {
      pSVar4 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                         ((SOCKADDR_IN *)&stack0xffffffe4,&local_2c);
      pSVar2 = source_addr + -(uint)bVar5;
      source_addr->ip_address = *(uint *)pSVar4;
      uVar1 = *(uint *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      pSVar2->port = (short)uVar1;
      pSVar2->padding[0] = (char)((uint)uVar1 >> 0x10);
      pSVar2->padding[1] = (char)((uint)uVar1 >> 0x18);
      return iVar3;
    }
  }
  return iVar3;
}
