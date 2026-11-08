// Name: FUN_004410f0
// Address: 004410f0
// Address Range: [[004410f0, 00441132]]
// Convention: unknown
// Signature: void FUN_004410f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004410f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00440800(param_1);
  iVar1 = FUN_00440bd0(iVar1 + 4);
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  *(byte ***)(iVar1 + -4) = &PTR_FUN_005dd464;
  uVar2 = -1 << (*(byte *)(iVar1 + 0x20) & 0x1f);
  *(uint *)(iVar1 + 0x24) = uVar2;
  *(uint *)(iVar1 + 0x24) = ~uVar2;
  return;
}
