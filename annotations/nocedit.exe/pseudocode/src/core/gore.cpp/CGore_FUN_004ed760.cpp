// Name: core_gore.cpp_CGore_FUN_004ed760
// Address: 004ed760
// Address Range: [[004ed760, 004ed7aa]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_FUN_004ed760(CGore *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ed760(CGore *this_ptr)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  DAT_02d833d0 = 0;
  DAT_02d873d4 = 0;
  INT_02d873d8 = 0;
  DAT_02da871c = 0;
  INT_02da8720 = 0;
  pCVar1 = DAT_02d833d4;
  do {
    pCVar2 = pCVar1 + 1;
    (pCVar1->base).lifetime_remaining = 0.0;
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_02d873d4);
  DAT_02da8c28 = 0;
  DAT_02da8c24 = 0;
  return;
}
