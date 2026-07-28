// Name: core_fire.cpp_CShell_process_FUN_004897d0
// Address: 004897d0
// Address Range: [[004897d0, 00489849]]
// Convention: unknown
// Signature: void core_fire_cpp_CShell_process_FUN_004897d0(CParticle *param_1)

#include "nocturne.h"

void core_fire_cpp_CShell_process_FUN_004897d0(CParticle *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1->lifetime_remaining <= 0.0) {
    return;
  }
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  fVar5 = *(float *)(0x01C775EC + 0x264);
  fVar1 = param_1[1].velocity.y;
  fVar2 = param_1[1].velocity.z;
  fVar3 = param_1[1].position.y;
  param_1[1].position.x = param_1[1].position.x + param_1[1].velocity.x * fVar5;
  fVar4 = param_1[1].position.z;
  param_1[1].position.y = fVar3 + fVar1 * fVar5;
  param_1[1].position.z = fVar4 + fVar2 * fVar5;
  return;
}
