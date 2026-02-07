// Name: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
// Address Range: [[005e1df0, 005e1e42]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(SOCKET *socket_handle,SNetworkAddr *param_2)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_getSocketName_FUN_005e1df0(SOCKET *socket_handle,SNetworkAddr *param_2)

{
  uint uVar1;
  SNetworkAddr *pSVar2;
  int iVar3;
  SOCKADDR_IN *pSVar4;
  byte bVar5;
  SOCKADDR local_1c;
  int local_4;
  
  bVar5 = 0;
  local_4 = 0x10;
  iVar3 = getsockname(*socket_handle,&local_1c,&local_4);
  if (iVar3 != 0) {
    return 0;
  }
  pSVar4 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&stack0xfffffff4,&local_1c);
  pSVar2 = param_2 + -(uint)bVar5;
  param_2->ip_address = *(uint *)pSVar4;
  uVar1 = *(uint *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
  pSVar2->port = (short)uVar1;
  pSVar2->padding[0] = (char)((uint)uVar1 >> 0x10);
  pSVar2->padding[1] = (char)((uint)uVar1 >> 0x18);
  return 1;
}
