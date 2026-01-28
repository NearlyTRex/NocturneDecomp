// Name: core_particle.cpp_CParticle_ctor_FUN_00545650
// Address: 00545650
// Address Range: [[00545650, 00545662]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00545650(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00545650(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable = &g_CParticleVTable;
  return this_ptr;
}
