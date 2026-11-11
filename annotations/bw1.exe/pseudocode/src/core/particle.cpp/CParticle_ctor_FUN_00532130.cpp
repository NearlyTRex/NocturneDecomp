// Name: core_particle.cpp_CParticle_ctor_FUN_00532130
// Address: 00532130
// Address Range: [[00532130, 00532142]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00532130(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00532130(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable =
       (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_00532160_006045e0;
  return this_ptr;
}
