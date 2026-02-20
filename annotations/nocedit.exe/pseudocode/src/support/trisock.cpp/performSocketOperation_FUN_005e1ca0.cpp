// Name: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
// Address Range: [[005e1ca0, 005e1d1a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_performSocketOperation_FUN_005e1ca0(SOCKET *socket,char *buffer,int length,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_performSocketOperation_FUN_005e1ca0(SOCKET *socket,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1808 [1521];
  SOCKADDR_IN local_2c;
  SOCKADDR_IN local_1c;
  
  bVar4 = 0;
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = send(*socket,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,&local_2c);
  local_1c.sin_family = local_2c.sin_family;
  local_1c.sin_port = local_2c.sin_port;
  puVar3 = (uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  iVar1 = sendto(*socket,buffer,length,0,(SOCKADDR *)&local_1c,0x10);
  return iVar1;
}
