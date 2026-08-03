// Name: core_gore.cpp_CGore_reset_FUN_004afdb0
// Address: 004afdb0
// Address Range: [[004afdb0, 004afdfa]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_reset_FUN_004afdb0(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  _DAT_01c78ce8 = 0;
  _DAT_01c7ccec = 0;
  _DAT_01c7ccf0 = 0;
  _DAT_01c9e034 = 0;
  _DAT_01c9e038 = 0;
  pCVar1 = g_CBloodParticle_ARRAY_01c78cec;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_01c7ccec);
  _DAT_01c9e540 = 0;
  _DAT_01c9e53c = 0;
  return;
}
