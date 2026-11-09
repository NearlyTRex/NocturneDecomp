// Name: support_trisock.cpp_FUN_0059cb20
// Address: 0059cb20
// Address Range: [[0059cb20, 0059cbb2]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_FUN_0059cb20(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_FUN_0059cb20(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  sockaddr local_2c;
  byte auStack_1c [8];
  int local_14;
  
  bVar4 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar1 = recv(*(_SOCKET *)this_ptr,buffer,length,0);
  }
  else {
    local_14 = 0x10;
    iVar1 = recvfrom(*(SOCKET *)this_ptr,buffer,length,0,&local_2c,&local_14);
    if (0 < iVar1) {
      puVar2 = (uint *)support_trisock_cpp_convertSockAddr_FUN_0059c760(auStack_1c,&local_2c);
      *(uint *)source_addr = *puVar2;
      *(uint *)(source_addr + (uint)bVar4 * -8 + 4) = puVar2[(uint)bVar4 * -2 + 1];
    }
  }
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else if ((iVar1 == -1) && (iVar3 = WSAGetLastError(), iVar3 == 0x2733)) {
    return 0;
  }
  return iVar1;
}
