// Name: core_baron.cpp_CBaronWeapon_fire_FUN_00413df0
// Address: 00413df0
// Address Range: [[00413df0, 00413e1c]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00413df0(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00413df0(CBaronWeapon *this_ptr)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00413f20(this_ptr);
  if (this_ptr->baron == (CBaron *)0x0) {
    return 0;
  }
  (this_ptr->baron->base).player_input.action_state.fire = 1;
  return 1;
}
