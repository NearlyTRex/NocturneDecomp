// Name: FUN_0050fe80
// Address: 0050fe80
// Address Range: [[0050fe80, 0050feff]]
// Convention: unknown
// Signature: undefined4 FUN_0050fe80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050fe80(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (_DAT_01d63254 == 0) {
    return param_1;
  }
  iVar4 = _DAT_01d63258 + -1;
  if (iVar4 < 0) {
    return param_1;
  }
  iVar1 = iVar4 / 2;
  iVar2 = FUN_005b8c30(param_1,*(uint *)(iVar1 * 4 + 0x1d6325c));
  if (iVar2 < 0) {
    uVar3 = FUN_0050fe00(param_1,0,iVar1 + -1);
    return uVar3;
  }
  if (iVar2 < 1) {
    return *(uint *)(iVar1 * 4 + 0x1d63a2c);
  }
  uVar3 = FUN_0050fe00(param_1,iVar1 + 1,iVar4);
  return uVar3;
}
