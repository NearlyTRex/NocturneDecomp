// Name: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_0042d360
// Address: 0042d360
// MANUAL RECONSTRUCTION
// Address Range: [[0042d360, 0042d38f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_0042d360(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_0042d360(CCharacter *this_ptr)

{
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (this_ptr->carry_hands[iVar2].carry_actor != (CDemonActor *)0x0) {
      return 1;
    }
  }
  return 0;
}
