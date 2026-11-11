// Name: core_fire.cpp_FUN_0049a650
// Address: 0049a650
// Address Range: [[0049a650, 0049a9e7]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a650(CParticle *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049a650(CParticle *param_1,float *param_2,float *param_3,float *param_4,float *param_5,float param_6)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10a0 [1015];
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  CParticle_vtable *local_94;
  float local_90 [4];
  float local_80;
  CParticle_vtable *local_7c;
  float local_78 [2];
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48 [2];
  CVector3f local_40;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  local_90[2] = *param_2 + param_2[3];
  local_90[3] = param_2[1] + param_2[4];
  local_80 = param_2[2] + param_2[5];
  local_ac = local_90[2] + param_2[6];
  local_a8 = local_90[3] + param_2[7];
  local_a4 = local_80 + param_2[8];
  local_a0 = local_ac * _DAT_005c05d0;
  local_9c = local_a8 * _DAT_005c05d0;
  local_98 = local_a4 * _DAT_005c05d0;
  if (&local_70 != (CVector3f *)(local_48 + 2)) {
    local_70.x = local_a0;
    local_70.y = local_9c;
    local_70.z = local_98;
  }
  param_1[2].acceleration.x = *param_3;
  param_1[2].acceleration.y = param_3[1];
  param_1[2].acceleration.z = param_3[2];
  param_1[2].lifetime_remaining = *param_4;
  param_1[2].is_in_solid = (int)param_4[1];
  param_1[2].previous_position.x = param_4[2];
  local_64 = local_ac;
  local_60 = local_a8;
  local_5c = local_a4;
  local_58 = local_90[2];
  local_54 = local_90[3];
  local_50 = local_80;
  local_40.x = local_a0;
  local_40.y = local_9c;
  local_40.z = local_98;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,3.1415927);
  param_1[2].velocity.z = 0.0;
  param_1[2].velocity.x = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
  pfVar5 = &param_1[2].previous_position.y;
  param_1[2].velocity.y = local_14;
  local_b4 = param_2[1] - local_70.y;
  local_b0 = param_2[2] - local_70.z;
  local_34 = *param_2 - local_70.x;
  (&local_30)[(uint)bVar6 * -2] = *(float *)((int)&stack0xffffff4c + (uint)bVar6 * -8);
  (&local_30)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -8];
  if (pfVar5 != &local_34) {
    *pfVar5 = local_34;
    param_1[2].previous_position.z = local_30;
    param_1[2].was_in_solid = local_2c;
  }
  local_7c = (CParticle_vtable *)(param_2[3] - local_70.x);
  local_78[0] = param_2[4] - local_70.y;
  local_78[1] = param_2[5] - local_70.z;
  local_94 = (CParticle_vtable *)(param_2[3] - local_70.x);
  local_90[(uint)bVar6 * -2] = local_78[(uint)bVar6 * -2];
  local_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       local_78[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (&param_1[2].vtable != &local_94) {
    param_1[2].vtable = local_94;
    param_1[3].position.x = local_90[0];
    param_1[3].position.y = local_90[1];
  }
  pfVar5 = &param_1[3].position.z;
  local_28 = param_2[6] - local_70.x;
  local_24 = param_2[7] - local_70.y;
  local_20 = param_2[8] - local_70.z;
  local_4c = param_2[6] - local_70.x;
  local_48[(uint)bVar6 * -2] = (&local_30)[(uint)bVar6 * 0xfffffffe + 3];
  local_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       (&local_30)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  if (pfVar5 != &local_4c) {
    *pfVar5 = local_4c;
    param_1[3].velocity.x = local_48[0];
    param_1[3].velocity.y = local_48[1];
  }
  pfVar5 = &param_1[1].position.y;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *param_5;
    param_5 = param_5 + (uint)bVar6 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  param_1[1].position.x = param_6;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
  (param_1->velocity).x = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,3.0);
  (param_1->velocity).y = local_14;
  local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-1.0,1.0);
  pCVar1 = &param_1->velocity;
  (param_1->velocity).z = local_14;
  fVar2 = (param_1->velocity).y;
  fVar3 = (param_1->velocity).z;
  local_18 = SQRT(fVar3 * fVar3 + pCVar1->x * pCVar1->x + fVar2 * fVar2);
  if (local_18 <= 0.0) {
    (param_1->velocity).z = 0.0;
    (param_1->velocity).y = (param_1->velocity).z;
    pCVar1->x = (param_1->velocity).y;
  }
  else {
    fVar2 = 1.0 / local_18;
    pCVar1->x = pCVar1->x * fVar2;
    (param_1->velocity).y = (param_1->velocity).y * fVar2;
    (param_1->velocity).z = (param_1->velocity).z * fVar2;
  }
  pCVar1 = &param_1->velocity;
  fVar2 = (param_1->velocity).y * _DAT_005c05d4;
  fVar3 = (param_1->velocity).z * _DAT_005c05d4;
  pCVar1->x = pCVar1->x * _DAT_005c05d4;
  (param_1->velocity).y = fVar2;
  (param_1->velocity).z = fVar3;
  core_particle_cpp_CParticle_setup_FUN_00509e40(param_1,&local_70,pCVar1);
  return;
}
