// Name: core_fire.cpp_freeSmokeParticles_FUN_004c9a10
// Address: 004c9a10
// Address Range: [[004c9a10, 004c9a27]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle *objs)

#include "nocturne.h"

CSmokeParticle * __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle *objs)

{
  CSmokeParticle *pCVar1;
  
  pCVar1 = __arrfini(objs,0x800,&g_CSmokeParticleTypeInfo);
  return pCVar1;
}
