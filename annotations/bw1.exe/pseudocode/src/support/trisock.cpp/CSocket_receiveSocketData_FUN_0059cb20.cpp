// Name: support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20
// Address: 0059cb20
// Address Range: [[0059cb20, 0059cbb2]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  sockaddr local_2c;
  byte auStack_1c [8];
  int local_14;
  
  bVar5 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar2 = recv(this_ptr->handle,buffer,length,0);
  }
  else {
    local_14 = 0x10;
    iVar2 = recvfrom(this_ptr->handle,buffer,length,0,&local_2c,&local_14);
    if (0 < iVar2) {
      puVar3 = (uint *)support_trisock_cpp_convertSockAddr_FUN_0059c760(auStack_1c,&local_2c);
      source_addr->ip_address = *puVar3;
      uVar1 = puVar3[(uint)bVar5 * -2 + 1];
      source_addr[-(uint)bVar5].port = (short)uVar1;
      source_addr[-(uint)bVar5].padding = (short)(uVar1 >> 0x10);
    }
  }
  if (iVar2 == 0) {
    iVar2 = -2;
  }
  else if ((iVar2 == -1) && (iVar4 = WSAGetLastError(), iVar4 == 0x2733)) {
    return 0;
  }
  return iVar2;
}
