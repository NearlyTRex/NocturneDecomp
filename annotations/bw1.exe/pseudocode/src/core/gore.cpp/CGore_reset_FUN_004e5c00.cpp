// Name: core_gore.cpp_CGore_reset_FUN_004e5c00
// Address: 004e5c00
// Address Range: [[004e5c00, 004e5c4a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004e5c00(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_reset_FUN_004e5c00(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  g_INT_01cd0ea8 = 0;
  g_INT_01cd56ac = 0;
  g_INT_01cd56b0 = 0;
  g_INT_01cf69f4 = 0;
  g_INT_01cf69f8 = 0;
  pCVar1 = g_BloodParticles;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != g_BloodParticles + sizeof(g_BloodParticles) / sizeof(g_BloodParticles[0]));
  g_INT_01cf6f00 = 0;
  g_INT_01cf6efc = 0;
  return;
}
