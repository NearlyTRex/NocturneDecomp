// Name: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970
// Address: 00509970
// Address Range: [[00509970, 0050999e]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

{
  this_ptr->blood_spurt_interval = 1.0;
  this_ptr->blood_gore_type = blood_gore_type;
  this_ptr->blood_spurt_timer = this_ptr->blood_spurt_interval;
  this_ptr->blood_spurt_count = blood_spurt_count;
  return;
}
