// Name: support_trisock.cpp_connectSocket_FUN_00548fc0
// Address: 00548fc0
// Address Range: [[00548fc0, 00549002]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_connectSocket_FUN_00548fc0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_connectSocket_FUN_00548fc0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1804 [1524];
  SOCKADDR_IN *pSVar5;
  uint uVar6;
  SOCKADDR_IN local_28;
  SOCKADDR_IN local_18;
  
  bVar4 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(dest_addr,&local_18);
  pSVar5 = &local_28;
  uVar6 = 0x10;
  local_28.sin_family = local_18.sin_family;
  local_28.sin_port = local_18.sin_port;
  puVar3 = (uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  iVar1 = Ordinal_4(*socket_handle,pSVar5,uVar6);
  return (uint)(iVar1 == 0);
}
