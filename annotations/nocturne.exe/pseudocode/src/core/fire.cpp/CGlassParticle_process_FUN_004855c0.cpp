// Name: core_fire.cpp_CGlassParticle_process_FUN_004855c0
// Address: 004855c0
// Address Range: [[004855c0, 0048562d]]
// Convention: unknown
// Signature: void core_fire_cpp_CGlassParticle_process_FUN_004855c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CGlassParticle_process_FUN_004855c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(0x01C775EC + 0x264);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar1;
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  iVar2 = *(int *)(param_1 + 0x38) - _DAT_01bd1d80 / 6;
  *(int *)(param_1 + 0x38) = iVar2;
  if (-1 < iVar2) {
    return;
  }
  *(uint *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  return;
}
