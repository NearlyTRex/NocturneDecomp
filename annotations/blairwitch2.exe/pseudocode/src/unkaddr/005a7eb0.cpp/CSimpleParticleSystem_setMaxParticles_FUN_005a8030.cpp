// Name: unkaddr_005a7eb0.cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030
// Address: 005a8030
// Address Range: [[005a8030, 005a8042]]
// Convention: __cdecl
// Signature: void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl unkaddr_005a7eb0_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(CSimpleParticleSystem *this_ptr,int param_2)

{
  if (this_ptr->particles != (void *)0x0) {
    return;
  }
  this_ptr->max_particles = param_2;
  return;
}
