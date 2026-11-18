// Name: core_bwspart.cpp_CSimpleParticleSystem_setFade_FUN_005a8140
// Address: 005a8140
// Address Range: [[005a8140, 005a8159]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem *this_ptr,float fade_start,float fade_end,float fade_duration)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140(CSimpleParticleSystem *this_ptr,float fade_start,float fade_end,float fade_duration)

{
  this_ptr->fade_start = fade_start;
  this_ptr->fade_end = fade_end;
  this_ptr->fade_duration = fade_duration;
  return;
}
