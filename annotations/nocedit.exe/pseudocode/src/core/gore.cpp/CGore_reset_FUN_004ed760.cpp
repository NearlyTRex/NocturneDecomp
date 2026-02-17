// Name: core_gore.cpp_CGore_reset_FUN_004ed760
// Address: 004ed760
// Address Range: [[004ed760, 004ed7aa]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004ed760(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_reset_FUN_004ed760(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  g_BloodParticleIndex = 0;
  g_BloodSplatIndex = 0;
  g_BloodSplatCount = 0;
  g_BloodPoolIndex = 0;
  g_BloodPoolCount = 0;
  pCVar1 = g_BloodParticles;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&g_BloodSplatIndex);
  g_FootstepCount = 0;
  g_FootstepIndex = 0;
  return;
}
