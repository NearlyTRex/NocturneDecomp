// Name: core_actor.cpp_CDemonActor_setParticleSystemFade_FUN_0040cea0
// Address: 0040cea0
// Address Range: [[0040cea0, 0040cecf]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_setParticleSystemFade_FUN_0040cea0(CDemonActor *this_ptr,int index,float fade_start,float fade_end,float fade_duration)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_setParticleSystemFade_FUN_0040cea0(CDemonActor *this_ptr,int index,float fade_start,float fade_end,float fade_duration)

{
  core_bwspart_cpp_CSimpleParticleSystem_setFade_FUN_005a8140
            (this_ptr->particle_systems + index,fade_start,fade_end,fade_duration);
  return;
}
