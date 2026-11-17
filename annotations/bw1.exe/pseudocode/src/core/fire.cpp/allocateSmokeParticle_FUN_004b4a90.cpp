// Name: core_fire.cpp_allocateSmokeParticle_FUN_004b4a90
// Address: 004b4a90
// Address Range: [[004b4a90, 004b4abd]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004b4a90(void)

#include "nocturne.h"

CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_004b4a90(void)

{
  CSmokeParticle *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c58a9c + 1;
  pCVar1 = g_CSmokeParticle_ARRAY_01c58aa0 + g_INT_01c58a9c;
  if (0x7ff < iVar2) {
    iVar2 = 0;
  }
  g_INT_01c58a9c = iVar2;
  return pCVar1;
}
