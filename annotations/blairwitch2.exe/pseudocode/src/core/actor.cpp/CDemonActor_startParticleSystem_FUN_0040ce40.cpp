// Name: core_actor.cpp_CDemonActor_startParticleSystem_FUN_0040ce40
// Address: 0040ce40
// Address Range: [[0040ce40, 0040ce68]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_startParticleSystem_FUN_0040ce40(CDemonActor *this_ptr,int index,int reset_fade)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_startParticleSystem_FUN_0040ce40(CDemonActor *this_ptr,int index,int reset_fade)

{
  core_bwspart_cpp_CSimpleParticleSystem_start_FUN_005a80d0
            (this_ptr->particle_systems + index,reset_fade);
  return;
}
