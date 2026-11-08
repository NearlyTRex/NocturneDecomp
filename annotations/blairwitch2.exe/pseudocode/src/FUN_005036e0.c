// Name: FUN_005036e0
// Address: 005036e0
// Address Range: [[005036e0, 00503796]]
// Convention: unknown
// Signature: void FUN_005036e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005036e0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint local_18;
  
  local_18 = *(float *)(param_2 + 0xc);
  if (local_18 == _DAT_005dfc94) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x50) + 4))
                      (param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
                       *(uint *)(param_2 + 8));
    local_18 = (float)iVar3;
  }
  if (*(float *)(param_2 + 0x10) <= 0.0) {
    FUN_00503980(param_1,*(uint *)(param_2 + 8),local_18);
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar3 = FUN_005035c0(param_1);
      *(uint *)(param_1 + 0x28) = *(uint *)(iVar3 + 0x24);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_2 + 8);
    *(float *)(param_1 + 0x1c) = local_18;
    uVar2 = *(uint *)(param_2 + 4);
    *(uint *)(param_1 + 0x14) = 0x3a83126f;
    *(uint *)(param_1 + 0xc) = uVar2;
    fVar1 = *(float *)(param_2 + 0x10);
    *(uint *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x10) = 1.0 / fVar1;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_2 + 0x14);
  }
  return;
}
