// Name: core_hero.cpp_CHero_FUN_004f30f0
// Address: 004f30f0
// Address Range: [[004f30f0, 004f311c]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f30f0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f30f0(CHero *this_ptr)

{
  if ((CLever *)this_ptr->lever_to_pull == (CLever *)0x0) {
    return 0;
  }
  core_lever_cpp_CLever_FUN_00504c90((CLever *)this_ptr->lever_to_pull);
  this_ptr->lever_to_pull = (CDemonActor *)0x0;
  return 1;
}
