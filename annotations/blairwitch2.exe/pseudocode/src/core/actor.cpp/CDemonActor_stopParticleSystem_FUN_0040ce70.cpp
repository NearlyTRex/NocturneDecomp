// Name: core_actor.cpp_CDemonActor_stopParticleSystem_FUN_0040ce70
// Address: 0040ce70
// Address Range: [[0040ce70, 0040ce98]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_stopParticleSystem_FUN_0040ce70(CDemonActor *this_ptr,int index,int fade_out)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_stopParticleSystem_FUN_0040ce70(CDemonActor *this_ptr,int index,int fade_out)

{
  core_bwspart_cpp_CSimpleParticleSystem_stop_FUN_005a8100
            (this_ptr->particle_systems + index,fade_out);
  return;
}
