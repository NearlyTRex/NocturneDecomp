// Name: core_charactr.cpp_CCharacter_preProcess_FUN_00424470
// Address: 00424470
// Address Range: [[00424470, 004244aa]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_00424470(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_00424470(CCharacter *this_ptr)

{
  UOrientationVector UStack_14;
  
  UStack_14.vec.x = (this_ptr->base).orient.vec.x;
  UStack_14.vec.z = (this_ptr->base).orient.vec.z;
  UStack_14.vec.y = (this_ptr->base).orient.vec.y + this_ptr->turn_angle_accumulator;
  this_ptr->turn_angle_accumulator = 0.0;
  core_charactr_cpp_CCharacter_setOrientation_FUN_00429d60(this_ptr,&UStack_14);
  return;
}
