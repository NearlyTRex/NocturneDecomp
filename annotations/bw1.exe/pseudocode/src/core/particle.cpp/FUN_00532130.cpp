// Name: core_particle.cpp_FUN_00532130
// Address: 00532130
// Address Range: [[00532130, 00532142]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_FUN_00532130(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_FUN_00532130(CParticle *this_ptr)

{
  *(uint *)(this_ptr + 0x24) = 0;
  *(byte ***)(this_ptr + 0x3c) = &PTR_core_particle_cpp_CParticle_setup_FUN_00532160_006045e0;
  return this_ptr;
}
