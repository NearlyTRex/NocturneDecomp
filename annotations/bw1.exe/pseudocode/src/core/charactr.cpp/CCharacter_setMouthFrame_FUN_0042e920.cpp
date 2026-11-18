// Name: core_charactr.cpp_CCharacter_setMouthFrame_FUN_0042e920
// Address: 0042e920
// Address Range: [[0042e920, 0042e938]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042e920(CCharacter *this_ptr,int frame,float hold_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setMouthFrame_FUN_0042e920(CCharacter *this_ptr,int frame,float hold_time)

{
  this_ptr->mouth_frame = frame;
  this_ptr->mouth_timer = hold_time;
  return;
}
