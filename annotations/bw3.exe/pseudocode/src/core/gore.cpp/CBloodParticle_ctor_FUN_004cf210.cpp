// Name: core_gore.cpp_CBloodParticle_ctor_FUN_004cf210
// Address: 004cf210
// Address Range: [[004cf210, 004cf224]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004cf210(CBloodParticle *this_ptr)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_ctor_FUN_004cf210(CBloodParticle *this_ptr)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)core_particle_cpp_CParticle_ctor_FUN_00509e10((CParticle *)this_ptr);
  *(byte ***)&pCVar1->field_0x3c = &g_CBloodParticleVTable;
  return pCVar1;
}
