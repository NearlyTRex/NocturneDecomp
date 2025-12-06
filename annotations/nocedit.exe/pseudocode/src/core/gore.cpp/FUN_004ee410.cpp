// Name: core_gore.cpp_FUN_004ee410
// Address: 004ee410
// Address Range: [[004ee410, 004ee41f]]
// Convention: __cdecl
// Signature: CBloodParticle * core_gore.cpp_FUN_004ee410(CBloodParticle * this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_FUN_004ee410(CBloodParticle *this_ptr)

{
  CParticle *pCVar1;
  
  pCVar1 = core_particle_cpp_CParticle_dtor_FUN_00545670((CParticle *)this_ptr);
  return (CBloodParticle *)pCVar1;
}
