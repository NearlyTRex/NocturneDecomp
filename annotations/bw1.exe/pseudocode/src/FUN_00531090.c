// Name: FUN_00531090
// Address: 00531090
// Address Range: [[00531090, 0053110f]]
// Convention: unknown
// Signature: undefined4 FUN_00531090(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00531090(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (_DAT_01d7f1bc == 0) {
    return param_1;
  }
  iVar4 = _DAT_01d7f1c0 + -1;
  if (iVar4 < 0) {
    return param_1;
  }
  iVar1 = iVar4 / 2;
  iVar2 = FUN_005c0f80(param_1,*(uint *)(iVar1 * 4 + 0x1d7f1c4));
  if (iVar2 < 0) {
    uVar3 = FUN_00531010(param_1,0,iVar1 + -1);
    return uVar3;
  }
  if (iVar2 < 1) {
    return *(uint *)(iVar1 * 4 + 0x1d7f994);
  }
  uVar3 = FUN_00531010(param_1,iVar1 + 1,iVar4);
  return uVar3;
}
