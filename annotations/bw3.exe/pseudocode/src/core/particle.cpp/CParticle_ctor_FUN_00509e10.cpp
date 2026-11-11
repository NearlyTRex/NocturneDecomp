// Name: core_particle.cpp_CParticle_ctor_FUN_00509e10
// Address: 00509e10
// Address Range: [[00509e10, 00509e22]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00509e10(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00509e10(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable =
       (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_00509e40_005e2fa4;
  return this_ptr;
}
