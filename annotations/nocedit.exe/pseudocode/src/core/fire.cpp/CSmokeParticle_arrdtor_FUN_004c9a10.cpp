// Name: core_fire.cpp_CSmokeParticle_arrdtor_FUN_004c9a10
// Address: 004c9a10
// Address Range: [[004c9a10, 004c9a27]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_CSmokeParticle_arrdtor_FUN_004c9a10(CSmokeParticle *objs,uint flags)

#include "nocturne.h"

CSmokeParticle * __cdecl
core_fire_cpp_CSmokeParticle_arrdtor_FUN_004c9a10(CSmokeParticle *objs,uint flags)

{
  CSmokeParticle *pCVar1;
  
  pCVar1 = (CSmokeParticle *)__arrfini(objs,0x800,&g_CSmokeParticleTypeInfo);
  return pCVar1;
}
