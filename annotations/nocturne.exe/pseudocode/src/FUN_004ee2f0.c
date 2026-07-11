// Name: FUN_004ee2f0
// Address: 004ee2f0
// Address Range: [[004ee2f0, 004ee365]]
// Convention: unknown
// Signature: undefined4 FUN_004ee2f0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_004ee2f0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 < param_2) {
    return param_1;
  }
  iVar1 = (param_3 + param_2) / 2;
  iVar2 = FUN_005649c0(param_1,*(uint *)(iVar1 * 4 + 0x1d1681c));
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      return *(uint *)(iVar1 * 4 + 0x1d16fec);
    }
    uVar3 = FUN_004ee2f0(param_1,iVar1 + 1,param_3);
    return uVar3;
  }
  uVar3 = FUN_004ee2f0(param_1,param_2,iVar1 + -1);
  return uVar3;
}
