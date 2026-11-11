// Name: core_fire.cpp_FUN_004af600
// Address: 004af600
// Address Range: [[004af600, 004af9e4]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004af600(CParticle *param_1,float *param_2,int *param_3,float *param_4,float *param_5,float param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004af600(CParticle *param_1,float *param_2,int *param_3,float *param_4,float *param_5,float param_6)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_10e8 [1015];
  float local_100;
  float local_fc;
  float local_f8;
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
  CVector3f local_c4;
  float local_b8;
  float local_b4 [2];
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CParticle local_64;
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
  local_88.x = local_a0 * _DAT_005df294;
  local_88.y = local_9c * _DAT_005df294;
  local_88.z = local_98 * _DAT_005df294;
  if (&local_c4 != (CVector3f *)(local_90 + 2)) {
    local_c4.x = local_88.x;
    local_c4.y = local_88.y;
    local_c4.z = local_88.z;
  }
  param_1[1].is_in_solid = *param_3;
  param_1[1].previous_position.x = (float)param_3[1];
  param_1[1].previous_position.y = (float)param_3[2];
  param_1[1].previous_position.z = *param_4;
  param_1[1].was_in_solid = (int)param_4[1];
  param_1[1].vtable = (CParticle_vtable *)param_4[2];
  local_dc = local_f4;
  local_d8 = local_f0;
  local_d4 = local_ec;
  local_7c = local_a0;
  local_78 = local_9c;
  local_74 = local_98;
  local_70 = local_88.x;
  local_6c = local_88.y;
  local_68 = local_88.z;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,3.1415927);
  param_1[1].lifetime_remaining = 0.0;
  param_1[1].acceleration.y = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
  param_1[1].acceleration.z = local_18;
  local_b8 = *param_2 - local_c4.x;
  local_b4[0] = param_2[1] - local_c4.y;
  local_b4[1] = param_2[2] - local_c4.z;
  local_64.position.x = *param_2 - local_c4.x;
  *(float *)((int)&local_64 + (uint)bVar3 * -8 + 4) = local_b4[(uint)bVar3 * -2];
  *(float *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       local_b4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (param_1 + 2 != &local_64) {
    param_1[2].position.x = local_64.position.x;
    param_1[2].position.y = local_64.position.y;
    param_1[2].position.z = local_64.position.z;
  }
  local_d0 = param_2[3] - local_c4.x;
  local_cc = param_2[4] - local_c4.y;
  local_c8 = param_2[5] - local_c4.z;
  local_64.acceleration.x = param_2[3] - local_c4.x;
  *(float *)((int)&local_64 + (uint)bVar3 * -8 + 0x1c) =
       (&stack0xffffff34)[(uint)bVar3 * 0xfffffffe];
  *(uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 0x20) =
       *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&param_1[2].velocity != &local_64.acceleration) {
    param_1[2].velocity.x = local_64.acceleration.x;
    param_1[2].velocity.y = local_64.acceleration.y;
    param_1[2].velocity.z = local_64.acceleration.z;
  }
  local_64.velocity.x = param_2[6] - local_c4.x;
  local_64.velocity.y = param_2[7] - local_c4.y;
  local_64.velocity.z = param_2[8] - local_c4.z;
  local_100 = param_2[6] - local_c4.x;
  (&stack0xffffff04)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&local_64 + (uint)bVar3 * -8 + 0x10);
  *(uint *)((int)&stack0xffffff08 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&local_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 0x14);
  if (&param_1[2].acceleration != (CVector3f *)&stack0xffffff00) {
    param_1[2].acceleration.x = local_100;
    param_1[2].acceleration.y = local_fc;
    param_1[2].acceleration.z = local_f8;
  }
  pfVar2 = &param_1[1].position.y;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_5;
    param_5 = param_5 + (uint)bVar3 * -2 + 1;
    pfVar2 = pfVar2 + (uint)bVar3 * -2 + 1;
  }
  param_1[1].position.x = param_6;
  local_e8 = param_1[2].acceleration.x - param_1[2].position.x;
  local_e4 = param_1[2].acceleration.y - param_1[2].position.y;
  local_e0 = param_1[2].acceleration.z - param_1[2].position.z;
  local_94 = local_e8;
  local_90[(uint)bVar3 * -2] = (&stack0xffffff1c)[(uint)bVar3 * 0xfffffffe];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&stack0xffffff20 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  local_1c = SQRT(local_90[1] * local_90[1] + local_94 * local_94 + local_90[0] * local_90[0]) *
             (float)_DAT_005df29c;
  local_64.previous_position.z =
       core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.7853982,1.5707964);
  local_18 = local_64.previous_position.z;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,6.2831855);
  fVar4 = (float10)fcos((float10)local_18);
  fVar5 = (float10)fcos((float10)local_64.previous_position.z);
  fVar6 = (float10)fsin((float10)local_18);
  fVar7 = (float10)fsin((float10)local_64.previous_position.z);
  local_64.vtable = (CParticle_vtable *)(float)fVar4;
  local_64.was_in_solid = (int)(float)fVar6;
  local_24 = (float)fVar7;
  local_ac.y = local_1c * local_24;
  local_20 = (float)fVar5;
  local_ac.x = local_1c * (float)local_64.vtable * local_20;
  local_ac.z = local_1c * (float)local_64.was_in_solid * local_20;
  core_particle_cpp_CParticle_setup_FUN_00532160(param_1,&local_c4,&local_ac);
  return;
}
