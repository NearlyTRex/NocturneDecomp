// Name: core_fire.cpp_allocateSmokeParticle_FUN_004c6be0
// Address: 004c6be0
// Address Range: [[004c6be0, 004c6c0d]]
// Convention: __cdecl
// Signature: CSmokeParticle * core_fire.cpp_allocateSmokeParticle_FUN_004c6be0(void)

#include "nocturne.h"

CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004c6be0(void)

{
  CSmokeParticle *pCVar1;
  int iVar2;
  
  iVar2 = g_SmokeParticleAllocIndex + 1;
  pCVar1 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
  if (0x7ff < iVar2) {
    iVar2 = 0;
  }
  g_SmokeParticleAllocIndex = iVar2;
  return pCVar1;
}
