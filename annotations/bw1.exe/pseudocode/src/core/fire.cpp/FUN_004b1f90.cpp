// Name: core_fire.cpp_FUN_004b1f90
// Address: 004b1f90
// Address Range: [[004b1f90, 004b1fa8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_FUN_004b1f90(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_FUN_004b1f90(CCrater *this_ptr)

{
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)this_ptr = 0;
  return;
}
