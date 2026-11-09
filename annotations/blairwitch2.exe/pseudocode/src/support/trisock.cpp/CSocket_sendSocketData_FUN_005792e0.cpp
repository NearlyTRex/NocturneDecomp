// Name: support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
// Address: 005792e0
// Address Range: [[005792e0, 0057935a]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)

#include "nocturne.h"

int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1808 [1521];
  sockaddr local_2c;
  sockaddr local_1c;
  
  bVar4 = 0;
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = send(*(_SOCKET *)this_ptr,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_00578ef0(dest_addr);
  local_1c.sa_family = local_2c.sa_family;
  local_1c.sa_data[0] = local_2c.sa_data[0];
  local_1c.sa_data[1] = local_2c.sa_data[1];
  puVar3 = (uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  puVar2 = (uint *)((int)&local_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_2c + (uint)bVar4 * -8 + 4);
  *puVar3 = *puVar2;
  puVar3[(uint)bVar4 * -2 + 1] = puVar2[(uint)bVar4 * -2 + 1];
  iVar1 = sendto(*(SOCKET *)this_ptr,buffer,length,0,&local_1c,0x10);
  return iVar1;
}
