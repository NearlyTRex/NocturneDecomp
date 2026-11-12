// Name: core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140
// Address: 005a8140
// Address Range: [[005a8140, 005a8159]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem *this_ptr,float param_2,float param_3,float param_4)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem *this_ptr,float param_2,float param_3,float param_4)

{
  this_ptr->fade_start = param_2;
  this_ptr->fade_end = param_3;
  this_ptr->fade_duration = param_4;
  return;
}
