// Name: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
// Address Range: [[005e1df0, 005e1e42]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(_SOCKET *socket_handle,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(_SOCKET *socket_handle,SNetworkAddr *out_address)

{
  int iVar2;
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  SOCKADDR local_1c;
  SNetworkAddr SStack_c;
  int local_4;
  uint uVar1;
  
  bVar4 = 0;
  local_4 = 0x10;
  iVar2 = getsockname(*socket_handle,&local_1c,&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  pSVar3 = support_trisock_cpp_convertSockAddr_FUN_005e1960(&SStack_c,&local_1c);
  out_address->ip_address = *(uint *)pSVar3;
  uVar1 = *(uint *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  out_address[-(uint)bVar4].port = (short)uVar1;
  out_address[-(uint)bVar4].other = (short)((uint)uVar1 >> 0x10);
  return 1;
}
