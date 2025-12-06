// Name: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
// Address Range: [[005e1bd0, 005e1c12]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_connectSocket_FUN_005e1bd0(SOCKET * socket_handle, SNetworkAddr * dest_addr)

#include "nocturne.h"

int __cdecl
support_trisock_cpp_connectSocket_FUN_005e1bd0(SOCKET *socket_handle,SNetworkAddr *dest_addr)

{
  BADSPACEBASE *in_ESP;
  byte bVar1;
  uint auStackY_1800 [1524];
  SOCKADDR *name;
  int iVar2;
  byte auStack_24 [20];
  uint auStack_10 [2];
  
  bVar1 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,(SOCKADDR_IN *)(auStack_24 + 0xc));
  name = (SOCKADDR *)auStack_24;
  iVar2 = 0x10;
  auStack_24._0_4_ = auStack_24._16_4_;
  *(uint *)(auStack_24 + (uint)bVar1 * -8 + 4) = auStack_10[(uint)bVar1 * -2];
  *(uint *)(auStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_10[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  *(uint *)
   ((int)(auStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) + ((uint)bVar1 * -2 + 1) * 4) =
       (auStack_10 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
  iVar2 = crt_wsock32_c_connect(dest_addr->ip_address,name,iVar2);
  return (uint)(iVar2 == 0);
}
