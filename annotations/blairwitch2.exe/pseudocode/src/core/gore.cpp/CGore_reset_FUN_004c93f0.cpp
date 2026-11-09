// Name: core_gore.cpp_CGore_reset_FUN_004c93f0
// Address: 004c93f0
// Address Range: [[004c93f0, 004c943a]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004c93f0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_reset_FUN_004c93f0(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  _DAT_01cb82f0 = 0;
  _DAT_01cbcaf4 = 0;
  _DAT_01cbcaf8 = 0;
  _DAT_01cdde3c = 0;
  _DAT_01cdde40 = 0;
  pCVar1 = g_BloodParticles;
  do {
    pCVar2 = pCVar1 + 1;
    *(uint *)&pCVar1->field_0x24 = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_01cbcaf4);
  _DAT_01cde348 = 0;
  _DAT_01cde344 = 0;
  return;
}
