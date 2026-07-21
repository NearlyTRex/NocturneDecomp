// Name: support_trisock.cpp_getSocketName_FUN_005491e0
// Address: 005491e0
// Address Range: [[005491e0, 00549232]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(undefined4 *param_1)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint uStack_28;
  byte *puStack_24;
  uint **ppuStack_20;
  byte auStack_1c [4];
  byte auStack_18 [20];
  uint *puStack_4;
  
  bVar3 = 0;
  puStack_24 = auStack_1c;
  ppuStack_20 = &puStack_4;
  puStack_4 = (uint *)0x10;
  uStack_28 = *param_1;
  iVar1 = Ordinal_6();
  if (iVar1 != 0) {
    return 0;
  }
  puVar2 = (uint *)support_trisock_cpp_convertSockAddr_FUN_00548d50(auStack_18,&uStack_28);
  *puStack_4 = *puVar2;
  puStack_4[(uint)bVar3 * -2 + 1] = puVar2[(uint)bVar3 * -2 + 1];
  return 1;
}
