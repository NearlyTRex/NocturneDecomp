// Name: FUN_005830d0
// Address: 005830d0
// Address Range: [[005830d0, 005831a5]]
// Convention: unknown
// Signature: void FUN_005830d0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_005830d0(int param_1)

{
  byte bVar1;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_1c;
  float afStack_18 [3];
  
  bVar1 = 0;
  FUN_004688e0(param_1 + 0x158);
  FUN_00408850(param_1);
  fStack_2c = *(float *)(param_1 + 0x2ec) * *(float *)(param_1 + 0x55c);
  uStack_34 = 0;
  uStack_30 = 0;
  afStack_18[2] = fStack_2c;
  FUN_00408ac0(param_1,&stack0xffffffcc);
  fStack_40 = fStack_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  fStack_4c = *(float *)(param_1 + 0x20) - fStack_40;
  fStack_48 = *(float *)(param_1 + 0x24) - fStack_3c;
  fStack_44 = *(float *)(param_1 + 0x28) - fStack_38;
  fStack_1c = fStack_4c;
  *(uint *)((int)afStack_18 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8);
  afStack_18[(uint)bVar1 * 0xfffffffe + (uint)bVar1 * 0xfffffffe + 1] =
       (float)*(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((float *)(param_1 + 0x2e0) == &fStack_1c) {
    *(uint *)(param_1 + 0x488) = 0;
    return;
  }
  *(float *)(param_1 + 0x2e0) = fStack_1c;
  *(float *)(param_1 + 0x2e4) = afStack_18[0];
  *(float *)(param_1 + 0x2e8) = afStack_18[1];
  *(uint *)(param_1 + 0x488) = 0;
  return;
}
