// Name: FUN_004af600
// Address: 004af600
// Address Range: [[004af600, 004af9e4]]
// Convention: unknown
// Signature: void FUN_004af600(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af600(int param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_10e8 [1015];
  float local_100;
  uint local_fc;
  uint local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
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
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  uint local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  local_f4 = *param_2 + param_2[3];
  local_f0 = param_2[1] + param_2[4];
  local_ec = param_2[2] + param_2[5];
  local_a0 = local_f4 + param_2[6];
  local_9c = local_f0 + param_2[7];
  local_98 = local_ec + param_2[8];
  local_88 = local_a0 * _DAT_005df294;
  local_84 = local_9c * _DAT_005df294;
  local_80 = local_98 * _DAT_005df294;
  if (&stack0xffffff3c != &stack0xffffff78) {
    local_c4 = local_88;
    local_c0 = local_84;
    local_bc = local_80;
  }
  *(uint *)(param_1 + 0x68) = *param_3;
  *(uint *)(param_1 + 0x6c) = param_3[1];
  *(uint *)(param_1 + 0x70) = param_3[2];
  *(uint *)(param_1 + 0x74) = *param_4;
  *(uint *)(param_1 + 0x78) = param_4[1];
  *(uint *)(param_1 + 0x7c) = param_4[2];
  local_dc = local_f4;
  local_d8 = local_f0;
  local_d4 = local_ec;
  local_7c = local_a0;
  local_78 = local_9c;
  local_74 = local_98;
  local_70 = local_88;
  local_6c = local_84;
  local_68 = local_80;
  local_18 = (float)FUN_0040cc00(0,0x40490fdb);
  *(uint *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x5c) = local_18;
  local_18 = (float)FUN_0040cc00(0,0x40c90fdb);
  *(float *)(param_1 + 0x60) = local_18;
  local_b8 = *param_2 - local_c4;
  local_b4 = param_2[1] - local_c0;
  local_b0 = param_2[2] - local_bc;
  local_64 = *param_2 - local_c4;
  (&stack0xffffffa0)[(uint)bVar3 * 0xfffffffe] = (&stack0xffffff4c)[(uint)bVar3 * 0xfffffffe];
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((float *)(param_1 + 0x80) != &stack0xffffff9c) {
    *(float *)(param_1 + 0x80) = local_64;
    *(float *)(param_1 + 0x84) = local_60;
    *(uint *)(param_1 + 0x88) = local_5c;
  }
  local_d0 = param_2[3] - local_c4;
  local_cc = param_2[4] - local_c0;
  local_c8 = param_2[5] - local_bc;
  local_4c = param_2[3] - local_c4;
  *(uint *)((int)local_48 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff34 + (uint)bVar3 * -8);
  local_48[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1] =
       *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((float *)(param_1 + 0x8c) != &local_4c) {
    *(float *)(param_1 + 0x8c) = local_4c;
    *(uint *)(param_1 + 0x90) = local_48[0];
    *(uint *)(param_1 + 0x94) = local_48[1];
  }
  local_58 = param_2[6] - local_c4;
  local_54 = param_2[7] - local_c0;
  local_50 = param_2[8] - local_bc;
  local_100 = param_2[6] - local_c4;
  *(uint *)((int)&stack0xffffff04 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff08 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((float *)(param_1 + 0x98) != &stack0xffffff00) {
    *(float *)(param_1 + 0x98) = local_100;
    *(uint *)(param_1 + 0x9c) = local_fc;
    *(uint *)(param_1 + 0xa0) = local_f8;
  }
  puVar2 = (uint *)(param_1 + 0x44);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  *(uint *)(param_1 + 0x40) = param_6;
  local_e8 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x80);
  local_e4 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x84);
  local_e0 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x88);
  local_94 = local_e8;
  (&stack0xffffff70)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff1c + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffff20 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  local_1c = SQRT(local_8c * local_8c + local_94 * local_94 + local_90 * local_90) *
             (float)_DAT_005df29c;
  local_30 = (float)FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
  local_18 = local_30;
  local_18 = (float)FUN_0040cc00(0,0x40c90fdb);
  fVar4 = (float10)fcos((float10)local_18);
  fVar5 = (float10)fcos((float10)local_30);
  fVar6 = (float10)fsin((float10)local_18);
  fVar7 = (float10)fsin((float10)local_30);
  local_28 = (float)fVar4;
  local_2c = (float)fVar6;
  local_24 = (float)fVar7;
  local_a8 = local_1c * local_24;
  local_20 = (float)fVar5;
  local_ac = local_1c * local_28 * local_20;
  local_a4 = local_1c * local_2c * local_20;
  FUN_00532160(param_1,&stack0xffffff3c,&stack0xffffff54);
  return;
}
