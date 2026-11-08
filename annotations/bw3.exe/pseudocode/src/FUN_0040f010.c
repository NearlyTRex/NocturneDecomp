// Name: FUN_0040f010
// Address: 0040f010
// Address Range: [[0040f010, 0040f1fe]]
// Convention: unknown
// Signature: void FUN_0040f010(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f010(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  float afStackY_102c [1010];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_18;
  
  bVar3 = 0;
  fStack_38 = *(float *)(param_1 + 0x20);
  fStack_34 = *(float *)(param_1 + 0x24);
  fStack_30 = *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x304) = *(float *)(param_1 + 0x308) * param_2 + *(float *)(param_1 + 0x304);
  FUN_0040f2f0(param_1);
  fStack_44 = *(float *)(param_1 + 0x20) - fStack_38;
  fStack_40 = *(float *)(param_1 + 0x24) - fStack_34;
  fStack_3c = *(float *)(param_1 + 0x28) - fStack_30;
  fStack_2c = fStack_44;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  fStack_48 = (fStack_28 * (float)_DAT_005b62ae) / param_2 + (float)_DAT_005b62b6;
  if (fStack_48 < (float)_DAT_005b62be) {
    fStack_48 = 10.0;
  }
  if ((float)_DAT_005b62c6 < fStack_48) {
    fStack_48 = 60.0;
  }
  *(float *)(param_1 + 0x310) =
       (fStack_48 - *(float *)(param_1 + 0x310)) * (float)_DAT_005b62ce +
       *(float *)(param_1 + 0x310);
  *(float *)(param_1 + 0x184) =
       param_2 * *(float *)(param_1 + 0x310) * *(float *)(param_1 + 0x30c) +
       *(float *)(param_1 + 0x184);
  iVar1 = FUN_004625a0(param_1 + 0x188);
  iStack_18 = *(int *)(iVar1 + 0x100);
  if (*(float *)(param_1 + 0x184) < (float)iStack_18) {
    if (*(float *)(param_1 + 0x184) < 0.0) {
      iStack_18 = iStack_18 + -1;
      *(float *)(param_1 + 0x184) = (float)iStack_18;
    }
  }
  else {
    *(uint *)(param_1 + 0x184) = 0;
  }
  if ((*(char *)(param_1 + 0x314) != '\0') &&
     (param_2 = *(float *)(param_1 + 900) - param_2, *(float *)(param_1 + 900) = param_2,
     param_2 <= 0.0)) {
    iVar1 = FUN_00556700(*(uint *)(param_1 + 0x380));
    if (iVar1 == 0) {
      iVar1 = FUN_00557170((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0x42480000);
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))();
        *(uint *)(param_1 + 0x380) = uVar2;
      }
    }
    uVar2 = FUN_0040ce40();
    *(uint *)(param_1 + 900) = uVar2;
    return;
  }
  return;
}
