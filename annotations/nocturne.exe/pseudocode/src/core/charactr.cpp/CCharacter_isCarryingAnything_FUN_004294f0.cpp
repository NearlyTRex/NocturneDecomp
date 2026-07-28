// Name: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_004294f0
// Address: 004294f0
// Address Range: [[004294f0, 0042951f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = this_ptr->carry_hands[0].carry_actor;
  iVar2 = 0;
  while( true ) {
    if (pCVar1 != (CDemonActor *)0x0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    pCVar1 = this_ptr->carry_hands[1].carry_actor;
    this_ptr = (CCharacter *)&(this_ptr->base).orient_matrix.m[0].z;
  }
  return 0;
}
