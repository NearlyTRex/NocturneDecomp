// Name: core_hero.cpp_CHero_FUN_004f3580
// Address: 004f3580
// Address Range: [[004f3580, 004f35af]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3580(CHero *this_ptr)

{
  if (*(int *)(this_ptr->unk4 + 0x14) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->unk4 + 0x14) + 0x154) + 0x9c))();
  this_ptr->unk4[0x14] = '\0';
  this_ptr->unk4[0x15] = '\0';
  this_ptr->unk4[0x16] = '\0';
  this_ptr->unk4[0x17] = '\0';
  return;
}
