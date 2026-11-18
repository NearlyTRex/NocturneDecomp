// Name: core_charactr.cpp_CCharacter_applyGravity_FUN_00423a10
// Address: 00423a10
// Address Range: [[00423a10, 00423a5f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGravity_FUN_00423a10(CCharacter *this_ptr,float delta_time)

{
  if ((this_ptr->is_spectral == 0) && (this_ptr->gravity_enabled != 0)) {
    (this_ptr->velocity).y = delta_time * -32.0f + (this_ptr->velocity).y;
    return;
  }
  (this_ptr->velocity).z = 0.0;
  (this_ptr->velocity).y = (this_ptr->velocity).z;
  (this_ptr->velocity).x = (this_ptr->velocity).y;
  return;
}
