// Name: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00432060
// Address: 00432060
// Address Range: [[00432060, 0043208f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(CCharacter *this_ptr)

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
    this_ptr = (CCharacter *)(this_ptr->base).create_event;
  }
  return 0;
}
