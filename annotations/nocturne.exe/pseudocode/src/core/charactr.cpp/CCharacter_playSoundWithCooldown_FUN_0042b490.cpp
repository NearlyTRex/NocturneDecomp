// Name: core_charactr.cpp_CCharacter_playSoundWithCooldown_FUN_0042b490
// Address: 0042b490
// Address Range: [[0042b490, 0042b4c0]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(CCharacter *this_ptr,char *sound_name)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042b490(CCharacter *this_ptr,char *sound_name)

{
  CDemonActor_vtable *pCVar1;
  
  if (0.0 < this_ptr->sound_cooldown) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->sound_cooldown = 0.1;
  (*pCVar1->playSound)(&this_ptr->base,sound_name);
  return;
}
