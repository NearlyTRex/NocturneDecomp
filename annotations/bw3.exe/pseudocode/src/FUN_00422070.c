// Name: FUN_00422070
// Address: 00422070
// Address Range: [[00422070, 004221bc]]
// Convention: unknown
// Signature: undefined4 FUN_00422070(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00422070(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  
  fVar7 = ((float10)param_3 - (float10)*(float *)(param_1 + 0x1be8c)) *
          ((float10)1 / (float10)_DAT_005dcbc8);
  fVar6 = (float10)(float)(((float10)param_2 - (float10)*(float *)(param_1 + 0x1be88)) *
                          ((float10)1 / (float10)_DAT_005dcbc8));
  FUN_005a3120();
  FUN_005a3120();
  local_10 = (int)ROUND(fVar6);
  iVar2 = (int)ROUND(fVar7);
  if (local_10 < 0) {
    iVar5 = 0;
    local_10 = 0;
  }
  else if (local_10 < 0xb) {
    iVar5 = local_10 + 1;
  }
  else {
    iVar5 = 0xb;
    local_10 = 0xb;
  }
  iVar1 = param_1 + local_10 * 0x30;
  param_1 = param_1 + iVar5 * 0x30;
  if (iVar2 < 0) {
    uVar3 = *(uint *)(param_1 + 0x135dc);
    uVar4 = *(uint *)(iVar1 + 0x135dc);
  }
  else {
    if (iVar2 < 0xb) {
      uVar3 = FUN_00424300(*(uint *)(iVar1 + 0x135dc + iVar2 * 4),
                           *(uint *)(param_1 + iVar2 * 4 + 0x135dc));
      uVar4 = FUN_00424300(*(uint *)(iVar1 + 0x135e0 + iVar2 * 4),
                           *(uint *)(param_1 + 0x135e0 + iVar2 * 4));
      uVar3 = FUN_00424300(uVar3,uVar4);
      return uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x13608);
    uVar4 = *(uint *)(iVar1 + 0x13608);
  }
  uVar3 = FUN_00424300(uVar4,uVar3);
  return uVar3;
}
