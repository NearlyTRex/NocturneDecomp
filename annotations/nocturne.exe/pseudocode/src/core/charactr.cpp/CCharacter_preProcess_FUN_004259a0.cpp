// Name: core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
// Address: 004259a0
// Address Range: [[004259a0, 004259e8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(CCharacter *this_ptr)

{
  UOrientationVector local_c;
  
  local_c.vec.x = (this_ptr->base).orient.vec.x;
  local_c.vec.z = (this_ptr->base).orient.vec.z;
  local_c.vec.y = (this_ptr->base).orient.vec.y + this_ptr->turn_angle_accumulator;
  this_ptr->turn_angle_accumulator = 0.0;
  core_charactr_cpp_CCharacter_setOrientation_FUN_0042a060(this_ptr,&local_c);
  return;
}
