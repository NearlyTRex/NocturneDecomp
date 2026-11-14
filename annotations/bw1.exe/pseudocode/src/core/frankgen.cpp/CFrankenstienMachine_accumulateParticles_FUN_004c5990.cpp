// Name: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990
// Address: 004c5990
// Address Range: [[004c5990, 004c59eb]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

#include "nocturne.h"

int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004c5990(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

{
  float fVar1;
  float10 fVar2;
  double dVar3;
  
  fVar1 = emission_rate * delta_time + this_ptr->particle_accumulator;
  this_ptr->particle_accumulator = fVar1;
  dVar3 = floor((double)fVar1);
  fVar2 = (float10)dVar3;
  round();
  this_ptr->particle_accumulator = this_ptr->particle_accumulator - (float)(int)ROUND(fVar2);
  return (int)ROUND(fVar2);
}
