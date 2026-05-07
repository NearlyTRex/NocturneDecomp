// Name: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
// MANUAL RECONSTRUCTION
// Address Range: [[005e1df0, 005e1e42] [0060c552, 0060c56b]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(_SOCKET *socket_handle,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(_SOCKET *socket_handle,SNetworkAddr *out_address)

{
  ushort uVar1;
  int iVar2;
  SOCKADDR_IN *pSVar3;
  byte bVar4;
  SOCKADDR local_1c;
  SNetworkAddr SStack_c;
  int local_4;
  
  local_4 = 0x10;
  iVar2 = getsockname(*socket_handle,&local_1c,&local_4);
  if (iVar2 != 0) {
    return 0;
  }
  pSVar3 = support_trisock_cpp_convertSockAddr_FUN_005e1960(&SStack_c,&local_1c);
  out_address->ip_address = *(uint *)pSVar3;
  uVar1 = ((ushort *)&pSVar3->sin_addr)[1];
  out_address->port = *(ushort *)&pSVar3->sin_addr;
  out_address->other = uVar1;
  return 1;
}
