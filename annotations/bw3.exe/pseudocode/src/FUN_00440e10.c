// Name: FUN_00440e10
// Address: 00440e10
// Address Range: [[00440e10, 00440ee8]]
// Convention: unknown
// Signature: uint FUN_00440e10(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_00440e10(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_14;
  
  iVar6 = 0;
  uVar7 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  local_14 = 0;
  uVar5 = 0;
  uVar4 = 1 << ((char)*(uint *)(param_1 + 8) - 1U & 0x1f);
  while (uVar2 = uVar4, uVar2 != 0) {
    uVar5 = (int)uVar2 >> 1;
    uVar4 = uVar5;
    if ((iVar1 - 1U & uVar2) != 0) {
      uVar3 = FUN_004400f0(param_2,1,param_3);
      if ((int)uVar3 < 0) {
        FUN_00440210(param_2,iVar6,uVar7);
        return uVar3;
      }
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 * 2 | uVar3;
      if (uVar3 == 0) break;
      local_14 = local_14 | uVar2;
    }
  }
  if (uVar5 == 0) {
    return local_14;
  }
  do {
    uVar4 = FUN_004400f0(param_2,1,param_3);
    if ((int)uVar4 < 0) {
      FUN_00440210(param_2,iVar6,uVar7);
      return 0xffffffff;
    }
    iVar6 = iVar6 + 1;
    uVar7 = uVar7 * 2 | uVar4;
    if (uVar4 != 0) {
      local_14 = local_14 | uVar5;
    }
    uVar5 = (int)uVar5 >> 1;
  } while (uVar5 != 0);
  return local_14;
}
