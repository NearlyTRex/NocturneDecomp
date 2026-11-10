// Name: core_fire.cpp_CCrater_reset_FUN_004b1f90
// Address: 004b1f90
// Address Range: [[004b1f90, 004b1fa8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_reset_FUN_004b1f90(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_reset_FUN_004b1f90(CCrater *this_ptr)

{
  this_ptr->has_smoke = 0;
  this_ptr->smoke_delay = 0.0;
  this_ptr->active = 0;
  return;
}
