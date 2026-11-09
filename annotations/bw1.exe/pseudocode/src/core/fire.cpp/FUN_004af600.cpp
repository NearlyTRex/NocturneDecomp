// Name: core_fire.cpp_FUN_004af600
// Address: 004af600
// Address Range: [[004af600, 004af9e4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004af600(CParticle *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004af600(CParticle *param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  int iVar1;
  CParticle *pCVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_10e8 [1015];
  float local_100;
  float local_fc [4];
  float local_ec;
  float local_e8;
  float local_e4 [4];
  float local_d4;
  float local_d0;
  float local_cc [2];
  byte local_c4 [8];
  float local_bc;
  float local_b8;
  float local_b4 [2];
  byte local_ac [8];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  local_fc[2] = *param_2 + param_2[3];
  local_fc[3] = param_2[1] + param_2[4];
  local_ec = param_2[2] + param_2[5];
  local_a0 = local_fc[2] + param_2[6];
  local_9c = local_fc[3] + param_2[7];
  local_98 = local_ec + param_2[8];
  local_90[2] = local_a0 * _DAT_005df294;
  local_90[3] = local_9c * _DAT_005df294;
  local_80 = local_98 * _DAT_005df294;
  if ((float *)local_c4 != local_90 + 2) {
    local_c4._0_4_ = local_90[2];
    local_c4._4_4_ = local_90[3];
    local_bc = local_80;
  }
  *(uint *)(param_1 + 0x68) = *param_3;
  *(uint *)(param_1 + 0x6c) = param_3[1];
  *(uint *)(param_1 + 0x70) = param_3[2];
  *(uint *)(param_1 + 0x74) = *param_4;
  *(uint *)(param_1 + 0x78) = param_4[1];
  *(uint *)(param_1 + 0x7c) = param_4[2];
  local_e4[2] = local_fc[2];
  local_e4[3] = local_fc[3];
  local_d4 = local_ec;
  local_7c = local_a0;
  local_78 = local_9c;
  local_74 = local_98;
  local_70 = local_90[2];
  local_6c = local_90[3];
  local_68 = local_80;
  local_18 = (float)core_actor_cpp_FUN_0040cc00(0,0x40490fdb);
  *(uint *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x5c) = local_18;
  local_18 = (float)core_actor_cpp_FUN_0040cc00(0,0x40c90fdb);
  *(float *)(param_1 + 0x60) = local_18;
  local_b8 = *param_2 - (float)local_c4._0_4_;
  local_b4[0] = param_2[1] - (float)local_c4._4_4_;
  local_b4[1] = param_2[2] - local_bc;
  local_64 = *param_2 - (float)local_c4._0_4_;
  local_60[(uint)bVar3 * -2] = local_b4[(uint)bVar3 * -2];
  local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_b4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (param_1 + 0x80 != (CParticle *)&local_64) {
    *(float *)(param_1 + 0x80) = local_64;
    *(float *)(param_1 + 0x84) = local_60[0];
    *(float *)(param_1 + 0x88) = local_60[1];
  }
  local_d0 = param_2[3] - (float)local_c4._0_4_;
  local_cc[0] = param_2[4] - (float)local_c4._4_4_;
  local_cc[1] = param_2[5] - local_bc;
  local_4c = param_2[3] - (float)local_c4._0_4_;
  local_48[(uint)bVar3 * -2] = local_cc[(uint)bVar3 * -2];
  local_48[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (param_1 + 0x8c != (CParticle *)&local_4c) {
    *(float *)(param_1 + 0x8c) = local_4c;
    *(float *)(param_1 + 0x90) = local_48[0];
    *(float *)(param_1 + 0x94) = local_48[1];
  }
  local_60[2] = param_2[6] - (float)local_c4._0_4_;
  local_60[3] = param_2[7] - (float)local_c4._4_4_;
  local_50 = param_2[8] - local_bc;
  local_100 = param_2[6] - (float)local_c4._0_4_;
  local_fc[(uint)bVar3 * -2] = local_60[(uint)bVar3 * -2 + 3];
  local_fc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (param_1 + 0x98 != (CParticle *)&local_100) {
    *(float *)(param_1 + 0x98) = local_100;
    *(float *)(param_1 + 0x9c) = local_fc[0];
    *(float *)(param_1 + 0xa0) = local_fc[1];
  }
  pCVar2 = param_1 + 0x44;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar2 = *param_5;
    param_5 = param_5 + (uint)bVar3 * -2 + 1;
    pCVar2 = pCVar2 + (uint)bVar3 * -8 + 4;
  }
  *(uint *)(param_1 + 0x40) = param_6;
  local_e8 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x80);
  local_e4[0] = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x84);
  local_e4[1] = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x88);
  local_94 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x80);
  local_90[(uint)bVar3 * -2] = local_e4[(uint)bVar3 * -2];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_e4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_1c = SQRT(local_90[1] * local_90[1] + local_94 * local_94 + local_90[0] * local_90[0]) *
             (float)_DAT_005df29c;
  local_30 = (float)core_actor_cpp_FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
  local_18 = local_30;
  local_18 = (float)core_actor_cpp_FUN_0040cc00(0,0x40c90fdb);
  fVar4 = (float10)fcos((float10)local_18);
  fVar5 = (float10)fcos((float10)local_30);
  fVar6 = (float10)fsin((float10)local_18);
  fVar7 = (float10)fsin((float10)local_30);
  local_28 = (float)fVar4;
  local_2c = (float)fVar6;
  local_24 = (float)fVar7;
  local_ac._4_4_ = local_1c * local_24;
  local_20 = (float)fVar5;
  local_ac._0_4_ = local_1c * local_28 * local_20;
  local_a4 = local_1c * local_2c * local_20;
  core_particle_cpp_CParticle_setup_FUN_00532160
            (param_1,(CVector3f *)local_c4,(CVector3f *)local_ac);
  return;
}
