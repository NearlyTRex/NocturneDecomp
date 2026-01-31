// Name: core_hero.cpp_CHero_FUN_004f3890
// Address: 004f3890
// Address Range: [[004f3890, 004f38c2]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3890(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3890(CHero *this_ptr)

{
  if (*(int *)(this_ptr->unk4 + 4) == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(&this_ptr->base);
  this_ptr->unk4[4] = '\0';
  this_ptr->unk4[5] = '\0';
  this_ptr->unk4[6] = '\0';
  this_ptr->unk4[7] = '\0';
  return;
}
