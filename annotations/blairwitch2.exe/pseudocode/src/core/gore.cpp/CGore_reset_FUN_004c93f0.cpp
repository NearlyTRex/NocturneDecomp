// Name: core_gore.cpp_CGore_reset_FUN_004c93f0
// Address: 004c93f0
// Address Range: [[004c93f0, 004c943a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004c93f0(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_reset_FUN_004c93f0(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  g_INT_01cb82f0 = 0;
  g_INT_01cbcaf4 = 0;
  g_INT_01cbcaf8 = 0;
  g_INT_01cdde3c = 0;
  g_INT_01cdde40 = 0;
  pCVar1 = g_BloodParticles;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]));
  g_INT_01cde348 = 0;
  g_INT_01cde344 = 0;
  return;
}
