// Name: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
// Address Range: [[005491e0, 00549232]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  _SOCKET _Stack_28;
  byte *puStack_24;
  uint **ppuStack_20;
  byte auStack_1c [4];
  byte auStack_18 [20];
  uint *puStack_4;
  
  bVar3 = 0;
  puStack_24 = auStack_1c;
  ppuStack_20 = &puStack_4;
  puStack_4 = (uint *)0x10;
  _Stack_28 = *socket_handle;
  iVar1 = Ordinal_6();
  if (iVar1 != 0) {
    return 0;
  }
  puVar2 = (uint *)support_trisock_cpp_convertSockAddr_FUN_00548d50(auStack_18,&_Stack_28);
  *puStack_4 = *puVar2;
  puStack_4[(uint)bVar3 * -2 + 1] = puVar2[(uint)bVar3 * -2 + 1];
  return 1;
}
