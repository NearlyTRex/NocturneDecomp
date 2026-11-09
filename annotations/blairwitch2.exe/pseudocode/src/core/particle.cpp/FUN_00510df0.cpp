// Name: core_particle.cpp_FUN_00510df0
// Address: 00510df0
// Address Range: [[00510df0, 00510dfb]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_FUN_00510df0(CParticle *this_ptr,uint flags)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_FUN_00510df0(CParticle *this_ptr,uint flags)

{
  *(byte ***)(this_ptr + 0x3c) = &PTR_core_particle_cpp_CParticle_setup_FUN_00510e00_005fa8ec;
  return this_ptr;
}
