// Name: FUN_005a6cf0
// Address: 005a6cf0
// Address Range: [[005a6cf0, 005a6ec5]]
// Convention: unknown
// Signature: void FUN_005a6cf0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6cf0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1028 [1014];
  char *pcVar7;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int local_1c;
  int local_18;
  
  bVar6 = 0;
  if (*(float *)(param_1 + 0x840) <= 0.0) {
    *(uint *)(param_1 + 0x840) = 0x3f800000;
    *(uint *)(param_1 + 0x83c) = 0;
    *(uint *)(param_1 + 0x82c) = 0;
    *(float *)(param_1 + 0x838) = *(float *)(param_1 + 0x828);
    if (*(float *)(param_1 + 0x828) < (float)_DAT_005f074d) {
      pcVar7 = "$@crosssmall.wav" + 2;
    }
    else {
      pcVar7 = "crossfull.wav";
    }
    FUN_0055ae50(0x0264B290,param_1,pcVar7,param_1 + 0x20);
    local_1c = 0;
    for (local_18 = 0; local_18 < *(int *)(0x01E661B8 + 0x14d164); local_18 = local_18 + 1) {
      iVar3 = FUN_0040c8f0(*(uint *)(0x01E661B8 + local_1c + 0x14d168),_DAT_02668498);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x11348) != 0)) {
        iVar4 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
        if ((iVar4 == 0) &&
           (fVar1 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20),
           fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28),
           SQRT(fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(param_1 + 0x838) * (float)_DAT_005f0755)
           ) {
          fStack_34 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          fStack_30 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          fStack_2c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          fStack_40 = fStack_34;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8);
          *(uint *)(&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x16c))
                    (iVar3,&stack0xffffffc0,*(float *)(param_1 + 0x838) * (float)_DAT_005f075d);
          uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))(param_1,DAT_007bdc94);
          uVar5 = FUN_0040c8f0(uVar5);
          *(uint *)(iVar3 + 0x10a78) = uVar5;
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return;
}
