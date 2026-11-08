// Name: FUN_004cad20
// Address: 004cad20
// Address Range: [[004cad20, 004cafe2]]
// Convention: unknown
// Signature: void FUN_004cad20(int param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cad20(int param_1,float param_2,int param_3)

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
  fVar1 = param_2 / _DAT_00600d6c;
  *(float *)(param_1 + 0x1ffc8) = *(float *)(param_1 + 0x1ffc8) - fVar1;
  *(float *)(param_1 + 0x1ffcc) = *(float *)(param_1 + 0x1ffcc) - fVar1;
  if (*(float *)(param_1 + 0x1ffc8) < 0.0) {
    *(uint *)(param_1 + 0x1ffc8) = 0;
  }
  if (*(float *)(param_1 + 0x1ffcc) < 0.0) {
    *(uint *)(param_1 + 0x1ffcc) = 0;
  }
  if (param_3 != 0) {
    FUN_00559250(0x01E82168,param_1);
    if (*(int *)(param_1 + 0x25b0) != 0) {
      FUN_00559250(0x01E82168,*(int *)(param_1 + 0x25b0));
    }
    if (*(int *)(param_1 + 0x2628) != 0) {
      FUN_00559250(0x01E82168,*(int *)(param_1 + 0x2628));
    }
    FUN_005592b0(0x01E82168);
    local_18 = 0;
    local_1c = 0;
    local_20 = 0.0;
    iVar2 = *(int *)(param_1 + 0x25b0);
    if (iVar2 == 0) {
      local_20 = -0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
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
    FUN_004caff0(param_1,param_2,param_1 + 0x1ffc8,_DAT_01cc9148,_DAT_01cc910c,&stack0xffffffe0);
    iVar2 = *(int *)(param_1 + 0x2628);
    if (iVar2 == 0) {
      local_20 = 0.5;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
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
    FUN_004caff0(param_1,param_2,param_1 + 0x1ffcc,_DAT_01cc914c,_DAT_01cc9110,&stack0xffffffe0);
    FUN_00559220(0x01E82168);
    return;
  }
  FUN_00568100(param_1 + 0x158,0,0,*(uint *)(param_1 + 0x1ffc8),_DAT_01cc910c,&LAB_00567360);
  FUN_00568100(param_1 + 0x158,0,0,*(uint *)(param_1 + 0x1ffcc),_DAT_01cc9110,&LAB_00567360);
  return;
}
