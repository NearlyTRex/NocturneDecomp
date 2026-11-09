// Name: core_melee.cpp_FUN_004eacc0
// Address: 004eacc0
// Address Range: [[004eacc0, 004eacee]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_FUN_004eacc0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

#include "nocturne.h"

void __cdecl core_melee_cpp_FUN_004eacc0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)

{
  *(uint *)&this_ptr->field_0x6f4 = 0x3f800000;
  *(int *)&this_ptr->field_0x6e8 = blood_gore_type;
  *(uint *)&this_ptr->field_0x6f0 = *(uint *)&this_ptr->field_0x6f4;
  *(int *)&this_ptr->field_0x6ec = blood_spurt_count;
  return;
}
