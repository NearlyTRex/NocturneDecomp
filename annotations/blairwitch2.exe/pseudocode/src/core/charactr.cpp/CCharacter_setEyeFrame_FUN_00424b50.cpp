// Name: core_charactr.cpp_CCharacter_setEyeFrame_FUN_00424b50
// Address: 00424b50
// Address Range: [[00424b50, 00424b81]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setEyeFrame_FUN_00424b50(CCharacter *this_ptr,int eye_side,int frame,float hold_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setEyeFrame_FUN_00424b50(CCharacter *this_ptr,int eye_side,int frame,float hold_time)

{
  this_ptr->blink_timer = hold_time;
  this_ptr->is_blinking = 0;
  if (eye_side == 0) {
    this_ptr->left_eye_frame = frame;
    return;
  }
  this_ptr->right_eye_frame = frame;
  return;
}
