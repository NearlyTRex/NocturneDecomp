// Name: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
// Address Range: [[005491e0, 00549232]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

{
  uint uVar1;
  int iVar2;
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  SOCKADDR SStack_1c;
  SNetworkAddr SStack_c;
  int iStack_4;
  
  bVar4 = 0;
  iStack_4 = 0x10;
  iVar2 = getsockname(*socket_handle,&SStack_1c,&iStack_4);
  if (iVar2 != 0) {
    return 0;
  }
  pSVar3 = support_trisock_cpp_convertSockAddr_FUN_00548d50(&SStack_c,&SStack_1c);
  out_address->ip_address = *(uint *)pSVar3;
  uVar1 = *(uint *)((int)pSVar3 + (uint)bVar4 * -8 + 4);
  out_address[-(uint)bVar4].port = (short)uVar1;
  out_address[-(uint)bVar4].other = (short)((uint)uVar1 >> 0x10);
  return 1;
}
