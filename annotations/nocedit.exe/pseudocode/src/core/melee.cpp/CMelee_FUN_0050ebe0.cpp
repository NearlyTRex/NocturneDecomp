// Name: core_melee.cpp_CMelee_FUN_0050ebe0
// Address: 0050ebe0
// Address Range: [[0050ebe0, 0050ec0e]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_FUN_0050ebe0(CMelee *this_ptr)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_FUN_0050ebe0(CMelee *this_ptr)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->blood_spurt_interval = 1.0;
  this_ptr->blood_gore_type = in_stack_0000000c;
  this_ptr->blood_spurt_timer = this_ptr->blood_spurt_interval;
  this_ptr->blood_spurt_count = in_stack_00000008;
  return;
}
