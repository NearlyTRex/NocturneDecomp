// Name: core_particle.cpp_FUN_00532150
// Address: 00532150
// Address Range: [[00532150, 0053215b]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_FUN_00532150(CParticle *this_ptr,uint flags)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_FUN_00532150(CParticle *this_ptr,uint flags)

{
  *(byte ***)(this_ptr + 0x3c) = &PTR_core_particle_cpp_CParticle_setup_FUN_00532160_006045e0;
  return this_ptr;
}
