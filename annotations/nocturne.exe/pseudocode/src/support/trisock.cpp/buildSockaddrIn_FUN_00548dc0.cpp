// Name: support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
// Address: 00548dc0
// Address Range: [[00548dc0, 00548e16]]
// Convention: __stack_esi
// Signature: SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

#include "nocturne.h"

SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_17f8 [1524];
  uint uStack_1c;
  uint auStack_14 [3];
  
  bVar5 = 0;
  uVar1 = net_addr->port;
  uVar2 = Ordinal_9();
  support_trisock_cpp_getIPAddress_FUN_00548d20(net_addr);
  memset(auStack_14,0,8);
  puVar3 = (uint *)((int)dest_buffer + (uint)bVar5 * -8 + 4);
  dest_buffer->sin_family = uVar1;
  dest_buffer->sin_port = uVar2;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  *puVar3 = auStack_14[(uint)bVar5 * -2 + -1];
  *puVar4 = auStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  puVar4[(uint)bVar5 * -2 + 1] =
       (auStack_14 + (uint)bVar5 * -2 + (uint)bVar5 * -2)[(uint)bVar5 * -2 + 1];
  return dest_buffer;
}
