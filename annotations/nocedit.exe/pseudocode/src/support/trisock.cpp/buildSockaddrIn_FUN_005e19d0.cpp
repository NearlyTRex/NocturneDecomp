// Name: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
// Address Range: [[005e19d0, 005e1a26]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * __cdecl support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

#include "nocturne.h"

SOCKADDR_IN * __cdecl
support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_17f4 [1524];
  uint local_18;
  uint auStack_10 [2];
  
  bVar4 = 0;
  uVar1 = crt_wsock32_c_htons(net_addr->port);
  support_trisock_cpp_getIPAddress_FUN_005e1930(net_addr);
  memset(auStack_10,0,8);
  puVar2 = (uint *)((int)dest_buffer + (uint)bVar4 * -8 + 4);
  dest_buffer->sin_family = 2;
  dest_buffer->sin_port = uVar1;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  *puVar2 = auStack_10[(uint)bVar4 * -2 + -1];
  *puVar3 = auStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  puVar3[(uint)bVar4 * -2 + 1] =
       (auStack_10 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1];
  return dest_buffer;
}
