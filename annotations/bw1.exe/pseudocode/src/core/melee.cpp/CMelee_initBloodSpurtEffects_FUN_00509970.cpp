// Name: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_00509970
// Address: 00509970
// Address Range: [[00509970, 0050999e]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_00509970(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

{
  *(uint *)&this_ptr->field_0x598 = 0x3f800000;
  *(int *)&this_ptr->field_0x58c = blood_gore_type;
  *(uint *)&this_ptr->field_0x594 = *(uint *)&this_ptr->field_0x598;
  *(int *)&this_ptr->field_0x590 = blood_spurt_count;
  return;
}
