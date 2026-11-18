// Name: core_charactr.cpp_CCharacter_setPhantomEyes_FUN_0042b550
// Address: 0042b550
// Address Range: [[0042b550, 0042b5d1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setPhantomEyes_FUN_0042b550(CCharacter *this_ptr,int enabled,float glow_from,float glow_to,float duration,CVector3f color)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setPhantomEyes_FUN_0042b550(CCharacter *this_ptr,int enabled,float glow_from,float glow_to,float duration,CVector3f color)

{
  byte local_c [12];
  
  this_ptr->eye_glow_enabled = enabled;
  this_ptr->eye_glow_from = glow_from;
  this_ptr->eye_glow_to = glow_to;
  this_ptr->eye_glow_duration = duration;
  if (&this_ptr->eye_glow_color == (CVector3f *)local_c) {
    this_ptr->eye_glow_timer = duration;
    return;
  }
  (this_ptr->eye_glow_color).x = color.x;
  (this_ptr->eye_glow_color).y = color.y;
  (this_ptr->eye_glow_color).z = color.z;
  this_ptr->eye_glow_timer = duration;
  return;
}
