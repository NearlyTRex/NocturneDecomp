// Name: core_fire.cpp_freeSmokeParticles_FUN_004c9a10
// Address: 004c9a10
// Address Range: [[004c9a10, 004c9a27]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle **array)

#include "nocturne.h"

void __cdecl core_fire_cpp_freeSmokeParticles_FUN_004c9a10(CSmokeParticle **array)

{
  __arrfini(array,0x800,&g_CSmokeParticleTypeInfo);
  return;
}
