// Name: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
// Address: 00494dd0
// Address Range: [[00494dd0, 00494e2b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(int param_1,float param_2,float param_3)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(int param_1,float param_2,float param_3)

{
  float fVar1;
  double dVar2;
  float10 fVar3;
  
  fVar1 = param_2 * param_3 + *(float *)(param_1 + 0x484);
  *(float *)(param_1 + 0x484) = fVar1;
  dVar2 = (double)floor((double)fVar1);
  fVar3 = (float10)round((float10)dVar2);
  *(float *)(param_1 + 0x484) = *(float *)(param_1 + 0x484) - (float)(int)ROUND(fVar3);
  return;
}
