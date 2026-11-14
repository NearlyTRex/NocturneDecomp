// Name: core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
// Address: 0042cd30
// Address Range: [[0042cd30, 0042cd6a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter *this_ptr)

{
  float fStack_14;
  float local_10;
  float fStack_c;
  
  fStack_14 = (this_ptr->base).orient.vec.x;
  fStack_c = (this_ptr->base).orient.vec.z;
  local_10 = (this_ptr->base).orient.vec.y + this_ptr->turn_angle_accumulator;
  this_ptr->turn_angle_accumulator = 0.0;
  core_charactr_cpp_FUN_00433220(this_ptr,&fStack_14);
  return;
}
