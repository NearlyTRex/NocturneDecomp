// Name: core_fire.cpp_CGlassParticle_process_FUN_004855c0
// Address: 004855c0
// Address Range: [[004855c0, 0048562d]]
// Convention: unknown
// Signature: void core_fire_cpp_CGlassParticle_process_FUN_004855c0(CParticle *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CGlassParticle_process_FUN_004855c0(CParticle *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(0x01C775EC + 0x264);
  param_1[1].gravity_acceleration = param_1[1].gravity_acceleration + fVar1;
  param_1[1].is_in_solid = (int)((float)param_1[1].is_in_solid + fVar1);
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  fVar1 = (float)((int)param_1[1].position.x - _DAT_01bd1d80 / 6);
  param_1[1].position.x = fVar1;
  if (-1 < (int)fVar1) {
    return;
  }
  param_1[1].position.x = 0.0;
  param_1->lifetime_remaining = 0.0;
  return;
}
