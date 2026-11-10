// Name: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0
// Address: 004eacc0
// Address Range: [[004eacc0, 004eacee]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004eacc0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

{
  this_ptr->blood_spurt_interval = 1.0;
  this_ptr->blood_gore_type = blood_gore_type;
  this_ptr->blood_spurt_timer = this_ptr->blood_spurt_interval;
  this_ptr->blood_spurt_count = blood_spurt_count;
  return;
}
