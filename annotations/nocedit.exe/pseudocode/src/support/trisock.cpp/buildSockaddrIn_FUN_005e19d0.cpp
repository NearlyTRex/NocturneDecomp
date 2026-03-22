// Name: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
// Address Range: [[005e19d0, 005e1a26] [00604f58, 00604f7a]]
// Convention: __stack_esi
// Signature: SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

#include "nocturne.h"

SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_18;
  uint auStack_10;
  uint uStack_c;
  
  uVar1 = htons(net_addr->port);
  uVar2 = support_trisock_cpp_getIPAddress_FUN_005e1930(net_addr);
  memset(&auStack_10,0,8);
  dest_buffer->sin_family = 2;
  dest_buffer->sin_port = uVar1;
  dest_buffer->sin_addr = uVar2;
  *(uint *)dest_buffer->padding_0x08 = auStack_10;
  *(uint *)(dest_buffer->padding_0x08 + 4) = uStack_c;
  return dest_buffer;
}
