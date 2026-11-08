// Name: FUN_005a7020
// Address: 005a7020
// Address Range: [[005a7020, 005a70e9]]
// Convention: unknown
// Signature: undefined4 FUN_005a7020(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a7020(int param_1,float *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1024 [1005];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffac;
  puVar3 = &stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_30 = fStack_6c + fStack_60;
  fStack_2c = fStack_68 + fStack_5c;
  fStack_28 = fStack_64 + fStack_58;
  fStack_24 = fStack_6c + fStack_60;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_18 = fStack_24 * _DAT_005f8ed8;
  fStack_14 = fStack_20 * _DAT_005f8ed8;
  fStack_10 = fStack_1c * _DAT_005f8ed8;
  fStack_3c = fStack_24 * _DAT_005f8ed8;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (param_2 == &stack0xffffffc4) {
    return 1;
  }
  *param_2 = fStack_3c;
  param_2[1] = fStack_38;
  param_2[2] = fStack_34;
  return 1;
}
