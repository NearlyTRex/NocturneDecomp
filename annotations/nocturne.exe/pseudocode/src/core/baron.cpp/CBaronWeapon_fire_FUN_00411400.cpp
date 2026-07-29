// Name: core_baron.cpp_CBaronWeapon_fire_FUN_00411400
// Address: 00411400
// Address Range: [[00411400, 0041142c]]
// Convention: unknown
// Signature: undefined4 core_baron_cpp_CBaronWeapon_fire_FUN_00411400(CBaronWeapon *param_1)

#include "nocturne.h"

uint core_baron_cpp_CBaronWeapon_fire_FUN_00411400(CBaronWeapon *param_1)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(param_1);
  if (param_1->baron == (CBaron *)0x0) {
    return 0;
  }
  (param_1->baron->base).player_input.action_state.fire = 1;
  return 1;
}
