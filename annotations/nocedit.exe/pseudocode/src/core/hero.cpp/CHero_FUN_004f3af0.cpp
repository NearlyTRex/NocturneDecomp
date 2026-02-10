// Name: core_hero.cpp_CHero_FUN_004f3af0
// Address: 004f3af0
// Address Range: [[004f3af0, 004f3b15]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_FUN_004f3af0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3af0(CHero *this_ptr)

{
  int in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float in_stack_00000010;
  
  this_ptr->unk1 = 0.0;
  core_charactr_cpp_CCharacter_kill_FUN_00428e30
            (&this_ptr->base,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  return;
}
