// Name: FUN_0040c990
// Address: 0040c990
// Address Range: [[0040c990, 0040caa8]]
// Convention: unknown
// Signature: undefined4 FUN_0040c990(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040c990(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  float afStackY_103c [1014];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  
  bVar2 = 0;
  FUN_00408b80(param_1,param_2);
  fStack_30 = fStack_48;
  (&stack0xffffffd4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffbc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_3c = _DAT_02038f50;
  *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8) =
       *(uint *)(&DAT_02038f54 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&DAT_02038f58 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fStack_54 = fStack_3c;
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (_DAT_005b5e89 <
      (fStack_28 - fStack_4c) * (fStack_28 - fStack_4c) +
      (fStack_2c - fStack_50) * (fStack_2c - fStack_50) +
      (fStack_30 - fStack_54) * (fStack_30 - fStack_54)) {
    return 0;
  }
  FUN_0053ec10(0x01ED78C8,param_1);
  fStack_24 = (float)FUN_0053bc80(0x01ED78C8,&stack0xffffffd0,0);
  uVar1 = *(uint *)(0x01ED78C8 + 0x14d134);
  fStack_10 = fStack_24;
  fStack_20 = (float)FUN_0053bc80(0x01ED78C8,param_1 + 0x20,0);
  fStack_10 = fStack_20;
  FUN_0053ebe0(0x01ED78C8);
  if (fStack_24 < fStack_20 + (float)_DAT_005b5e91) {
    uVar1 = *(uint *)(0x01ED78C8 + 0x14d134);
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x28))(param_1,&stack0xffffffd0,uVar1,param_3);
  return uVar1;
}
