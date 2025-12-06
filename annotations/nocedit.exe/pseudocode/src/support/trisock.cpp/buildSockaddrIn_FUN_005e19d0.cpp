// Name: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
// Address Range: [[005e19d0, 005e1a26]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)

#include "nocturne.h"

SOCKADDR_IN * __cdecl
support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  BADSPACEBASE *in_ESP;
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_17e8 [509];
  uint auStackY_ff4 [1014];
  uint uStack_c;
  
  bVar3 = 0;
  crt_wsock32_c_htons(net_addr->port);
  support_trisock_cpp_getIPAddress_FUN_005e1930(net_addr);
  crt_memory_c_memset_FUN_005fde40(&stack0xfffffffc,0,8);
  puVar1 = (uint *)((int)dest_buffer + (uint)bVar3 * -8 + 4);
  dest_buffer->sin_family = (ushort)uStack_c;
  dest_buffer->sin_port = uStack_c._2_2_;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(uint *)(&stack0xfffffff8 + (uint)bVar3 * -8);
  *puVar2 = *(uint *)(&stack0xfffffffc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xfffffffc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return dest_buffer;
}
