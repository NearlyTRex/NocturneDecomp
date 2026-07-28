// Name: core_hero.cpp_CHero_executeLeverPull_FUN_004b5490
// Address: 004b5490
// Address Range: [[004b5490, 004b54bc]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_executeLeverPull_FUN_004b5490(CHero *this_ptr)

{
  if (this_ptr->lever_to_pull == (CLever *)0x0) {
    return 0;
  }
  core_lever_cpp_CLever_activate_FUN_004c6500(this_ptr->lever_to_pull);
  this_ptr->lever_to_pull = (CLever *)0x0;
  return 1;
}
