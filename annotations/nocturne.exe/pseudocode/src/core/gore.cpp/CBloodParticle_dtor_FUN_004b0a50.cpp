// Name: core_gore.cpp_CBloodParticle_dtor_FUN_004b0a50
// Address: 004b0a50
// Address Range: [[004b0a50, 004b0a5f]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004b0a50(CBloodParticle *this_ptr,uint flags)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_dtor_FUN_004b0a50(CBloodParticle *this_ptr,uint flags)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)core_particle_cpp_CParticle_dtor_FUN_004ef030(&this_ptr->base,1);
  return pCVar1;
}
