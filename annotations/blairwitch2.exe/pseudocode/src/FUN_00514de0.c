// Name: FUN_00514de0
// Address: 00514de0
// Address Range: [[00514de0, 00514f3a]]
// Convention: unknown
// Signature: void FUN_00514de0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00514de0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1024 [999];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float afStack_2c [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  FUN_0044fd00(param_1 + 0x2b4);
  FUN_00408a80(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  pfVar2 = (float *)&stack0xffffff7c;
  pfVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  if (&stack0xffffffac != &stack0xffffff94) {
    fStack_54 = fStack_6c;
    fStack_50 = fStack_68;
    fStack_4c = fStack_64;
  }
  if (&stack0xffffffb8 != &stack0xffffffa0) {
    fStack_48 = fStack_60;
    fStack_44 = fStack_5c;
    fStack_40 = fStack_58;
  }
  *(float *)(param_1 + 0x500) =
       SQRT((fStack_44 - fStack_50) * (float)_DAT_005e1a12) * (float)_DAT_005e1a1a;
  fStack_3c = fStack_54 + fStack_48;
  fStack_38 = fStack_50 + fStack_44;
  fStack_34 = fStack_4c + fStack_40;
  afStack_2c[2] = fStack_54 + fStack_48;
  afStack_2c[(uint)bVar4 * 0xfffffffe + 3] = (&stack0xffffffc8)[(uint)bVar4 * 0xfffffffe];
  afStack_2c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
       (float)*(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_18 = afStack_2c[2] * _DAT_005e1a22;
  fStack_14 = afStack_2c[3] * _DAT_005e1a22;
  fStack_10 = fStack_1c * _DAT_005e1a22;
  fStack_30 = afStack_2c[2] * _DAT_005e1a22;
  *(float *)((int)afStack_2c + (uint)bVar4 * -8) = afStack_2c[(uint)bVar4 * 0xfffffffe + 6];
  afStack_2c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1] =
       afStack_2c[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
  if ((float *)(param_1 + 0x56c) == &fStack_30) {
    *(float *)(param_1 + 0x570) = fStack_50;
    return;
  }
  *(float *)(param_1 + 0x56c) = fStack_30;
  *(float *)(param_1 + 0x570) = afStack_2c[0];
  *(float *)(param_1 + 0x574) = afStack_2c[1];
  *(float *)(param_1 + 0x570) = fStack_50;
  return;
}
