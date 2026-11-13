// Name: core_bwspart.cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0
// Address: 005a7ef0
// Address Range: [[005a7ef0, 005a7f4f]]
// Convention: __cdecl
// Signature: CSimpleParticleSystem * __cdecl core_bwspart_cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0(CSimpleParticleSystem *this_ptr)

#include "nocturne.h"

CSimpleParticleSystem * __cdecl core_bwspart_cpp_CSimpleParticleSystem_ctor_FUN_005a7ef0(CSimpleParticleSystem *this_ptr)

{
  this_ptr->max_particles = 0x40;
  this_ptr->next_particle = 0;
  this_ptr->owner = (CDemonActor *)0x0;
  this_ptr->particles = (void *)0x0;
  this_ptr->fade_current = 1.0;
  this_ptr->fade_start = 1.0;
  this_ptr->fade_end = 1.0;
  this_ptr->fade_duration = 1.0;
  this_ptr->fade_timer = 0.0;
  this_ptr->stop_after_fade = 0;
  this_ptr->active = 0;
  this_ptr->standalone = 0;
  this_ptr->vtable = (void *)0x6002e4;
  return this_ptr;
}
