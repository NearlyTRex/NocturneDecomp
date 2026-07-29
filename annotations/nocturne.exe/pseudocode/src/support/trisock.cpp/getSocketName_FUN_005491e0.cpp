// Name: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
// Address Range: [[005491e0, 00549232]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

{
  int iVar1;
  SOCKADDR_IN *pSVar2;
  byte bVar3;
  byte auStack_28 [12];
  byte auStack_1c [4];
  SNetworkAddr aSStack_18 [2];
  uint *puStack_4;
  
  bVar3 = 0;
  auStack_28._4_4_ = auStack_1c;
  auStack_28._8_4_ = &puStack_4;
  puStack_4 = (uint *)0x10;
  auStack_28._0_4_ = *socket_handle;
  iVar1 = Ordinal_6();
  if (iVar1 != 0) {
    return 0;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_00548d50(aSStack_18,(SOCKADDR *)auStack_28);
  *puStack_4 = *(uint *)pSVar2;
  puStack_4[(uint)bVar3 * -2 + 1] = *(uint *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}
