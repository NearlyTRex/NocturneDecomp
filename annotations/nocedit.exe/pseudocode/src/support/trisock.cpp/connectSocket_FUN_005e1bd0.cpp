// Name: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
// Address Range: [[005e1bd0, 005e1c12]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_connectSocket_FUN_005e1bd0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_connectSocket_FUN_005e1bd0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1804 [1524];
  SOCKADDR_IN *name;
  int iVar4;
  SOCKADDR_IN local_28;
  SOCKADDR_IN local_18;
  
  bVar3 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,&local_18);
  name = &local_28;
  iVar4 = 0x10;
  local_28.sin_family = local_18.sin_family;
  local_28.sin_port = local_18.sin_port;
  puVar2 = (uint *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&local_18 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_28 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  iVar4 = connect(*socket_handle,(SOCKADDR *)name,iVar4);
  return (uint)(iVar4 == 0);
}
