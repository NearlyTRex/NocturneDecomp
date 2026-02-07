// Name: core_gore.cpp_CBloodParticle_ctor_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee404]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004ee3f0(CBloodParticle *this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004ee3f0(CBloodParticle *this_ptr)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)core_particle_cpp_CParticle_ctor_FUN_00545650(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&PTR_core_particle_cpp_FUN_0065f044;
  return pCVar1;
}
