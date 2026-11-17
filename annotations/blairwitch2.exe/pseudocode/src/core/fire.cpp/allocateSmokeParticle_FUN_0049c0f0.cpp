// Name: core_fire.cpp_allocateSmokeParticle_FUN_0049c0f0
// Address: 0049c0f0
// Address Range: [[0049c0f0, 0049c11d]]
// Convention: __cdecl
// Signature: CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_0049c0f0(void)

#include "nocturne.h"

CSmokeParticle * __cdecl core_fire_cpp_allocateSmokeParticle_FUN_0049c0f0(void)

{
  CSmokeParticle *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c3f8dc + 1;
  pCVar1 = g_CSmokeParticle_ARRAY_01c3f8e0 + g_INT_01c3f8dc;
  if (0x7ff < iVar2) {
    iVar2 = 0;
  }
  g_INT_01c3f8dc = iVar2;
  return pCVar1;
}
