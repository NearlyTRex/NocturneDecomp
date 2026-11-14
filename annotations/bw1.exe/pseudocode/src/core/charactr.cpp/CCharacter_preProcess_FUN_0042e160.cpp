// Name: core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
// Address: 0042e160
// Address Range: [[0042e160, 0042e19a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_0042e160(CCharacter *this_ptr)

{
  UOrientationVector UStack_14;
  
  UStack_14.vec.x = (this_ptr->base).orient.vec.x;
  UStack_14.vec.z = (this_ptr->base).orient.vec.z;
  UStack_14.vec.y = (this_ptr->base).orient.vec.y + this_ptr->turn_angle_accumulator;
  this_ptr->turn_angle_accumulator = 0.0;
  core_charactr_cpp_CCharacter_setOrientation_FUN_00433d50(this_ptr,&UStack_14);
  return;
}
