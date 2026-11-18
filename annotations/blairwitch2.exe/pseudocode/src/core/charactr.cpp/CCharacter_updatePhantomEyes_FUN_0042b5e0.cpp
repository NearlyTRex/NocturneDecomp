// Name: core_charactr.cpp_CCharacter_updatePhantomEyes_FUN_0042b5e0
// Address: 0042b5e0
// Address Range: [[0042b5e0, 0042b611]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updatePhantomEyes_FUN_0042b5e0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updatePhantomEyes_FUN_0042b5e0(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((this_ptr->eye_glow_enabled != 0) &&
     (fVar1 = this_ptr->eye_glow_timer - delta_time, this_ptr->eye_glow_timer = fVar1, fVar1 <= 0.0)
     ) {
    this_ptr->eye_glow_timer = 0.0;
    return;
  }
  return;
}
