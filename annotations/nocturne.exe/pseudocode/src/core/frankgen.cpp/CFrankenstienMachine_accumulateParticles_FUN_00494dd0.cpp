// Name: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0
// Address: 00494dd0
// Address Range: [[00494dd0, 00494e2b]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

#include "nocturne.h"

int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_00494dd0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

{
  float fVar1;
  double dVar2;
  
  fVar1 = emission_rate * delta_time + this_ptr->particle_accumulator;
  this_ptr->particle_accumulator = fVar1;
  dVar2 = (double)floor((double)fVar1);
  dVar2 = round(dVar2);
  this_ptr->particle_accumulator = this_ptr->particle_accumulator - (float)(int)ROUND(dVar2);
  return (int)ROUND(dVar2);
}
