// Name: FUN_0045d6d0
// Address: 0045d6d0
// Address Range: [[0045d6d0, 0045db32]]
// Convention: unknown
// Signature: undefined4 FUN_0045d6d0(int param_1,int param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0045d6d0(int param_1,int param_2,uint param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10f4 [1003];
  float *pfVar6;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_100;
  float fStack_fc;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  float fStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  switch(param_3) {
  case 1:
    if (*(int *)(param_1 + 0x2620) != 0) {
      return 0;
    }
    FUN_00408de0(param_2,param_1 + 0x20);
    fStack_34 = fStack_c4;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_1c = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if (fStack_1c <= 0.0) {
      fStack_30 = 0.0;
      fStack_34 = 0.0;
      fStack_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_1c;
      fStack_34 = fStack_34 * fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
    }
    if (0.0 < fStack_2c) {
      return 0;
    }
    uStack_f4 = 0;
    uStack_f0 = 0x40400000;
    uStack_ec = 0x40000000;
    if (&stack0xffffff60 != &stack0xffffff0c) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      uStack_a0 = 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x2698) != 0) {
      return 0;
    }
    uStack_a8 = 0x40400000;
    uStack_a4 = 0x40000000;
    uStack_ac = 0;
    if (&stack0xffffff60 != &stack0xffffff54) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      uStack_a0 = 0;
    }
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x2698) != 0) {
      return 0;
    }
    if ((param_2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(param_2 + 0x2b0) + 0x8c))(param_2,param_1), iVar2 == 4)) {
      FUN_00408de0(param_2,param_1 + 0x20);
      fStack_40 = fStack_7c;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (1.0 < ABS(fStack_40)) {
        return 0;
      }
      FUN_005838f0(&stack0xffffffc0);
      uStack_100 = uStack_88;
      *(uint *)((int)&stack0xffffff04 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff7c + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff08 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if ((float)_DAT_005d0807 < ABS(fStack_fc)) {
        return 0;
      }
    }
    uStack_70 = 0;
    uStack_68 = 0x40000000;
    uStack_6c = 0x40400000;
    if (&stack0xffffff60 != &stack0xffffff90) {
      uStack_9c = 0x40400000;
      uStack_98 = 0x40000000;
      uStack_a0 = 0;
    }
    break;
  default:
    goto switchD_0045d6eb_default;
  }
  FUN_00408d70(param_1,&stack0xffffff60);
  fStack_b8 = fStack_4c;
  *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (**(code **)(*(int *)(param_2 + 0x2b0) + 0x24))(param_2);
  puVar3 = (uint *)&stack0xfffffec4;
  puVar4 = &stack0xfffffedc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_58 = fStack_124 + fStack_118;
  fStack_54 = fStack_120 + fStack_114;
  fStack_50 = fStack_11c + fStack_110;
  fStack_64 = fStack_124 + fStack_118;
  (&stack0xffffffa0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  pfVar6 = &stack0xffffff30;
  fStack_94 = fStack_64 * _DAT_005d080f;
  fStack_90 = fStack_60 * _DAT_005d080f;
  fStack_8c = fStack_5c * _DAT_005d080f;
  fStack_d0 = fStack_64 * _DAT_005d080f;
  *(float *)((int)&stack0xffffff34 + (uint)bVar5 * 0xfffffffe * 4) =
       (&stack0xffffff70)[(uint)bVar5 * 0xfffffffe];
  *(uint *)(&stack0xffffff38 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  FUN_00408d70(param_2,pfVar6);
  fStack_28 = fStack_10c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffef8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffefc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_dc = fStack_28 - fStack_b8;
  fStack_d8 = fStack_24 - fStack_b4;
  fStack_d4 = fStack_20 - fStack_b0;
  fStack_e8 = fStack_28 - fStack_b8;
  (&stack0xffffff1c)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff20 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((ABS(fStack_e4) <= (float)_DAT_005d0817) &&
     (fVar1 = SQRT(fStack_e8 * fStack_e8 + fStack_e0 * fStack_e0), fVar1 <= (float)_DAT_005d081f)) {
    if (*param_4 < fVar1) {
      return 0;
    }
    *param_4 = fVar1;
    return 1;
  }
switchD_0045d6eb_default:
  return 0;
}
