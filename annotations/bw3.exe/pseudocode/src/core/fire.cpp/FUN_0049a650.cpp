// Name: core_fire.cpp_FUN_0049a650
// Address: 0049a650
// Address Range: [[0049a650, 0049a9e7]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a650(CParticle *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049a650(CParticle *param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  CVector3f *velocity;
  float fVar1;
  float fVar2;
  int iVar3;
  CParticle *pCVar4;
  byte bVar5;
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
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78 [2];
  byte local_70 [8];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_18;
  uint local_14;
  
  bVar5 = 0;
  local_90[2] = *param_2 + param_2[3];
  local_90[3] = param_2[1] + param_2[4];
  local_80 = param_2[2] + param_2[5];
  local_ac = local_90[2] + param_2[6];
  local_a8 = local_90[3] + param_2[7];
  local_a4 = local_80 + param_2[8];
  local_a0 = local_ac * _DAT_005c05d0;
  local_9c = local_a8 * _DAT_005c05d0;
  local_98 = local_a4 * _DAT_005c05d0;
  if ((float *)local_70 != local_48 + 2) {
    local_70._0_4_ = local_a0;
    local_70._4_4_ = local_9c;
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
  local_58 = local_90[2];
  local_54 = local_90[3];
  local_50 = local_80;
  local_48[2] = local_a0;
  local_48[3] = local_9c;
  local_38 = local_98;
  local_14 = core_actor_cpp_FUN_0040ce40(0,0x40490fdb);
  *(uint *)(param_1 + 0x94) = 0;
  *(uint *)(param_1 + 0x8c) = local_14;
  local_14 = core_actor_cpp_FUN_0040ce40(0,0x40c90fdb);
  *(uint *)(param_1 + 0x90) = local_14;
  local_b8 = *param_2 - (float)local_70._0_4_;
  local_b4 = param_2[1] - (float)local_70._4_4_;
  local_b0 = param_2[2] - local_68;
  local_34 = *param_2 - (float)local_70._0_4_;
  local_30[(uint)bVar5 * -2] = *(float *)((int)&stack0xffffff4c + (uint)bVar5 * -8);
  local_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (param_1 + 0xb0 != (CParticle *)&local_34) {
    *(float *)(param_1 + 0xb0) = local_34;
    *(float *)(param_1 + 0xb4) = local_30[0];
    *(float *)(param_1 + 0xb8) = local_30[1];
  }
  local_7c = param_2[3] - (float)local_70._0_4_;
  local_78[0] = param_2[4] - (float)local_70._4_4_;
  local_78[1] = param_2[5] - local_68;
  local_94 = param_2[3] - (float)local_70._0_4_;
  local_90[(uint)bVar5 * -2] = local_78[(uint)bVar5 * -2];
  local_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (param_1 + 0xbc != (CParticle *)&local_94) {
    *(float *)(param_1 + 0xbc) = local_94;
    *(float *)(param_1 + 0xc0) = local_90[0];
    *(float *)(param_1 + 0xc4) = local_90[1];
  }
  local_30[2] = param_2[6] - (float)local_70._0_4_;
  local_30[3] = param_2[7] - (float)local_70._4_4_;
  local_20 = param_2[8] - local_68;
  local_4c = param_2[6] - (float)local_70._0_4_;
  local_48[(uint)bVar5 * -2] = local_30[(uint)bVar5 * -2 + 3];
  local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (param_1 + 200 != (CParticle *)&local_4c) {
    *(float *)(param_1 + 200) = local_4c;
    *(float *)(param_1 + 0xcc) = local_48[0];
    *(float *)(param_1 + 0xd0) = local_48[1];
  }
  pCVar4 = param_1 + 0x44;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar4 = *param_5;
    param_5 = param_5 + (uint)bVar5 * -2 + 1;
    pCVar4 = pCVar4 + (uint)bVar5 * -8 + 4;
  }
  *(uint *)(param_1 + 0x40) = param_6;
  local_14 = core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
  *(uint *)(param_1 + 0xc) = local_14;
  local_14 = core_actor_cpp_FUN_0040ce40(0,0x40400000);
  *(uint *)(param_1 + 0x10) = local_14;
  local_14 = core_actor_cpp_FUN_0040ce40(0xbf800000,0x3f800000);
  pCVar4 = param_1 + 0xc;
  *(uint *)(param_1 + 0x14) = local_14;
  local_18 = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                  *(float *)pCVar4 * *(float *)pCVar4 +
                  *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10));
  if (local_18 <= 0.0) {
    *(uint *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x14);
    *(float *)pCVar4 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar1 = 1.0 / local_18;
    *(float *)pCVar4 = *(float *)pCVar4 * fVar1;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * fVar1;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * fVar1;
  }
  velocity = (CVector3f *)(param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 0x10) * _DAT_005c05d4;
  fVar2 = *(float *)(param_1 + 0x14) * _DAT_005c05d4;
  *(float *)velocity = *(float *)velocity * _DAT_005c05d4;
  *(float *)(param_1 + 0x10) = fVar1;
  *(float *)(param_1 + 0x14) = fVar2;
  core_particle_cpp_CParticle_setup_FUN_00509e40(param_1,(CVector3f *)local_70,velocity);
  return;
}
