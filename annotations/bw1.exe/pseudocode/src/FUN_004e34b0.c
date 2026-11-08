// Name: FUN_004e34b0
// Address: 004e34b0
// Address Range: [[004e34b0, 004e38e2]]
// Convention: unknown
// Signature: void FUN_004e34b0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e34b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  float afStackY_10c4 [993];
  float local_12c;
  uint local_128;
  uint local_124;
  float local_120;
  float local_11c;
  uint local_118;
  float local_114;
  float local_110;
  uint local_10c;
  float local_108;
  float local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  float local_94;
  float local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_34;
  uint local_30;
  uint local_2c;
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x180) == 0) {
    *(uint *)(param_1 + 0x180) = 1;
    if (*(int *)(param_1 + 0x1e8) != 0) {
      pcVar2 = ">7YEARS.RAW" + 1;
      pcVar3 = (char *)(param_1 + 0x16c);
      *(uint *)(param_1 + 0x17c) = 0xffff;
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      FUN_00555730(0x01E82168);
    }
    FUN_005c0357(&stack0xfffffed4,4,&DAT_005fb430);
    local_70 = *(float *)(param_1 + 0x158) * (float)_DAT_005e3fd4;
    local_6c = 0.0;
    local_68 = 0;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffff90);
    local_c4 = local_94;
    *(uint *)((int)&stack0xffffff40 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff70 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffff44 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    local_ac = *(float *)(param_1 + 0x20) + local_c4;
    local_a8 = *(float *)(param_1 + 0x24) + local_c0;
    local_a4 = *(float *)(param_1 + 0x28) + local_bc;
    local_34 = local_ac;
    (&stack0xffffffd0)[(uint)bVar4 * 0xfffffffe] =
         *(uint *)((int)&stack0xffffff58 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffed4 != &stack0xffffffcc) {
      local_12c = local_34;
      local_128 = local_30;
      local_124 = local_2c;
    }
    local_6c = local_6c + *(float *)(param_1 + 0x15c);
    FUN_0045f690(param_1 + 0x3c,&stack0xffffff90);
    local_58 = local_88;
    *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff7c + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    local_64 = *(float *)(param_1 + 0x20) + local_58;
    local_60 = *(float *)(param_1 + 0x24) + local_54;
    local_5c = *(float *)(param_1 + 0x28) + local_50;
    local_d0 = local_64;
    (&stack0xffffff34)[(uint)bVar4 * 0xfffffffe] = (&stack0xffffffa0)[(uint)bVar4 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff38 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffee0 != &stack0xffffff30) {
      local_120 = local_d0;
      local_11c = local_cc;
      local_118 = local_c8;
    }
    local_70 = -local_70;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffff90);
    local_dc = local_40;
    (&stack0xffffff28)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffc4 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffff2c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    local_b8 = *(float *)(param_1 + 0x20) + local_dc;
    local_b4 = *(float *)(param_1 + 0x24) + local_d8;
    local_b0 = *(float *)(param_1 + 0x28) + local_d4;
    local_a0 = local_b8;
    (&stack0xffffff64)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff4c + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffff68 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffeec != &stack0xffffff60) {
      local_114 = local_a0;
      local_110 = local_9c;
      local_10c = local_98;
    }
    local_6c = 0.0;
    FUN_0045f690(param_1 + 0x3c,&stack0xffffff90);
    local_4c = local_1c;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    local_7c = *(float *)(param_1 + 0x20) + local_4c;
    local_78 = *(float *)(param_1 + 0x24) + local_48;
    local_74 = *(float *)(param_1 + 0x28) + local_44;
    local_28 = local_7c;
    (&stack0xffffffdc)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff88 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffff8c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffef8 != &stack0xffffffd8) {
      local_108 = local_28;
      local_104 = local_24;
      local_100 = local_20;
    }
    FUN_00484f00(DAT_00612560,param_1 + 0x164);
    if (DAT_0061b4a8 == 0x40) {
      local_fc = 0xf80000;
      local_e8 = 0x80000;
      local_f8 = 0x80000;
      local_e4 = 0xf80000;
      local_f4 = 0x80000;
      local_e0 = 0xf80000;
      local_f0 = 0xf80000;
      local_ec = 0x80000;
    }
    else {
      local_fc = 0xfe0000;
      local_e8 = 0x20000;
      local_f8 = 0x20000;
      local_e4 = 0xfe0000;
      local_f4 = 0x20000;
      local_e0 = 0xfe0000;
      local_f0 = 0xfe0000;
      local_ec = 0x20000;
    }
    FUN_004e2320(param_1,&stack0xfffffed4,&stack0xffffff14,&stack0xffffff04,0);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"glass-1.wav@2.0");
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_0054f060(0x01E82168,param_1);
      *(uint *)(param_1 + 0xb3c) = 1;
      return;
    }
  }
  return;
}
