// Name: support_trisock.cpp_CSocket_connectSocket_FUN_0059c9d0
// Address: 0059c9d0
// Address Range: [[0059c9d0, 0059ca25]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_connectSocket_FUN_0059c9d0(CSocket *this_ptr,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_connectSocket_FUN_0059c9d0(CSocket *this_ptr,SNetworkAddr *dest_addr)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1804 [1524];
  sockaddr *name;
  int iVar4;
  sockaddr local_28;
  sockaddr local_18;
  
  bVar3 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_0059c7d0(dest_addr);
  name = &local_28;
  iVar4 = 0x10;
  local_28.sa_family = local_18.sa_family;
  local_28.sa_data[0] = local_18.sa_data[0];
  local_28.sa_data[1] = local_18.sa_data[1];
  puVar2 = (uint *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  puVar1 = (uint *)((int)&local_18 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  *(uint *)((int)&local_28 + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&local_18 + (uint)bVar3 * -8 + 4);
  *puVar2 = *puVar1;
  puVar2[(uint)bVar3 * -2 + 1] = puVar1[(uint)bVar3 * -2 + 1];
  iVar4 = connect(this_ptr->handle,name,iVar4);
  if (iVar4 != 0) {
    iVar4 = WSAGetLastError();
    if (iVar4 != 0x2733) {
      return 0;
    }
  }
  return 1;
}
