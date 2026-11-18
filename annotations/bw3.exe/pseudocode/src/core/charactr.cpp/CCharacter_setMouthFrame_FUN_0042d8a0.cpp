// Name: core_charactr.cpp_CCharacter_setMouthFrame_FUN_0042d8a0
// Address: 0042d8a0
// Address Range: [[0042d8a0, 0042d8b8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042d8a0(CCharacter *this_ptr,int frame,float hold_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042d8a0(CCharacter *this_ptr,int frame,float hold_time)

{
  this_ptr->mouth_frame = frame;
  this_ptr->mouth_timer = hold_time;
  return;
}
