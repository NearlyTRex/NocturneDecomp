// Name: core_fire.cpp_CSmokeParticle_process_FUN_00482820
// Address: 00482820
// Address Range: [[00482820, 0048294b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(undefined4 *param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_00482820(uint *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  fVar3 = *(float *)(0x01C775EC + 0x264);
  param_1[6] = fVar3 * 30.0f + (float)param_1[6];
  if (0x421fffff < (int)param_1[6]) {
    *param_1 = 0;
    return;
  }
  param_1[2] = fVar3 * (float)param_1[4] * (float)param_1[5] + (float)param_1[2];
  fVar5 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbf800000,0x3f800000);
  param_1[1] = fVar5 * fVar3 + (float)param_1[1];
  fVar5 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbf800000,0x3f800000);
  param_1[3] = fVar5 * fVar3 + (float)param_1[3];
  pfVar1 = (float *)(param_1 + 1);
  *pfVar1 = *pfVar1 + (float)param_1[7] * fVar3;
  param_1[2] = (float)param_1[2] + (float)param_1[8] * fVar3;
  iVar4 = 0x01E57284;
  param_1[3] = (float)param_1[3] + (float)param_1[9] * fVar3;
  fVar5 = *(float *)(iVar4 + 0x15a87c);
  fVar2 = *(float *)(iVar4 + 0x15a880);
  *pfVar1 = *pfVar1 + *(float *)(iVar4 + 0x15a878) * fVar3;
  param_1[2] = (float)param_1[2] + fVar5 * fVar3;
  param_1[3] = (float)param_1[3] + fVar2 * fVar3;
  return;
}
