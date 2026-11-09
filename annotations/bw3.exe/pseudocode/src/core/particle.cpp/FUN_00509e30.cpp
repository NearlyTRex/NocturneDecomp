// Name: core_particle.cpp_FUN_00509e30
// Address: 00509e30
// Address Range: [[00509e30, 00509e3b]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_FUN_00509e30(CParticle *this_ptr,uint flags)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_FUN_00509e30(CParticle *this_ptr,uint flags)

{
  *(byte ***)(this_ptr + 0x3c) = &PTR_core_particle_cpp_CParticle_setup_FUN_00509e40_005e2fa4;
  return this_ptr;
}
