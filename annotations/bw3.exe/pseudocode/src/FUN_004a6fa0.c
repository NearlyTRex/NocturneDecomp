// Name: FUN_004a6fa0
// Address: 004a6fa0
// Address Range: [[004a6fa0, 004a7109]]
// Convention: unknown
// Signature: void FUN_004a6fa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6fa0(int param_1)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1030 [1001];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  FUN_00408890(param_1);
  FUN_00462580(param_1 + 0x158);
  *(uint *)(param_1 + 0x4f4) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar3 = (uint *)&stack0xffffffa0;
  puVar4 = &stack0xffffff88;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x20);
  fStack_18 = fStack_68 - fStack_74;
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x368) = *(uint *)(param_1 + 0x28);
  fStack_30 = fStack_6c - fStack_78;
  *(uint *)(param_1 + 0x36c) = *(uint *)(param_1 + 0x2c);
  fStack_28 = fStack_64 - fStack_70;
  fStack_2c = fStack_18;
  *(float *)(param_1 + 0x364) = *(float *)(param_1 + 0x364) + fStack_18;
  fStack_3c = fStack_6c - fStack_78;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_24 = fStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  fStack_48 = fStack_3c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((float *)(param_1 + 0x498) != &stack0xffffffb8) {
    *(float *)(param_1 + 0x498) = fStack_48;
    *(uint *)(param_1 + 0x49c) = uStack_44;
    *(uint *)(param_1 + 0x4a0) = uStack_40;
  }
  *(uint *)(param_1 + 0x4e8) = 0;
  fVar1 = *(float *)(param_1 + 0x498) * (float)_DAT_005c0cac;
  *(uint *)(param_1 + 0x4ec) = 0;
  if (*(float *)(param_1 + 0x49c) < fVar1) {
    *(float *)(param_1 + 0x49c) = fVar1;
  }
  *(uint *)(param_1 + 0x5e4) = 0;
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
