// Name: FUN_004b1e00
// Address: 004b1e00
// Address Range: [[004b1e00, 004b20c2]]
// Convention: unknown
// Signature: void FUN_004b1e00(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1e00(int param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1038 [988];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
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
  uint uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  float local_20;
  uint local_1c;
  uint local_18;
  
  bVar5 = 0;
  fVar1 = param_2 / _DAT_005f734c;
  *(float *)(param_1 + 0x2565c) = *(float *)(param_1 + 0x2565c) - fVar1;
  *(float *)(param_1 + 0x25660) = *(float *)(param_1 + 0x25660) - fVar1;
  if (*(float *)(param_1 + 0x2565c) < 0.0) {
    *(uint *)(param_1 + 0x2565c) = 0;
  }
  if (*(float *)(param_1 + 0x25660) < 0.0) {
    *(uint *)(param_1 + 0x25660) = 0;
  }
  if (param_3 != 0) {
    FUN_00537e30(0x01E661B8,param_1);
    if (*(int *)(param_1 + 0x2620) != 0) {
      FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x2620));
    }
    if (*(int *)(param_1 + 0x2698) != 0) {
      FUN_00537e30(0x01E661B8,*(int *)(param_1 + 0x2698));
    }
    FUN_00537e90(0x01E661B8);
    local_18 = 0;
    local_1c = 0;
    local_20 = 0.0;
    iVar2 = *(int *)(param_1 + 0x2620);
    if (iVar2 == 0) {
      local_20 = -0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
      puVar3 = (uint *)&stack0xffffff50;
      puVar4 = &stack0xffffff98;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_50 = fStack_5c - fStack_68;
      fStack_4c = fStack_58 - fStack_64;
      fStack_48 = fStack_54 - fStack_60;
      fStack_2c = fStack_5c - fStack_68;
      *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_20 = -fStack_24;
    }
    FUN_004b20d0(param_1,param_2,param_1 + 0x2565c,_DAT_01cb06b8,_DAT_01cb067c,&stack0xffffffe0);
    iVar2 = *(int *)(param_1 + 0x2698);
    if (iVar2 == 0) {
      local_20 = 0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x24))(iVar2);
      puVar3 = (uint *)&stack0xffffff80;
      puVar4 = &stack0xffffff68;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_38 = fStack_8c - fStack_98;
      fStack_34 = fStack_88 - fStack_94;
      fStack_30 = fStack_84 - fStack_90;
      fStack_44 = fStack_8c - fStack_98;
      *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      local_20 = (float)uStack_3c;
    }
    FUN_004b20d0(param_1,param_2,param_1 + 0x25660,_DAT_01cb06bc,_DAT_01cb0680,&stack0xffffffe0);
    FUN_00537e00(0x01E661B8);
    return;
  }
  FUN_00545a60(param_1 + 0x2b4,0,0,*(uint *)(param_1 + 0x2565c),_DAT_01cb067c,&LAB_00544cc0);
  FUN_00545a60(param_1 + 0x2b4,0,0,*(uint *)(param_1 + 0x25660),_DAT_01cb0680,&LAB_00544cc0);
  return;
}
