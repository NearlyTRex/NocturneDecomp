// Name: core_charactr.cpp_CCharacter_setMouthFrame_FUN_00424b90
// Address: 00424b90
// Address Range: [[00424b90, 00424ba8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_00424b90(CCharacter *this_ptr,int frame,float hold_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_00424b90(CCharacter *this_ptr,int frame,float hold_time)

{
  this_ptr->mouth_frame = frame;
  this_ptr->mouth_timer = hold_time;
  return;
}
