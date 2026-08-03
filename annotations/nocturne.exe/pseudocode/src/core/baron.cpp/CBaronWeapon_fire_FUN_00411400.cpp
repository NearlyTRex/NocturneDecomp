// Name: core_baron.cpp_CBaronWeapon_fire_FUN_00411400
// Address: 00411400
// Address Range: [[00411400, 0041142c]]
// Convention: __cdecl
// Signature: int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00411400(CBaronWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00411400(CBaronWeapon *this_ptr)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(this_ptr);
  if (this_ptr->baron == (CBaron *)0x0) {
    return 0;
  }
  (this_ptr->baron->base).player_input.action_state.fire = 1;
  return 1;
}
