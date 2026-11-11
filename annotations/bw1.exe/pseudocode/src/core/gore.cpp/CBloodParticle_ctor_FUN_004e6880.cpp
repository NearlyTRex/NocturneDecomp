// Name: core_gore.cpp_CBloodParticle_ctor_FUN_004e6880
// Address: 004e6880
// Address Range: [[004e6880, 004e6894]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004e6880(CBloodParticle *this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004e6880(CBloodParticle *this_ptr)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)core_particle_cpp_CParticle_ctor_FUN_00532130(&this_ptr->base);
  (pCVar1->base).vtable = (CParticle_vtable *)&g_CBloodParticleVTable;
  return pCVar1;
}
