// Name: FUN_0049d840
// Address: 0049d840
// Address Range: [[0049d840, 0049dad3]]
// Convention: unknown
// Signature: void FUN_0049d840(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d840(uint param_1,float *param_2,float *param_3,uint param_4,uint param_5,uint param_6,float param_7,uint param_8,uint param_9,uint param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float afStackY_1094 [1005];
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
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  bVar6 = 0;
  local_b4 = param_7;
  local_b0 = param_7 * _DAT_005d57ce;
  if (param_7 * _DAT_005d57ce < (float)_DAT_005d57d2) {
    local_b0 = 0.05;
  }
  local_88 = *param_2;
  local_84 = param_2[1];
  local_80 = param_2[2];
  local_7c = *param_3;
  local_78 = param_3[1];
  local_74 = param_3[2];
  while( true ) {
    fVar5 = local_80;
    fVar4 = local_84;
    fVar3 = local_88;
    local_b8 = local_b4;
    if (local_b0 < local_b4) {
      local_b8 = local_b0;
    }
    fVar1 = local_74 * local_b8;
    local_14 = local_b8 * (float)_DAT_005d57da * local_b8;
    local_28 = local_14 * 0.0;
    local_40 = local_7c * local_b8;
    fVar2 = local_b4 - local_b8;
    local_3c = local_78 * local_b8;
    local_20 = local_28;
    local_24 = local_14 * _DAT_005d57e2;
    local_58 = local_28;
    *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    local_38 = fVar1;
    local_b4 = fVar2;
    local_64 = local_40;
    *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    fVar1 = local_b4;
    local_4c = fVar3 + local_64;
    local_48 = fVar4 + local_60;
    local_44 = fVar5 + local_5c;
    local_94 = fVar3 + local_64;
    *(uint *)((int)&stack0xffffff70 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    local_70 = local_94 + local_58;
    local_6c = local_90 + local_54;
    local_68 = local_8c + local_50;
    local_a0 = local_94 + local_58;
    (&stack0xffffff64)[(uint)bVar6 * 0xfffffffe] = (&stack0xffffff94)[(uint)bVar6 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (fVar1 <= 0.0) break;
    FUN_0049d770(param_1,&stack0xffffff78,&stack0xffffff60,param_4,0,param_6,param_8,param_9,
                 param_10,0x3CA3D70A);
    if (&stack0xffffff78 != &stack0xffffff60) {
      local_88 = local_a0;
      local_84 = local_9c;
      local_80 = local_98;
    }
    local_34 = local_b8 * 0.0;
    local_2c = local_34;
    local_30 = local_b8 * _DAT_005d57e2;
    local_ac = local_34;
    *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffd0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    local_7c = local_7c + local_ac;
    local_78 = local_78 + local_a8;
    local_74 = local_74 + local_a4;
  }
  FUN_0049d770(param_1,&stack0xffffff78,&stack0xffffff60,param_4,param_5,param_6,param_8,param_9,
               param_10,0x3CA3D70A);
  return;
}
