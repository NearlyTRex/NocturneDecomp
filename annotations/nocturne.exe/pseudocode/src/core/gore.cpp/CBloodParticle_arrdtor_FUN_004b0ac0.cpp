// Name: core_gore.cpp_CBloodParticle_arrdtor_FUN_004b0ac0
// Address: 004b0ac0
// Address Range: [[004b0ac0, 004b0ad7]]
// Convention: __cdecl
// Signature: CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_arrdtor_FUN_004b0ac0(CBloodParticle *this_ptr,uint flags)

#include "nocturne.h"

CBloodParticle * __cdecl core_gore_cpp_CBloodParticle_arrdtor_FUN_004b0ac0(CBloodParticle *this_ptr,uint flags)

{
  CBloodParticle *pCVar1;
  
  pCVar1 = (CBloodParticle *)__arrfini(this_ptr,0x100,&g_CBloodParticleTypeInfo_0059e530);
  return pCVar1;
}
