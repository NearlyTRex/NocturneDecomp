// Name: FUN_0049a650
// Address: 0049a650
// Address Range: [[0049a650, 0049a9e7]]
// Convention: unknown
// Signature: void FUN_0049a650(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a650(int param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10a0 [1015];
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
  uint local_90;
  uint local_8c;
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
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  uint local_14;
  
  bVar6 = 0;
  local_88 = *param_2 + param_2[3];
  local_84 = param_2[1] + param_2[4];
  local_80 = param_2[2] + param_2[5];
  local_ac = local_88 + param_2[6];
  local_a8 = local_84 + param_2[7];
  local_a4 = local_80 + param_2[8];
  local_a0 = local_ac * _DAT_005c05d0;
  local_9c = local_a8 * _DAT_005c05d0;
  local_98 = local_a4 * _DAT_005c05d0;
  if (&stack0xffffff90 != &stack0xffffffc0) {
    local_70 = local_a0;
    local_6c = local_9c;
    local_68 = local_98;
  }
  *(uint *)(param_1 + 0x98) = *param_3;
  *(uint *)(param_1 + 0x9c) = param_3[1];
  *(uint *)(param_1 + 0xa0) = param_3[2];
  *(uint *)(param_1 + 0xa4) = *param_4;
  *(uint *)(param_1 + 0xa8) = param_4[1];
  *(uint *)(param_1 + 0xac) = param_4[2];
  local_64 = local_ac;
  local_60 = local_a8;
  local_5c = local_a4;
  local_58 = local_88;
  local_54 = local_84;
  local_50 = local_80;
  local_40 = local_a0;
  local_3c = local_9c;
  local_38 = local_98;
  local_14 = FUN_0040ce40(0,0x40490fdb);
  *(uint *)(param_1 + 0x94) = 0;
  *(uint *)(param_1 + 0x8c) = local_14;
  local_14 = FUN_0040ce40(0,0x40c90fdb);
  *(uint *)(param_1 + 0x90) = local_14;
  local_b8 = *param_2 - local_70;
  local_b4 = param_2[1] - local_6c;
  local_b0 = param_2[2] - local_68;
  local_34 = *param_2 - local_70;
  (&stack0xffffffd0)[(uint)bVar6 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffff4c + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((float *)(param_1 + 0xb0) != &stack0xffffffcc) {
    *(float *)(param_1 + 0xb0) = local_34;
    *(float *)(param_1 + 0xb4) = local_30;
    *(uint *)(param_1 + 0xb8) = local_2c;
  }
  local_7c = param_2[3] - local_70;
  local_78 = param_2[4] - local_6c;
  local_74 = param_2[5] - local_68;
  local_94 = param_2[3] - local_70;
  *(uint *)((int)&stack0xffffff70 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff88 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((float *)(param_1 + 0xbc) != &stack0xffffff6c) {
    *(float *)(param_1 + 0xbc) = local_94;
    *(uint *)(param_1 + 0xc0) = local_90;
    *(uint *)(param_1 + 0xc4) = local_8c;
  }
  local_28 = param_2[6] - local_70;
  local_24 = param_2[7] - local_6c;
  local_20 = param_2[8] - local_68;
  local_4c = param_2[6] - local_70;
  (&stack0xffffffb8)[(uint)bVar6 * 0xfffffffe] =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((float *)(param_1 + 200) != &stack0xffffffb4) {
    *(float *)(param_1 + 200) = local_4c;
    *(uint *)(param_1 + 0xcc) = local_48;
    *(uint *)(param_1 + 0xd0) = local_44;
  }
  puVar5 = (uint *)(param_1 + 0x44);
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_5;
    param_5 = param_5 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(uint *)(param_1 + 0x40) = param_6;
  local_14 = FUN_0040ce40(0xbf800000,0x3f800000);
  *(uint *)(param_1 + 0xc) = local_14;
  local_14 = FUN_0040ce40(0,0x40400000);
  *(uint *)(param_1 + 0x10) = local_14;
  local_14 = FUN_0040ce40(0xbf800000,0x3f800000);
  pfVar1 = (float *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x14) = local_14;
  local_18 = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                  *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10));
  if (local_18 <= 0.0) {
    *(uint *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x14);
    *pfVar1 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar2 = 1.0 / local_18;
    *pfVar1 = *pfVar1 * fVar2;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar2;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * fVar2;
  }
  pfVar1 = (float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x10) * _DAT_005c05d4;
  fVar3 = *(float *)(param_1 + 0x14) * _DAT_005c05d4;
  *pfVar1 = *pfVar1 * _DAT_005c05d4;
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)(param_1 + 0x14) = fVar3;
  FUN_00509e40(param_1,&stack0xffffff90,pfVar1);
  return;
}
