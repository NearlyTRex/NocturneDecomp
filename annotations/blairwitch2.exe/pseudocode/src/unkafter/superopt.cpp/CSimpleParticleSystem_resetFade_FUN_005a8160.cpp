// Name: unkafter_superopt.cpp_CSimpleParticleSystem_resetFade_FUN_005a8160
// Address: 005a8160
// Address Range: [[005a8160, 005a8170]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_resetFade_FUN_005a8160(CSimpleParticleSystem *this_ptr)

{
  this_ptr->fade_current = this_ptr->fade_start;
  this_ptr->fade_timer = this_ptr->fade_duration;
  return;
}
