// Name: core_charactr.cpp_CCharacter_applyGravity_FUN_0042d700
// Address: 0042d700
// Address Range: [[0042d700, 0042d746]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGravity_FUN_0042d700(CCharacter *this_ptr,float delta_time)

{
  if (this_ptr->is_spectral != 0) {
    (this_ptr->velocity).z = 0.0;
    (this_ptr->velocity).y = (this_ptr->velocity).z;
    (this_ptr->velocity).x = (this_ptr->velocity).y;
    return;
  }
  (this_ptr->velocity).y = delta_time * -32.0f + (this_ptr->velocity).y;
  return;
}
