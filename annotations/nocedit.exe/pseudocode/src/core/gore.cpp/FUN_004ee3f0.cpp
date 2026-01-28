// Name: core_gore.cpp_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee404]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_FUN_004ee3f0(CBloodParticle *this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_FUN_004ee3f0(CBloodParticle *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_ctor_FUN_00545650((CParticle *)this_ptr);
  pCVar1->vtable = (CParticle_vtable *)&PTR_core_particle_cpp_FUN_0065f044;
  return (CBloodParticle *)pCVar1;
}
