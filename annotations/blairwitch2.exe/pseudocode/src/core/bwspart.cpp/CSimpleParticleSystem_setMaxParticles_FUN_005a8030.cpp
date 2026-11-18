// Name: core_bwspart.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030
// Address: 005a8030
// Address Range: [[005a8030, 005a8042]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem *this_ptr,int max_particles)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem *this_ptr,int max_particles)

{
  if (this_ptr->particles != (void *)0x0) {
    return;
  }
  this_ptr->max_particles = max_particles;
  return;
}
