// Name: core_lantern.cpp_FUN_0059d000
// Address: 0059d000
// Address Range: [[0059d000, 0059d032]]
// Convention: unknown
// Signature: void core_lantern_cpp_FUN_0059d000(CWeapon *param_1)

#include "nocturne.h"

void core_lantern_cpp_FUN_0059d000(CWeapon *param_1)

{
  if (*(float *)&param_1[1].field_0x2c <= 0.0) {
    core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(param_1);
    return;
  }
  core_lantern_cpp_FUN_0059ced0(param_1);
  core_weapon_cpp_CWeapon_renderOpaque_FUN_00589b90(param_1);
  return;
}
