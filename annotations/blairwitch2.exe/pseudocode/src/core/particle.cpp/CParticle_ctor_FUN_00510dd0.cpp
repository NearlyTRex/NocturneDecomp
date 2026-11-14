// Name: core_particle.cpp_CParticle_ctor_FUN_00510dd0
// Address: 00510dd0
// Address Range: [[00510dd0, 00510de2]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00510dd0(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00510dd0(CParticle *this_ptr)

{
  this_ptr->lifetime_remaining = 0.0;
  this_ptr->vtable =
       (CParticle_vtable *)&PTR_core_particle_cpp_CParticle_setup_FUN_00510e00_005fa8ec;
  return this_ptr;
}
