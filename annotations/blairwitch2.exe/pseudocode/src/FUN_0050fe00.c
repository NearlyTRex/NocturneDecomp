// Name: FUN_0050fe00
// Address: 0050fe00
// Address Range: [[0050fe00, 0050fe75]]
// Convention: unknown
// Signature: undefined4 FUN_0050fe00(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_0050fe00(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_2) {
    return param_1;
  }
  iVar1 = (param_3 + param_2) / 2;
  iVar2 = FUN_005b8c30(param_1,*(uint *)(iVar1 * 4 + 0x1d6325c));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(uint *)(iVar1 * 4 + 0x1d63a2c);
    }
    uVar3 = FUN_0050fe00(param_1,iVar1 + 1,param_3);
    return uVar3;
  }
  uVar3 = FUN_0050fe00(param_1,param_2,iVar1 + -1);
  return uVar3;
}
