// Name: support_trisock.cpp_CSocket_receiveSocketData_FUN_00579240
// Address: 00579240
// Address Range: [[00579240, 005792d2]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

{
  uint uVar1;
  int iVar2;
  SOCKADDR_IN *pSVar3;
  int iVar4;
  byte bVar5;
  SOCKADDR local_2c;
  SNetworkAddr SStack_1c;
  int local_14;
  
  bVar5 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar2 = recv(this_ptr->handle,buffer,length,0);
  }
  else {
    local_14 = 0x10;
    iVar2 = recvfrom(this_ptr->handle,buffer,length,0,(sockaddr *)&local_2c,&local_14)
    ;
    if (0 < iVar2) {
      pSVar3 = support_trisock_cpp_convertSockAddr_FUN_00578e80(&SStack_1c,&local_2c);
      source_addr->ip_address = *(uint *)pSVar3;
      uVar1 = *(uint *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
      source_addr[-(uint)bVar5].port = (short)uVar1;
      source_addr[-(uint)bVar5].padding = (short)((uint)uVar1 >> 0x10);
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
