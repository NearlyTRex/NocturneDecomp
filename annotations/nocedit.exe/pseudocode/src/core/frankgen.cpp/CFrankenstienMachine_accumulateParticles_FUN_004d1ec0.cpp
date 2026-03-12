// Name: core_frankgen.cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_frankgen_cpp_CFrankenstienMachine_accumulateParticles_FUN_004d1ec0(CFrankenstienMachine *this_ptr,float emission_rate,float delta_time)

{
  double dVar2;
  float fVar1;
  
  fVar1 = emission_rate * delta_time + this_ptr->particle_accumulator;
  this_ptr->particle_accumulator = fVar1;
  dVar2 = floor((double)fVar1);
  this_ptr->particle_accumulator = this_ptr->particle_accumulator - (float)(int)ROUND(ROUND(dVar2));
  return (int)ROUND(ROUND(dVar2));
}
