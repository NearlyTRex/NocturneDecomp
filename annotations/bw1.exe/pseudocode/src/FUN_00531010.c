// Name: FUN_00531010
// Address: 00531010
// Address Range: [[00531010, 00531085]]
// Convention: unknown
// Signature: undefined4 FUN_00531010(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_00531010(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_2) {
    return param_1;
  }
  iVar1 = (param_3 + param_2) / 2;
  iVar2 = FUN_005c0f80(param_1,*(uint *)(iVar1 * 4 + 0x1d7f1c4));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(uint *)(iVar1 * 4 + 0x1d7f994);
    }
    uVar3 = FUN_00531010(param_1,iVar1 + 1,param_3);
    return uVar3;
  }
  uVar3 = FUN_00531010(param_1,param_2,iVar1 + -1);
  return uVar3;
}
