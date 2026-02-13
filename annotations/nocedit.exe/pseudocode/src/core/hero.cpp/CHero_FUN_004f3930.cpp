// Name: core_hero.cpp_CHero_FUN_004f3930
// Address: 004f3930
// Address Range: [[004f3930, 004f3950]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3930(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3930(CHero *this_ptr)

{
  int in_stack_00000008;
  
  this_ptr->ai_task = in_stack_00000008;
  memset(&this_ptr->player_control,0,0x2c);
  return;
}
