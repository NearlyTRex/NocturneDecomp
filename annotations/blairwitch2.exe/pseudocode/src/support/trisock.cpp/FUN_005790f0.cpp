// Name: support_trisock.cpp_FUN_005790f0
// Address: 005790f0
// Address Range: [[005790f0, 00579145]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_005790f0(SOCKET *param_1,undefined4 param_2)

#include "nocturne.h"

uint support_trisock_cpp_FUN_005790f0(SOCKET *param_1,uint param_2)

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
  support_trisock_cpp_buildSockaddrIn_FUN_00578ef0(param_2);
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
  iVar4 = connect(*param_1,name,iVar4);
  if (iVar4 != 0) {
    iVar4 = WSAGetLastError();
    if (iVar4 != 0x2733) {
      return 0;
    }
  }
  return 1;
}
