// Name: core_gore.cpp_CBloodParticle_ctor_FUN_004b0a30
// Address: 004b0a30
// Address Range: [[004b0a30, 004b0a44]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004b0a30(CBloodParticle *this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004b0a30(CBloodParticle *this_ptr)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)core_particle_cpp_CParticle_ctor_FUN_004ef010(&this_ptr->base);
  (pCVar1->base).vtable = &g_CBloodParticleVTable;
  return pCVar1;
}
