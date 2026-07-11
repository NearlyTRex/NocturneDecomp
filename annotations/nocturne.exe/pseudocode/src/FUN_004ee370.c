// Name: FUN_004ee370
// Address: 004ee370
// Address Range: [[004ee370, 004ee3ef]]
// Convention: unknown
// Signature: undefined4 FUN_004ee370(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ee370(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (_DAT_01d16814 == 0) {
    return param_1;
  }
  iVar4 = _DAT_01d16818 + -1;
  if (iVar4 < 0) {
    return param_1;
  }
  iVar1 = iVar4 / 2;
  iVar2 = FUN_005649c0(param_1,*(uint *)(iVar1 * 4 + 0x1d1681c));
  if (iVar2 < 0) {
    uVar3 = FUN_004ee2f0(param_1,0,iVar1 + -1);
    return uVar3;
  }
  if (iVar2 < 1) {
    return *(uint *)(iVar1 * 4 + 0x1d16fec);
  }
  uVar3 = FUN_004ee2f0(param_1,iVar1 + 1,iVar4);
  return uVar3;
}
