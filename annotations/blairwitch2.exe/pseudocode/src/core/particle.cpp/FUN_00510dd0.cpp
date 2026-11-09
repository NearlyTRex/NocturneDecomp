// Name: core_particle.cpp_FUN_00510dd0
// Address: 00510dd0
// Address Range: [[00510dd0, 00510de2]]
// Convention: __cdecl
// Signature: CParticle * __cdecl core_particle_cpp_FUN_00510dd0(CParticle *this_ptr)

#include "nocturne.h"

CParticle * __cdecl core_particle_cpp_FUN_00510dd0(CParticle *this_ptr)

{
  *(uint *)(this_ptr + 0x24) = 0;
  *(byte ***)(this_ptr + 0x3c) = &PTR_core_particle_cpp_CParticle_setup_FUN_00510e00_005fa8ec;
  return this_ptr;
}
