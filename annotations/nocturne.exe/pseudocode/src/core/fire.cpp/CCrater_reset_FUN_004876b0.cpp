// Name: core_fire.cpp_CCrater_reset_FUN_004876b0
// Address: 004876b0
// Address Range: [[004876b0, 004876c8]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_reset_FUN_004876b0(CCrater *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_reset_FUN_004876b0(CCrater *this_ptr)

{
  this_ptr->has_smoke = 0;
  this_ptr->smoke_delay = 0.0;
  this_ptr->active = 0;
  return;
}
