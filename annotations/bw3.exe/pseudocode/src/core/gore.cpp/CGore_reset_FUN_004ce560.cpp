// Name: core_gore.cpp_CGore_reset_FUN_004ce560
// Address: 004ce560
// Address Range: [[004ce560, 004ce5aa]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004ce560(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_reset_FUN_004ce560(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  _DAT_01d22eb0 = 0;
  _DAT_01d276b4 = 0;
  _DAT_01d276b8 = 0;
  _DAT_01d4a93c = 0;
  _DAT_01d4a940 = 0;
  pCVar1 = g_BloodParticles;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_01d276b4);
  _DAT_01d4aec8 = 0;
  _DAT_01d4aec4 = 0;
  return;
}
