// Name: core_fire.cpp_CGlassParticle_init_FUN_004850d0
// Address: 004850d0
// Address Range: [[004850d0, 004853b1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004850d0(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,undefined4 param_6)

#include "nocturne.h"

void __cdecl core_fire_cpp_CGlassParticle_init_FUN_004850d0(int param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
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
  float local_28;
  float local_1c;
  float local_10;
  
  bVar3 = 0;
  local_74 = *param_2 + param_2[3];
  local_70 = param_2[1] + param_2[4];
  local_6c = param_2[2] + param_2[5];
  local_44 = local_74 + param_2[6];
  local_80 = local_44 / 3.0f;
  local_40 = local_70 + param_2[7];
  local_3c = local_6c + param_2[8];
  local_7c = local_40 * 0.3333333f;
  local_78 = local_3c * 0.3333333f;
  if (&local_50 != &local_80) {
    local_50 = local_80;
    local_4c = local_7c;
    local_48 = local_78;
  }
  *(uint *)(param_1 + 0x60) = *param_3;
  *(uint *)(param_1 + 100) = param_3[1];
  *(uint *)(param_1 + 0x68) = param_3[2];
  *(uint *)(param_1 + 0x6c) = *param_4;
  *(uint *)(param_1 + 0x70) = param_4[1];
  *(uint *)(param_1 + 0x74) = param_4[2];
  local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40490fdb);
  *(uint *)(param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x54) = local_10;
  local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
  *(float *)(param_1 + 0x58) = local_10;
  local_5c = *param_2 - local_50;
  local_58 = param_2[1] - local_4c;
  local_54 = param_2[2] - local_48;
  if ((float *)(param_1 + 0x78) != &local_5c) {
    *(float *)(param_1 + 0x78) = local_5c;
    *(float *)(param_1 + 0x7c) = local_58;
    *(float *)(param_1 + 0x80) = local_54;
  }
  local_a4 = param_2[3] - local_50;
  local_a0 = param_2[4] - local_4c;
  local_9c = param_2[5] - local_48;
  if ((float *)(param_1 + 0x84) != &local_a4) {
    *(float *)(param_1 + 0x84) = local_a4;
    *(float *)(param_1 + 0x88) = local_a0;
    *(float *)(param_1 + 0x8c) = local_9c;
  }
  local_98 = param_2[6] - local_50;
  local_94 = param_2[7] - local_4c;
  local_90 = param_2[8] - local_48;
  if ((float *)(param_1 + 0x90) != &local_98) {
    *(float *)(param_1 + 0x90) = local_98;
    *(float *)(param_1 + 0x94) = local_94;
    *(float *)(param_1 + 0x98) = local_90;
  }
  puVar2 = (uint *)(param_1 + 0x3c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  *(uint *)(param_1 + 0x38) = param_6;
  local_8c = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x78);
  local_88 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x7c);
  local_84 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x80);
  local_28 = SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88) *
             (float)10;
  local_1c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f490fdb,0x3fc90fdb);
  local_10 = local_1c;
  local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x40c90fdb);
  fVar4 = (float10)fcos((float10)local_10);
  fVar5 = (float10)fcos((float10)local_1c);
  fVar6 = (float10)fsin((float10)local_10);
  fVar7 = (float10)fsin((float10)local_1c);
  local_64 = (float)(fVar7 * (float10)local_28);
  local_68 = (float)((float10)local_28 * fVar4 * fVar5);
  local_60 = (float)((float10)local_28 * fVar6 * fVar5);
  core_particle_cpp_CParticle_setup_FUN_004ef040(param_1,&local_50,&local_68);
  return;
}
