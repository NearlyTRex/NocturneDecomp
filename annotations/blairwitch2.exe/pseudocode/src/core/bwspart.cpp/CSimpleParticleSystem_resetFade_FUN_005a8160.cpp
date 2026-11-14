// Name: core_bwspart.cpp_CSimpleParticleSystem_resetFade_FUN_005a8160
// Address: 005a8160
// Address Range: [[005a8160, 005a8170]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(CSimpleParticleSystem *this_ptr)

{
  this_ptr->fade_current = this_ptr->fade_start;
  this_ptr->fade_timer = this_ptr->fade_duration;
  return;
}
