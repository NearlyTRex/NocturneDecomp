// Name: support_trisock.cpp_buildSockaddrIn_FUN_00578ef0
// Address: 00578ef0
// Address Range: [[00578ef0, 00578f46]]
// Convention: unknown
// Signature: void support_trisock_cpp_buildSockaddrIn_FUN_00578ef0(SNetworkAddr *param_1)

#include "nocturne.h"

void support_trisock_cpp_buildSockaddrIn_FUN_00578ef0(SNetworkAddr *param_1)

{
  ushort uVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStackY_17f4 [1524];
  uint local_18;
  uint auStack_10 [2];
  
  bVar3 = 0;
  uVar1 = htons(*(ushort *)(param_1 + 4));
  local_18 = CONCAT22(uVar1,2);
  support_trisock_cpp_getIPAddress_FUN_00578e20(param_1);
  memset(auStack_10,0,8);
  puVar2 = unaff_ESI + (uint)bVar3 * -2 + 1;
  *unaff_ESI = local_18;
  *puVar2 = auStack_10[(uint)bVar3 * -2 + -1];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_10[(uint)bVar3 * -2 + (uint)bVar3 * -2];
  (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (auStack_10 + (uint)bVar3 * -2 + (uint)bVar3 * -2)[(uint)bVar3 * -2 + 1];
  return;
}
