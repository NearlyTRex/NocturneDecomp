// Name: core_particle.cpp_CParticle_ctor_FUN_004ef010
// Address: 004ef010
// Address Range: [[004ef010, 004ef022]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_004ef010(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_004ef010(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable =
       (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_004ef040_005a1034;
  return this_ptr;
}
